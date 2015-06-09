/*
** error_server.c for  in /home/mart_4/rendu/TestPiscine/Minitalk/server
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Wed Mar 18 12:13:54 2015 Thomas Martins
** Last update Wed Mar 18 12:23:53 2015 Thomas Martins
*/

#include "../struct.h"

void	use_prog(void)
{
  putstr_error("The usage is just ./server\n");
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

void	signal_fail(void)
{
  putstr_error("fail on signal SIGUSR1\n");
  exit(0);
}

void	signal_fails(void)
{
  putstr_error("fail on signal SIGUSR2\n");
  exit(0);
}
