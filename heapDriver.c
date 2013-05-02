/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(int argc, char *argv[]){
	int data[] = {10,1,100};
	heapRef H = newHeap(5);
	heapRef H2 = buildHeap(5, data, 3);
	printHeap(H2);
	printf("Is the file empty? : %d\n", isEmpty(H));
	if(!isFull(H))
		insert(H, 20);
	printHeap(H);
	if(!isFull(H))
		insert(H, 50);
	printHeap(H);
	if(!isFull(H))
		insert(H, 20);
	printHeap(H);
	if(!isFull(H))
		insert(H, 100);
	printf("Is the file Empty? : %d\n", isEmpty(H));
	printHeap(H);
	if(!isEmpty(H))
		deleteMax(H);
	printHeap(H);
	printf("What is the max value: %d\n", maxValue(H));
	if(!isEmpty(H))
		deleteMax(H);
	printHeap(H);
	if(!isFull(H))
		insert(H, 90);
	printHeap(H);
	if(!isEmpty(H))
		deleteMax(H);
	printHeap(H);
	if(!isEmpty(H))
		deleteMax(H);
	printHeap(H);
	if(!isEmpty(H))
		deleteMax(H);
	printHeap(H);
	if(!isEmpty(H))
		deleteMax(H);
	if(!isFull(H))
		insert(H, 100);
	printHeap(H);
	freeHeap(&H);
	freeHeap(&H2);
	return 0;
}