// Program to search an element in an array.
/* Algorithm
    Comparing each element with the given the key element.
*/
#include<stdio.h>

int main()
{
    int sizeOfArray, index, keyElement;

    printf("Enter key element which is to be found:\n");
    scanf("%d", &keyElement);

    printf("Enter size of the array: ");
    scanf("%d", &sizeOfArray);
    // Creating array usign the given size.
    int inputArray[sizeOfArray];
    
    // Taking each element from the user.
    for (index = 0; index < sizeOfArray; index++)
    {
        printf("Enter element no. %d: ", index + 1);
        scanf("%d", &inputArray[index]); 
    } // for

    // searching linearly
    index = 0;
    while (index < sizeOfArray)
    {
        if (keyElement == inputArray[index])
        {
           printf("Key found at position no. %d\n", index + 1);
           break;
        } // if
        else 
            if (index == sizeOfArray - 1)
                printf("Key not found\n");
        index++;
    } // while
    
    printf("From the given array: ");
    // Printing the array.
    for (index = 0; index < sizeOfArray; index++)
        printf("%d ", inputArray[index]);
    printf("\n"); 
}// main