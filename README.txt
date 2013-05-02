Jesus Magana
jmagana7
pa2

README.txt			This file
heap.c 				The implimentation of the heap as an array
heap.h 				The header for heap so only can use the function names 
heapDriver.c  		The unit test program for the heap ADT
heapSort.h 			The header for heapSort so can only call the function
heapSort.c 			The impimentation of how to do a heap sort on an array
insertionSort.h 	The header for insertionSort so can only call the function
insertionSort.c 	The implimentation of how to do an insertion sort on an array
sortPrint.c 		The unit test for the two sorting algorithms
sortComp.c 			The CPU comparison of insertion sort and heap sort
test.txt			The first test file with only 10 numbers
test2.txt			The second test file with 30,000 numbers

For this program I worked on an overlevel algorithm with Michael Sit, but we have different coding styles so decided to do seperate programs to fit our style. For the Makefile Aaron Ramirez helped me program it since i really am not sure of how to do a Makefile. The driver for the heap is supposed to test every function of the heap ADT to make sure that they work at every level. The sortPrint file is supposed to show two unordered arrays and then sort them using the insertionSort and heapSort methods. The sortComp file is supposed to take in a file and do both heapSort and insertionSort on the integers and it clocks the CPU run time of both algorithms. The heap sort should run in O(nlogn) time on average and the insertion sort should run on O(n^2) time on average so the heap sort should be faster.

The run time on my MacAir was :

Jesus@eduroam-246-95:~/Desktop/pa2 $ ./sortComp test2.txt
HeapSort took 0.010795 seconds.
InsertionSort took 1.068585 seconds.

The run time when ssh to unix server : 

[jmagana7@unix1 ~/pa2]$ ./sortComp test2.txt
HeapSort took 0.010000 seconds.
InsertionSort took 1.600000 seconds.