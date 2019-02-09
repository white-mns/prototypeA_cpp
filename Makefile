CC       := g++
CPPFLAGS := -g -O3 -MMD -Wall -Wextra

SRCS :=
REL  := src/

include ${REL}Makefile

SRCS+=main.cpp

OBJECTS = $(SRCS:.cpp=.o)
DEPENDS = $(SRCS:.cpp=.d)

main: ${OBJECTS}

clean:
	$(RM) *.o
	$(RM) *.d
	$(RM) src/*.o
	$(RM) src/*.d
	$(RM) main

-include $(DEPENDS)

