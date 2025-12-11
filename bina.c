#include <stdio.h>
#include <stdlib.h>

struct Product {
    int id;
    float price;
    int quantity;
};

void writeToFile() {
    FILE *file = fopen("E:\\10\\Product.dat", "wb");
    if(!file) {
        printf("Cannot create file.\n");
        return;
    }
    
    struct Product p;
    int n;
    printf("Number of products: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Product %d (id price quantity): ", i+1);
        scanf("%d %f %d", &p.id, &p.price, &p.quantity);
        fwrite(&p, sizeof(p), 1, file);
    }
    fclose(file);
    printf("Saved %d products.\n", n);
}

void readFromFile() {
    FILE *file = fopen("E:\\10\\Product.dat", "rb");
    if(!file) {
        printf("File not found.\n");
        return;
    }
    
    struct Product p;
    printf("\nID\tPrice\tQuantity\n");
    while(fread(&p, sizeof(p), 1, file)) {
        printf("%d\t$%.2f\t%d\n", p.id, p.price, p.quantity);
    }
    fclose(file);
}

int main() {
    int choice;
    
    while(1) {
        printf("\n1. Write to file\n2. Read from file\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        
        if(choice == 1) writeToFile();
        else if(choice == 2) readFromFile();
        else if(choice == 3) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}