/*
** main.c for  in /home/mart_4/rendu/TestPiscine/Minitalk
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Tue Mar 10 23:53:00 2015 Thomas Martins
** Last update Sun Mar 22 17:24:22 2015 Thomas Martins
*/

#include "../struct.h"

void		write_message(int bin)
{
  static char	c;
  static int	i;

  c += (bin << i++);
  if (i > 7)
    {
      if (c == '\0')
	my_putchar('\n');
      else
	my_putchar(c);
      c = 0;
      i = 0;
    }
}

void		signal_server(int sigint)
{
  if (sigint == SIGUSR1)
    write_message(1);
  if (sigint == SIGUSR2)
    write_message(0);
}

void		check_signal(void)
{
  if ((signal(SIGUSR1, signal_server)) ==  SIG_ERR)
    signal_fail();
  if ((signal(SIGUSR2, signal_server)) == SIG_ERR)
    signal_fails();
  while (WAIT);
}

void		init_server(void)
{
  my_putstr("The server is operational!\n");
  my_putstr("And, the PID is : > == > ");
  my_putnbr(getpid());
  my_putchar('\n');
}

int		main(int ac, char **av)
{
  if (ac == 1)
    {
      init_server();
      check_signal();
    }
  else
    use_prog();
  return (SUCESS);
}
