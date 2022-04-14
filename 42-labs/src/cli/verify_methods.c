/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_methods.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:23:25 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/26 11:48:31 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

void	verify_get(char *tmp_line, t_data *data)
{
	if (strstr(tmp_line, "GET / "))
		data->get.route_root++;
	if (strstr(tmp_line, "GET /4"))
		data->get.route_4++;
	if (strstr(tmp_line, "GET /6"))
		data->get.route_6++;
	if (strstr(tmp_line, "GET /10"))
		data->get.route_10++;
	if (strstr(tmp_line, "GET /20"))
		data->get.route_20++;
}

void	verify_post(char *tmp_line, t_data *data)
{
	if(strstr(tmp_line, "POST / "))
		data->post.route_root++;
	if(strstr(tmp_line, "POST /4"))
		data->post.route_4++;
	if(strstr(tmp_line, "POST /6"))
		data->post.route_6++;
	if(strstr(tmp_line, "POST /10"))
		data->post.route_10++;
	if(strstr(tmp_line, "POST /20"))
		data->post.route_20++;
}

void	verify_delete(char *tmp_line, t_data *data)
{
	if(strstr(tmp_line, "DELETE / "))
		data->delete.route_root++;
	if(strstr(tmp_line, "DELETE /4"))
		data->delete.route_4++;
	if(strstr(tmp_line, "DELETE /6"))
		data->delete.route_6++;
	if(strstr(tmp_line, "DELETE /10"))
		data->delete.route_10++;
	if(strstr(tmp_line, "DELETE /20"))
		data->delete.route_20++;
}

void	verify_error(char *tmp_line, t_data *data)
{
	if(strstr(tmp_line, "Status: 404"))
		data->error.route_error++;
}
