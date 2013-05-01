# Michael Sit
# Makefile for programming assignment 2
# LEARN HOW TO COMPILE C PROGRAMS!!!!!!!!!!!!!!!!!!!!!

GCC       = gcc -g -O0 -Wall -Wextra -std=gnu99

sortPrint : insertionSort.o sortPrint.o
	${GCC} -o sortPrint sortPrint.o insertionSort.o

sortPrint.o : insertionSort.h sortPrint.c
	${GCC} -c sortPrint.c

insertionSort.o : insertionSort.h insertionSort.c
	${GCC} -c insertionSort.c

heapDriver : heap.o heapDriver.o
	${GCC} -o heapDriver heapDriver.o heap.o

heapDriver.o : heap.h heapDriver.c
	${GCC} -c heapDriver.c

heap.o : heap.h heap.c
	${GCC} -c heap.c
