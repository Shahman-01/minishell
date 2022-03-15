/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppeapod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:59:04 by ppeapod           #+#    #+#             */
/*   Updated: 2022/03/06 15:59:13 by ppeapod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static	t_redir	*ft_redir_find_tail(t_redir *list)
{
	t_redir	*tail;

	tail = NULL;
	while (list)
	{
		tail = list;
		list = list->next;
	}
	return (tail);
}

void	ft_redir_add_back(t_redir **redir, t_redir *new)
{
	if (*redir != NULL)
		ft_redir_find_tail(*redir)->next = new;
	else
		*redir = new;
}

void	ft_redirect(char *str, int *i)
{
	(*i)++;
	if (str[*i] == '>' || str[*i] == '<')
		(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	while (str[*i] && str[*i] != '|' && str[*i] != ' ' && str[*i] != '<' \
			&& str[*i] != '>')
	{
		if (str[*i] == '\'')
			ft_bkslash1(str, i);
		if (str[*i] == '\"')
			ft_bkslash2(str, i);
		else
			(*i)++;
	}
}
