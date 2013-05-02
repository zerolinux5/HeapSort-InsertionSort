#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"
#include "insertionSort.h"

int main(int argc, char *argv[]){
	    FILE *in;
	    int i;
	    int j;

        in = fopen(argv[1], "r");
        if(in==NULL){
                printf("unable to open file %s for reading\n", argv[1]);
                exit(1);
        }

        int numOfKeys;
        fscanf(in, "%d", &numOfKeys);
        int keys[numOfKeys];
        int keys2[numOfKeys];
        /*This will read in the numbers and set them inside both arrays*/
        /*so they can later be sorted*/
        for(i = 0; i < numOfKeys;i++){
        	fscanf (in, "%d", &j);
        	keys[i] = j;
        	keys2[i] = j; 
        }
        heapSort(keys,numOfKeys);
        insertionSort(keys2,numOfKeys);

        /*This loop checks to see if both arrays are now sorted*/
        for(i = 0; i < numOfKeys-1;i++){
                if(keys[i] > keys[i+1]){
                        printf("NOT SORTED\n");
                        exit(1);
                }
                if(keys2[i] > keys2[i+1]){
                        printf("NOT SORTED\n");
                        exit(1);
                }
        }
        /*Print both now sorted arrays and end the program*/
        printf("The heapSorted Array");
        for(i = 0; i < numOfKeys;i++){
        	printf(" : %d",keys[i]);
        }
        printf("\nThe insertionSorted Array");
        for(i = 0; i < numOfKeys;i++){
        	printf(" : %d",keys2[i]);
        }
        printf("\n");
        fclose(in);
        return(0);
}