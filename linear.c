#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, i;
    int search_element;
    int position = -1; 
    printf("--- Array Element Search (Linear Search) ---\n");
    printf("Enter the size of the array: ");
    scanf("%d", &size);
   
    printf("Enter %d integer elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to search for: ");
    scanf("%d", &search_element);

    for (i = 0; i < size; i++) {
        if (arr[i] == search_element) {
            position = i + 1; 
            break; 
        }
    }

    if (position != -1) {
        printf("\nElement %d found at position: %d\n", search_element, position);
    } else {
        printf("\nElement %d was NOT found in the array.\n", search_element);
    }
}