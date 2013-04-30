/*Jesus Magana */
/*jmagana7 */
/*pa2*/
#if !defined(_HEAP_H_INCLUDE_)
#define _HEAP_H_INCLUDE_
#include <stdio.h>
#include <stdlib.h>

typedef struct heap * heapRef;

heapRef newHeap(int maxSize);
void freeHeap(heapRef* pH);
int isFull(heapRef h);
int isEmpty(heapRef h);
int maxValue(heapRef h);
void printHeap(heapRef h);
void deleteMax(heapRef h);
void insert(heapRef h, int priority);
#endif