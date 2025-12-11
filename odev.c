#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *evenFile, *oddFile;
    int numbers[100];
    int size;
    
    printf("How many numbers? ");
    scanf("%d", &size);
    
    printf("Enter %d numbers: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    
    evenFile = fopen("E:\\10\\even.txt", "w");
    oddFile = fopen("E:\\10\\odd.txt", "w");
    
    if(!evenFile || !oddFile) {
        printf("Error: Cannot create files at E:\\10\\\n");
        return 1;
    }

    for(int i = 0; i < size; i++) {
        if(numbers[i] % 2 == 0) {
            fprintf(evenFile, "%d\n", numbers[i]);
        } else {
            fprintf(oddFile, "%d\n", numbers[i]);
        }
    }
    
    fclose(evenFile);
    fclose(oddFile);
    
    printf("Numbers separated and saved to E:\\10\\even.txt and E:\\10\\odd.txt\n");
    
    return 0;
}