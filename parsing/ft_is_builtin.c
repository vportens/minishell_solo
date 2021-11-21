/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viporten <viporten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:11:14 by lchristo          #+#    #+#             */
/*   Updated: 2021/11/21 18:53:50 by viporten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_is_builtin(char *str)
{
	char	*built[7] = {"cd", "echo", "env", "pwd", "export", "unset", "exit"};
	int		i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 7 && !ft_strcmp(built[i], str))
	{
		i++;
	}
	if (i == 6)
		return (2);
	if (i < 7)
		return (1);
	return (0);
}
