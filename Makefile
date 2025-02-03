SHELL = /bin/sh

CC = gcc

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=build/%.o)
CFLAGS = -I inc

.PHONY : all
all : clean build gravsim

.PHONY : build
build:
	mkdir -p build

gravsim : $(OBJS)
	$(CC) $(OBJS) -o $@

build/%.o : src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : clean
clean :
	rm -rf build
	rm -f gravsim

.PHONY : run
run :
	./gravsim