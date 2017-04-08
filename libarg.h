/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libarg.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 09:53:15 by iwordes           #+#    #+#             */
/*   Updated: 2017/04/08 15:48:01 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBARG_H
# define LIBARG_H

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#define ARG_LONG 1
#define ARG_SHOR 0

#define T_ARG0 void (*)()
#define T_ARG1 void (*)(char*)

typedef struct	s_arg
{
	char		*name;
	void		*fn;
	bool		param;
}				t_arg;

void			arg_parse(int *argc, char ***argv, t_arg *arg);

#endif
