CC     := gcc
CFLAGS := -g -Wall -Wextra

SRCS :=
REL  := src/

include ${REL}Makefile

SRCS+=main.c

OBJS   = $(SRCS:.cpp=.o)

main: ${OBJS}

clean:
	$(RM) *.o
	$(RM) main
