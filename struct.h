/*
** struct.h for  in /home/mart_4/rendu/TestPiscine/Minitalk
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Mar 11 00:00:42 2015 Thomas Martins
** Last update Sun Mar 22 16:19:23 2015 Thomas Martins
*/

#ifndef STRUCT_H_
# define STRUCT_H_

# define WAIT (1)
# define SUCESS (0)
# define FAILURE (-1)

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void	my_putchar(char c);
void	my_putstr(char *s);
int	my_putnbr(int nb);
int	my_getnbr(char *s);
void	use_prog(void);
void	putchar_error(char c);
void	putstr_error(char *s);
void	kill_sig_one(void);
void	kill_sig_two(void);

#endif
