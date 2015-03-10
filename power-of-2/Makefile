# This is a comment line
# Sample makefile for compile c or c++ file

CC          = gcc
CX          = g++
CFLAGS      = -g -Wall
CXXFLAGS    = -g -Wall -ansi
CPPFLAGS    = -Wall -ansi -g
SRCS        = main.c
OBJS        = $(SRCS:.c=.o)
EXECUTABLE  = EXEC

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm *.o *~ $(EXECUTABLE)
