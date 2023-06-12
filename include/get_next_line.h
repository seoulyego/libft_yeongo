/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:10:31 by yeongo            #+#    #+#             */
/*   Updated: 2023/06/12 11:03:20 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "get_next_line_struct.h"
# include <stdlib.h>

void		ft_lst_remove_if(t_buffer **lst, int fd);
t_buffer	*get_node_or_null(t_buffer **lst, int fd);
char		get_char(t_buffer *buf);
char		*get_next_line(int fd);

#endif
