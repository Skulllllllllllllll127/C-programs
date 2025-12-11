#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[] = "E:\\10\\file.txt.txt";
    char destPath[] = "E:\\10\\reverse.txt";
    
    sourceFile = fopen(sourcePath, "r");
    destFile = fopen(destPath, "w");
    
    if(!sourceFile || !destFile) {
        printf("Error opening files.\n");
        return 1;
    }
    
    // Read entire file
    fseek(sourceFile, 0, SEEK_END);
    long fileSize = ftell(sourceFile);
    fseek(sourceFile, 0, SEEK_SET);
    
    char *buffer = malloc(fileSize + 1);
    fread(buffer, 1, fileSize, sourceFile);
    buffer[fileSize] = '\0';
    
    printf("Original file: %s\n", sourcePath);
    printf("Content length: %ld characters\n\n", fileSize);
    
    printf("Original content:\n");
    printf("-----------------\n");
    printf("%s\n", buffer);
    
    printf("\nReversed content:\n");
    printf("-----------------\n");
    
    // Write reversed content
    for(long i = fileSize - 1; i >= 0; i--) {
        fputc(buffer[i], destFile);
        putchar(buffer[i]);
    }
    
    free(buffer);
    fclose(sourceFile);
    fclose(destFile);
    
    printf("\n\nSuccess! Reversed file saved as: %s\n", destPath);
    
    return 0;
}