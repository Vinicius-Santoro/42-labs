/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cli.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:16:47 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/27 16:09:17 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

int	main(char *tmp_line, t_data *data)
{
	int	fd;

	init_vars(data);
	fd = open(LOG, O_RDONLY);
	if (fd == -1)
	{
		printf(RED "\nErro na leitura do arquivo LOG.\n\n" RE);
		return (EXIT_FAILURE);
	}
	while (1)
	{
		tmp_line = get_next_line(fd);
		if (tmp_line == NULL)
			break ;
		verify_get(tmp_line, data);
		verify_post(tmp_line, data);
		verify_delete(tmp_line, data);
		verify_error(tmp_line, data);
		free(tmp_line);
	}
	print_start();
	print_get(data);
	print_post(data);
	print_delete(data);
	print_end(data);
}
