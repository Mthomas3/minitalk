/*
** main.c for  in /home/mart_4/rendu/TestPiscine/Minitalk/client
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Sun Mar 15 23:43:38 2015 Thomas Martins
** Last update Sun Apr 12 14:34:43 2015 Thomas Martins
*/

#include "../struct.h"

int	send(int pid, char msg)
{
  int	a;

  a = -1;
  while (++a < 8)
    {
      usleep(80);
      if (((msg >> a) & 1) == 1)
	{
	  if ((kill(pid, SIGUSR1)) < 0)
	    kill_sig_one();
	}
      else
	{
	  if ((kill(pid, SIGUSR2)) < 0)
	    kill_sig_two();
	}
    }
  return (SUCESS);
}

void	message_send(int pid_save, char *msg)
{
  int	a;

  a = -1;
  /* if (pid_save < 0 || pid_save == 0) */
  /*   { */
  /*     my_putstr("error on PID, try again please\n"); */
  /*     exit(0); */
  /*   } */
  while (msg[++a] != '\0')
    send(pid_save, msg[a]);
  send(pid_save, msg[a]);
}

void	init(char **av)
{
  my_putstr("\033[01;35m");
  my_putstr("Wait please, processing the current command! > \n");
  message_send(my_getnbr(av[1]), av[2]);
  my_putstr("the message has been sent!\n");
  my_putstr("\033[0m");
}

int	main(int ac, char **av)
{
  if (ac > 2)
    init(av);
  else
    use_prog();
  return (SUCESS);
}
