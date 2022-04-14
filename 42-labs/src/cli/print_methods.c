/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_methods.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:23:19 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/26 12:24:21 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/get_next_line.h"

void    print_start()
{
    printf(BLUE "\n┏━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┓\n" RE);
    printf(BLUE "┃Total Requests┃  HTTP Method  ┃     Path      ┃\n" RE);
    printf(BLUE "┃━━━━━━━━━━━━━━╂━━━━━━━━━━━━━━━╂━━━━━━━━━━━━━━━┃\n" RE);
}

void    print_end(t_data *data)
{
    if (data->error.route_error)
        printf(RED "┃     %04d     ┃     ERROR     ┃      404      ┃\n" RE,
        data->error.route_error);
    printf(RED "┗━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━┛\n\n" RE);
}                

void    print_get(t_data *data)
{
    if (data->get.route_root)
        printf(BLUE "┃     %04d     ┃      GET      ┃       /       ┃\n" RE,
        data->get.route_root);
    if (data->get.route_4)
        printf(BLUE "┃     %04d     ┃      GET      ┃      /4       ┃\n" RE,
        data->get.route_4);
    if (data->get.route_6)
        printf(BLUE "┃     %04d     ┃      GET      ┃      /6       ┃\n" RE,
        data->get.route_6);
    if (data->get.route_10)
        printf(BLUE "┃     %04d     ┃      GET      ┃      /10      ┃\n" RE,
        data->get.route_10);
    if (data->get.route_20)
        printf(BLUE "┃     %04d     ┃      GET      ┃      /20      ┃\n" RE,
        data->get.route_20);
}

void    print_post(t_data *data)
{
    if (data->post.route_root)
        printf(GREEN "┃     %04d     ┃      POST     ┃       /       ┃\n" RE,
        data->post.route_root);
    if (data->post.route_4)
        printf(GREEN "┃     %04d     ┃      POST     ┃      /4       ┃\n" RE,
        data->post.route_4);
    if (data->post.route_6)
        printf(GREEN "┃     %04d     ┃      POST     ┃      /6       ┃\n" RE,
        data->post.route_6);
    if (data->post.route_10)
        printf(GREEN "┃     %04d     ┃      POST     ┃      /10      ┃\n" RE,
        data->post.route_10);
    if (data->post.route_20)
        printf(GREEN "┃     %04d     ┃      POST     ┃      /20      ┃\n" RE,
        data->post.route_20);
}

void    print_delete(t_data *data)
{
    if (data->delete.route_root)
        printf(RED "┃     %04d     ┃     DELETE    ┃       /       ┃\n" RE,
        data->delete.route_root);
    if (data->delete.route_4)
        printf(RED "┃     %04d     ┃     DELETE    ┃      /4       ┃\n" RE,
        data->delete.route_4);
    if (data->delete.route_6)
        printf(RED "┃     %04d     ┃     DELETE    ┃      /6       ┃\n" RE,
        data->delete.route_6);
    if (data->delete.route_10)
        printf(RED "┃     %04d     ┃     DELETE    ┃      /10      ┃\n" RE,
        data->delete.route_10);
    if (data->delete.route_20)
        printf(RED "┃     %04d     ┃     DELETE    ┃      /20      ┃\n" RE,
        data->delete.route_20);
}
