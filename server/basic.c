/*
** basic.c for  in /home/mart_4/rendu/TestPiscine/Minitalk
**
** Made by Thomas Martins
** Login   <mart_4@epitech.net>
**
** Started on  Tue Mar 10 23:55:54 2015 Thomas Martins
** Last update Mon Mar 16 16:14:49 2015 Thomas Martins
*/

#include "../struct.h"

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 9)
    my_putnbr(nb / 10);
  my_putchar(48 + (nb % 10));
  if (nb == 0)
    return (-1);
  return (0);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *s)
{
  int	a;

  a = 0;
  while (s[a])
    {
      my_putchar(s[a]);
      a++;
    }
}
