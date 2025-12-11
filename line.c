#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, spaceCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; 
   
    file = fopen("E:\\10\\file.txt.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        printf("Please check if the file exists at the specified path.\n");
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        
        if (ch == ' ') {
            spaceCount++;
            inWord = 0; 
        }
        
        else if (ch == '\n') {
            lineCount++;
            inWord = 0; 
        }
        else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }
    
    if (charCount > 0) {
        lineCount++;
    }
    

    fclose(file);
    printf("File Analysis Results:\n");
    printf("=====================\n");
    printf("Total characters: %d\n", charCount);
    printf("Total spaces: %d\n", spaceCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);
    
    return 0;
}