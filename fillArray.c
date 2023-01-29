#include <stdio.h>

    // formula from last assignment
    long int nextCollatz(value) {
            if (value%2 == 0) {
                value = value / 2;
            }
            else {
                value = value * 3 + 1;

            }
        return value;
    }

    // loop for 0-9
void upTo9(int *array) {
    for (int i = 0; i < 10; i++) 
        array[i] = i;
}

    // loop for 9-19 using pointer
void upTo19(int *array) {
    for (int i = 0; i < 10; i++) 
        *(array + i) =  i * 10 + 100;
}

    // loop for 19-25 using pointer
void upTo25(int *array) {

    // first in the array
    *array = 4;
    // rest + 1 each time
    *(array + 1) = 8;
    *(array + 2) = 15;
    *(array + 3) = 16;
    *(array + 4) = 23;
    *(array + 5)= 42;
}

   // loop for 25-39 uisng pointer
void upTo39(int *array) {
	*array = 7;
	for(int i = 1; i < 14; i++)
		*(array + i) = nextCollatz(*(array + i - 1));
}

    // print array to print results
void printArray(int *array) {
    int output = 0;
    for(output = 0; output < 40; output++) {
        printf("%d\n",array[output]);
    }
}
int main() {
    // setting up the array size
    int array[40];

    // calling each function
    upTo9(array);
    upTo19(array + 10);
    upTo25(array + 20);
    upTo39(array + 26);
    printArray(array);
}  
