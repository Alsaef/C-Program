#include <stdio.h>

int main() {
    // Sample array
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Traverse the array using a for loop
    for (int i = 0; i < arraySize; i++) {
        printf("%d\n", myArray[i]);
    }

    return 0;
}
