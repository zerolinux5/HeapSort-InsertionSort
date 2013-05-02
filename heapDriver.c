/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

/*This program will test all the functions and try to add when full and to*/
/*delete when empty*/
int main(void){
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
	printHeap(H);
	if(!isFull(H))
		insert(H, 30);
	printHeap(H);
	printf("Is the file Full : %d\n", isFull(H));
	//Inserted to the max now going to delete 

	printf("About to start deleting:\n");
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

	//Is now empty and will insert to see if still works
	if(!isFull(H))
		insert(H, 100);
	printHeap(H);
	freeHeap(&H);
	freeHeap(&H2);
	return 0;
}