##
## Makefile for  in /home/mart_4/rendu/CPE_2014_allum1
##
## Made by Thomas Martins
## Login   <mart_4@epitech.net>
##
## Started on  Sun Feb 22 16:59:48 2015 Thomas Martins
## Last update Wed Mar 18 12:27:56 2015 Thomas Martins
##

CC	= cc

RM	= rm -f

NAME	= ./server/server

NAMEB	= ./client/client

SRC	= server/main.c \
	  server/basic.c \
	  server/my_getnbr.c \
	  server/error_server.c

OBJ	= $(SRC:.c=.o)

SRCB	= client/main.c \
	  client/basic.c \
	  client/my_getnbr.c \
	  client/error_client.c


OBJB	= $(SRCB:.c=.o)

all:	$(NAME) $(NAMEB)

$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(NAMEB): $(OBJB)
	$(CC) -o $(NAMEB) $(OBJB)

clean:
	$(RM) $(OBJ) $(OBJB)

fclean:		clean
	$(RM) $(NAME) $(NAMEB)

re:		fclean all
