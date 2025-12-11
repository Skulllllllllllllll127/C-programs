#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *file = fopen("E:\\10\\textfile.txt", "w");
    if(!file) {
        printf("Cannot create file.\n");
        return 1;
    }

    char text[500], choice;
   
    do {
        printf("Enter text: ");
        fgets(text, sizeof(text), stdin);
        fprintf(file, "%s", text);
        printf("Continue? (y/n): ");
        scanf("%c", &choice);
        getchar();
    } while(choice == 'y' || choice == 'Y');
    fclose(file);
    file = fopen("E:\\10\\textfile.txt", "r");
    char word[100];
    int totalWords = 0, eWords = 0;
    printf("\nFile content:\n");
    while(fscanf(file, "%s", word) != EOF) {
        printf("%s ", word);
        totalWords++;    
        int len = strlen(word);
        if(len > 0) {
            while(len > 0 && ispunct(word[len-1])) len--;
            if(len > 0 && tolower(word[len-1]) == 'e') eWords++;
        }
    }
    fclose(file);
    printf("\n\nWords ending with 'e': %d/%d\n", eWords, totalWords);
    return 0;
}