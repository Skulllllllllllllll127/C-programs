#include <stdio.h>

int Search_Element(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, key, position;
    
    printf("--- Array Search using Search_Element Function ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0 || size > MAX_SIZE) {
        printf("Error: Invalid array size.\n");
        return 1;
    }
    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the key element to search: ");
    scanf("%d", &key);
    position = Search_Element(arr, size, key);
    if (position != -1) {
        printf("\nResult: Element %d found at position: %d.\n", key, position);
    } else {
        printf("\nResult: Element %d was NOT found in the array.\n", key);
    }

    return 0;
}