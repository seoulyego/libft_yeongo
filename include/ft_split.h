/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeongo <yeongo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:41:31 by yeongo            #+#    #+#             */
/*   Updated: 2023/06/13 00:05:33 by yeongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_H
# define FT_SPLIT_H

int		ft_res_size(char const *str, char sep);
char	**ft_split(char const *s, char c);
char	**ft_split_set(char const *s, char *charset);

#endif
