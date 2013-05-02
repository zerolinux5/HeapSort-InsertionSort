# $Id: Makefile,v 1.8 2013-05-02 14:02:11-07 - - $

# Aaron Ramirez - aramir22@ucsc.edu

MKFILE   =  Makefile

GCC      =  gcc -g -O0 -Wall -Wextra -std=gnu99 

CHEADER  =  insertionSort.h heap.h heapSort.h
CSOURCE  =  heapDriver.c ${CHEADER:.h=.c} sortPrint.c sortComp.c
EXECBIN  =  heapDriver sortPrint sortComp
#OBJECTS  =	${CSOURCE:.c=.o}
SOURCES	 =	${CHEADER} ${CSOURCE} ${MKFILE} 
ALLFILES =	${SOURCES} README

all	: ${EXECBIN}

# ${EXECBIN} : ${OBJECTS}
# 	${GCC} -o $@ ${OBJECTS}

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
