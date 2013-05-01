# Jesus Magana
# Makefile for pa2

GCC       = gcc -g -O0 -Wall -Wextra -std=gnu99

store : list.o store.o
	${GCC} -o store store.o list.o

store.o : list.h store.c
	${GCC} -c store.c

heap.o : heap.h heap.c
	${GCC} -c heap.c

heapDriver : heapDriver.o heap.o
	${GCC} -o heapDriver heapDriver.o heap.o

heapDriver.o : heap.h heapDriver.c
	${GCC} -c heapDriver.c