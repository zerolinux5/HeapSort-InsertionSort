/*Jesus Magana */
/*jmagana7 */
/*pa2*/
#if !defined(_HEAP_H_INCLUDE_)
#define _HEAP_H_INCLUDE_
#include <stdio.h>
#include <stdlib.h>

heap newHeap(int maxSize);
int isFull(heap h);
int isEmpty(heap h);
int maxValue(heap h);
void printHeap(heapRef h);
void deleteMax(heap h);
void insert(heap h, int priority);
#endif