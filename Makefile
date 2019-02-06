CC     := g++
CFLAGS := -g -Wall -Wextra

SRCS :=
REL  := src/

include ${REL}Makefile

SRCS+=main.cpp

OBJS   = $(SRCS:.cpp=.o)

main: ${OBJS}

clean:
	$(RM) *.o
	$(RM) main

