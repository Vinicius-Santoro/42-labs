/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:24:34 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/26 11:48:09 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

void	init_vars(t_data *data)
{
	data->get.route_4 = 0;
	data->get.route_6 = 0;
	data->get.route_10 = 0;
	data->get.route_20 = 0;
	data->get.route_root = 0;
	data->post.route_4 = 0;
	data->post.route_6 = 0;
	data->post.route_10 = 0;
	data->post.route_20 = 0;
	data->post.route_root = 0;
	data->delete.route_4 = 0;
	data->delete.route_6 = 0;
	data->delete.route_10 = 0;
	data->delete.route_20 = 0;
	data->delete.route_root = 0;
	data->error.route_error = 0;
}
