/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(int argc, char *argv[]){
	heapRef H = newHeap(5);
	printf("Is the file empty? : %d\n", isEmpty(H));
	insert(H, 20);
	printHeap(H);
	insert(H, 50);
	printHeap(H);
	insert(H, 20);
	printHeap(H);
	insert(H, 100);
	printf("Is the file Empty? : %d\n", isEmpty(H));
	printHeap(H);
	deleteMax(H);
	printHeap(H);
	printf("What is the max value: %d\n", maxValue(H));
	deleteMax(H);
	printHeap(H);
	insert(H, 90);
	printHeap(H);
	deleteMax(H);
	printHeap(H);
	deleteMax(H);
	printHeap(H);
	deleteMax(H);
	printHeap(H);
	deleteMax(H);
	insert(H, 100);
	printHeap(H);
	freeHeap(&H);
	return 0;
}