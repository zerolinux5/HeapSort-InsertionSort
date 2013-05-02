# Jesus Magana jmagana7@ucsc.edu

GCC      =  gcc -g -O0 -Wall -Wextra -std=gnu99 

CHEADER  =  insertionSort.h heap.h heapSort.h
CSOURCE  =  heapDriver.c ${CHEADER:.h=.c} sortPrint.c sortComp.c
EXECBIN  =  heapDriver sortPrint sortComp
SOURCES	 =	${CHEADER} ${CSOURCE} Makefile
ALLFILES =	${SOURCES} README

all	: ${EXECBIN}

%.o : %.c
	${GCC} -c $<

heapDriver : heapDriver.c heap.o
	${GCC} -o $@ $^

heapSort : heapSort.c heap.o
	${GCC} -o $@ $^

sortComp : sortComp.c insertionSort.o heapSort.o heap.o
	${GCC} -o $@ $^

sortPrint : sortPrint.c insertionSort.o heapSort.o heap.o
	${GCC} -o $@ $^

clean : 
	- rm *.o
