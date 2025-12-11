#include <stdio.h>
#define MAX_SIZE 100
void main() {
    char s_len[] = "Programming";
    char s_cmp1[MAX_SIZE] = "Code";
    char s_cmp2[MAX_SIZE] = "Code";
    char s_copy_src[] = "SourceData";
    char s_copy_dest[MAX_SIZE];
    char s_concat_base[MAX_SIZE] = "Hello ";
    char s_concat_add[] = "World";
    char s_rev[MAX_SIZE] = "ReverseMe";
    int i, j;
    int len;
    int equal;
    char temp;
    printf("--- All String Operations in Single Main Function ---\n");
    printf("---------------------------------------------------\n");
    i = 0;
    len = 0;
    while (s_len[i] != '\0') {
        len++;
        i++;
    }
    printf("a) Length of \"%s\": %d\n", s_len, len);
    i = 0;
    equal = 1;
    while (s_cmp1[i] != '\0' || s_cmp2[i] != '\0') {
        if (s_cmp1[i] != s_cmp2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if (equal == 1) {
        printf("b) Comparison (\"%s\" vs \"%s\"): Strings are EQUAL.\n", s_cmp1, s_cmp2);
    } else {
        printf("b) Comparison (\"%s\" vs \"%s\"): Strings are NOT EQUAL.\n", s_cmp1, s_cmp2);
    }
    i = 0;
    while (s_copy_src[i] != '\0') {
        s_copy_dest[i] = s_copy_src[i];
        i++;
    }
    s_copy_dest[i] = '\0';
    printf("c) Copy SRC=\"%s\", DEST is now \"%s\"\n", s_copy_src, s_copy_dest);
    printf("d) Concatenate: BASE=\"%s\", ADD=\"%s\"\n", s_concat_base, s_concat_add);
    int dest_len = 0;
    while (s_concat_base[dest_len] != '\0') {
        dest_len++;
    }
    i = 0;
    while (s_concat_add[i] != '\0') {
        s_concat_base[dest_len + i] = s_concat_add[i];
        i++;
    }
    s_concat_base[dest_len + i] = '\0';
    printf("   Resulting BASE string: \"%s\"\n", s_concat_base);
    printf("e) Reverse: Original=\"%s\"\n", s_rev);
    int start = 0;
    int end = 0;
    while (s_rev[end] != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        temp = s_rev[start];
        s_rev[start] = s_rev[end];
        s_rev[end] = temp;
        
        start++;
        end--;
    }
    printf("   Resulting string: \"%s\"\n", s_rev);
}