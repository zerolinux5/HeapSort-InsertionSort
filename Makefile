# Jesus Magana
# Makefile for programming assignment 2

GCC       = gcc -g -O0 -Wall -Wextra -std=gnu99

sortComp : insertionSort.o sortComp.o
	${GCC} -o sortComp sortComp.o insertionComp.o

sortComp.o : insertionSort.h sortComp.c
	${GCC} -c sortPrint.c

sortPrint : insertionSort.o heapSort.o sortPrint.o
	${GCC} -o sortPrint sortPrint.o insertionSort.o heapSort.o

sortPrint.o : insertionSort.h heapSort.h sortPrint.c
	${GCC} -c sortPrint.c

insertionSort.o : insertionSort.h insertionSort.c
	${GCC} -c insertionSort.c

heapSort.o : heap.h heap.c heapSort.h heapSort.c
	${GCC} -c heapSort.c

heapDriver : heap.o heapDriver.o
	${GCC} -o heapDriver heapDriver.o heap.o

heapDriver.o : heap.h heapDriver.c
	${GCC} -c heapDriver.c

heap.o : heap.h heap.c
	${GCC} -c heap.c
