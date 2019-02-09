CC     := g++
CFLAGS := -g -O3 -Wall -Wextra

SRCS :=
REL  := src/

include ${REL}Makefile

SRCS+=main.cpp

OBJS = $(SRCS:.cpp=.o)

main: ${OBJS}

clean:
	$(RM) *.o
	$(RM) main

