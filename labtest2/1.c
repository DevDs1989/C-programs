// Pointers for arrays

#include <stdio.h>

int main(){

    int arr[6] = { 1, 2, 3,4 ,5, 6};

    int * ptrArr  = arr;

    printf("Be default pointer to an array points to the address of 0th index \nPointer Adress: %p \t Array index 0 Address: %p"  , ptrArr , &arr[0]);
    ptrArr++;
    printf("\nWhen incremented the array pointers index is incremented\n");
    printf("Address of pointer after increment: %p\tAddress of Array index 1: %p "  , ptrArr , &arr[1]);
    return 0;

    int (*ptrToWholeArray)[6];
    ptrToWholeArray = &arr;

    printf("\narray of pointers can be assigned to an Array where each pointer will point to its respective index\n");


    printf("\nAddress of pointer array%d: %p \t Address of original %d: %p", ptrToWholeArray , arr);




}
