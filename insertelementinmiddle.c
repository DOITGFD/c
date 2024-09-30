#include <stdio.h>

int main() {
    int arraysize;
    printf("Enter the size of array: ");
    scanf("%d", &arraysize);

    int array[arraysize];
    printf("Enter the array elements: \n");
    for (int i = 0; i < arraysize; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array before insertion: \n");
    for (int i = 0; i < arraysize; i++) {
        printf("%d\n", array[i]);
    }

    int index, middleelement;
    printf("Enter the index position the value has to be inserted: ");
    scanf("%d", &index);
    printf("Enter the element to be inserted at the given index: ");
    scanf("%d", &middleelement);
    printf("\n");

    for (int i = arraysize - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }
    array[index] = middleelement;
    arraysize++;

    printf("Array after insertion: \n");
    for (int i = 0; i < arraysize; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}