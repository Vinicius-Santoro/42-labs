/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:15:18 by vnazioze          #+#    #+#             */
/*   Updated: 2022/02/26 11:49:39 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

# define BUFFER_SIZE 42
# define LOG "./log/server.log"
# define GREEN "\033[0;32m"
# define BLUE "\033[0;34m"
# define RED "\033[0;31m"
# define RE "\033[0m"
# define ROOT_TEXT "/: para ver as instruções do jogo. \n\
/4: para jogar um dado de 4 lados.\n\
/6: para jogar um dado de 6 lados.\n\
/10: para jogar um dado de 10 lados.\n\
/20: para jogar um dado de 20 lados.\
"

typedef struct s_method_get
{
	int	route_4;
	int	route_6;
	int	route_10;
	int	route_20;
	int	route_root;

}	t_method_get;

typedef struct s_method_post
{
	int	route_4;
	int	route_6;
	int	route_10;
	int	route_20;
	int	route_root;
	
}	t_method_post;

typedef struct s_method_delete
{
	int	route_4;
	int	route_6;
	int	route_10;
	int	route_20;
	int	route_root;

}	t_method_delete;

typedef struct s_method_error
{
	int	route_4;
	int route_error;

}	t_method_error;

typedef struct s_data
{
	t_method_get	get;
	t_method_post	post;
	t_method_delete	delete;
	t_method_error error;

}	t_data;

char	*get_next_line(int fd);
char	*ft_strdup(char *string);
int		ft_strlen(const char *string);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int character);
size_t	ft_strlcpy(char *destiny, const char *source, size_t destiny_size);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	verify_get(char *tmp_line, t_data *data);
void	verify_post(char *tmp_line, t_data *data);
void	verify_delete(char *tmp_line, t_data *data);
void	verify_error(char *tmp_line, t_data *data);
void	print_get(t_data *data);
void	print_post(t_data *data);
void	print_delete(t_data *data);
void	init_vars(t_data *data);
void	print_start(void);
void    print_end(t_data *data);

#endif
