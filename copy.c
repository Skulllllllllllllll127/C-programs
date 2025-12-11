
#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *sourceFile, *destFile;
    char ch;
    int charCount = 0, spaceCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;
    
    sourceFile = fopen("E:\\10\\file.txt.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file E:\\10\\file.txt.txt\n");
        
    }
    
    destFile = fopen("E:\\10\\copy.txt.txt", "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file E:\\10\\copy.txt.txt\n");
        fclose(sourceFile);
        
    }
    
    printf("Copying from E:\\10\\file.txt.txt to E:\\10\\copy.txt.txt\n");
    printf("Progress: ");
    
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
        charCount++;
        
        if (charCount % 50 == 0) {
            printf(".");
        }
        
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
    
    fclose(sourceFile);
    fclose(destFile);
    
    printf(" Done!\n\n");
    
    printf("FILE COPY SUMMARY\n");
    printf("=================\n");
    printf("Operation: File copy completed successfully\n");
    printf("Source: E:\\10\\file.txt.txt\n");
    printf("Destination: E:\\10\\copy.txt.txt\n\n");
    
    printf("CONTENT STATISTICS:\n");
    printf("-------------------\n");
    printf("Characters: %d\n", charCount);
    printf("Spaces: %d\n", spaceCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    float avgWordLength = (wordCount > 0) ? (float)(charCount - spaceCount) / wordCount : 0;
    float avgWordsPerLine = (lineCount > 0) ? (float)wordCount / lineCount : 0;
    
    printf("\nADDITIONAL METRICS:\n");
    printf("-------------------\n");
    printf("Average word length: %.2f characters\n", avgWordLength);
    printf("Average words per line: %.2f\n", avgWordsPerLine);
    printf("File size: %d bytes\n", charCount);
}