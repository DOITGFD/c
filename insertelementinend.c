#include <stdio.h>

int main() {
    int arraysize;
    printf("Enter the size of array: ");
    scanf("%d", &arraysize);

    int array[arraysize];
    printf("Enter the array elements: \n");
    for (int i = 0; i < arraysize; i++) { // Corrected loop condition
        scanf("%d", &array[i]);
    }

    printf("Array before insertion: \n");
    for (int i = 0; i < arraysize; i++) { // Corrected loop condition
        printf("%d\n", array[i]);
    }

    int lastelement;
    printf("Enter the element to insert at last: ");
    scanf("%d", &lastelement);
    printf("\n");

    array[arraysize - 1] = lastelement;

    printf("Array after insertion: \n");
    for (int i = 0; i < arraysize; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
