
// C program to demonstrate
// pointer to an array.

#include <stdio.h>

int main()
{

    // Pointer to an array of five numbers
    int(*a)[5];

    int b[5] = { 1, 2, 3, 4, 5 };

    int i = 0;

    // Points to the whole array b

    a = &b;

    for (i = 0; i < 5; i++)

        printf("%d\n", (*a + i));
    return 0;
}


//array of pointers
/**
#include <stdio.h>

const int SIZE = 3;

int main()
{

    // creating an array
    int arr[] = { 1, 2, 3 };

    // we can make an integer pointer array to
    // storing the address of array elements
    int i, *ptr[SIZE];

    for (i = 0; i < SIZE; i++) {

        // assigning the address of integer.
        ptr[i] = &arr[i];
    }

    // printing values using pointer
    for (i = 0; i < SIZE; i++) {

        printf("Value of arr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
**/
