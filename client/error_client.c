/*
** error_client.c for  in /home/mart_4/rendu/TestPiscine/Minitalk/client
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Mar 18 11:48:23 2015 Thomas Martins
** Last update Wed Mar 18 12:13:33 2015 Thomas Martins
*/

#include "../struct.h"

void	use_prog(void)
{
  my_putstr("\033[01;35m");
  putstr_error("the usage is ./client [PID] 'write the caracter'\n");
  my_putstr("\033[0m");
  exit(0);
}

void	putchar_error(char c)
{
  write(2, &c, 1);
}

void	putstr_error(char *s)
{
  int	a;

  a = -1;
  while (s[++a])
    putchar_error(s[a]);
}

void	kill_sig_one(void)
{
  my_putstr("\033[01;35m");
  putstr_error("fail on kill in client > SIGUSR1\n");
  my_putstr("\033[0m");
  exit(0);
}

void	kill_sig_two(void)
{
  my_putstr("\033[01;35m");
  putstr_error("fail on kill in client > SIGUSR2");
  my_putstr("\033[0m");
  exit(0);
}
