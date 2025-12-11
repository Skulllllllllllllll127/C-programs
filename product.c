#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Product {
    int id;
    float price;
    int quantity;
};
void writeProduct();
void readProducts();
void appendProduct();
void searchProduct();
void updateProduct();
void displayMenu();
int productExists(int id);

int main() {
    int choice;
    
    printf("=== PRODUCT MANAGEMENT SYSTEM ===\n");
    printf("Product File: E:\\10\\product.txt\n");
    
    do {
        displayMenu();
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                writeProduct();
                break;
            case 2:
                readProducts();
                break;
            case 3:
                appendProduct();
                break;
            case 4:
                searchProduct();
                break;
            case 5:
                updateProduct();
                break;
            case 6:
                printf("Thank you for using Product Management System!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n");
    } while(choice != 6);
    
    return 0;
}

void displayMenu() {
    printf("\n=== MAIN MENU ===\n");
    printf("1. Write Products (Overwrite file)\n");
    printf("2. Read All Products\n");
    printf("3. Append Product\n");
    printf("4. Search Product by ID\n");
    printf("5. Update Product Quantity\n");
    printf("6. Exit\n");
}

int productExists(int id) {
    FILE *file;
    struct Product p;
    int exists = 0;
    char filepath[] = "E:\\10\\product.txt";
    
    file = fopen(filepath, "r");
    if(file == NULL) return 0;
    
    while(fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) != EOF) {
        if(p.id == id) {
            exists = 1;
            break;
        }
    }
    
    fclose(file);
    return exists;
}

void writeProduct() {
    FILE *file;
    int n, i;
    struct Product p;
    char filepath[] = "E:\\10\\product.txt";
    
    file = fopen(filepath, "w");
    if(file == NULL) {
        printf("Error: Could not create/open file at %s!\n", filepath);
        printf("Please check if the directory E:\\10\\ exists.\n");
        return;
    }
    
    printf("How many products do you want to enter? ");
    scanf("%d", &n);
    
    printf("Enter product details:\n");
    for(i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i+1);
        
        do {
            printf("Enter Product ID: ");
            scanf("%d", &p.id);
            if(productExists(p.id)) {
                printf("Error: Product ID %d already exists! Please use a different ID.\n", p.id);
            }
        } while(productExists(p.id));
        
        printf("Enter Price: $");
        scanf("%f", &p.price);
        printf("Enter Quantity: ");
        scanf("%d", &p.quantity);
        
        // Write to file using fprintf
        fprintf(file, "%d %.2f %d\n", p.id, p.price, p.quantity);
    }
    
    fclose(file);
    printf("\n%d products written to file successfully!\n", n);
    printf("File location: %s\n", filepath);
}

void readProducts() {
    FILE *file;
    struct Product p;
    int count = 0;
    float totalValue = 0;
    char filepath[] = "E:\\10\\product.txt";
    
    file = fopen(filepath, "r");
    if(file == NULL) {
        printf("Error: Could not open file at %s!\n", filepath);
        printf("File may not exist. Use option 1 to create new products.\n");
        return;
    }
    
    printf("\n=== ALL PRODUCTS ===\n");
    printf("File: %s\n", filepath);
    printf("%-10s %-10s %-10s %-12s\n", "ID", "Price", "Quantity", "Total Value");
    printf("------------------------------------------------\n");
    
    // Read from file using fscanf
    while(fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) != EOF) {
        float productValue = p.price * p.quantity;
        totalValue += productValue;
        printf("%-10d $%-9.2f %-10d $%-11.2f\n", p.id, p.price, p.quantity, productValue);
        count++;
    }
    
    if(count == 0) {
        printf("No products found in the file.\n");
    } else {
        printf("------------------------------------------------\n");
        printf("Total products: %d\n", count);
        printf("Total inventory value: $%.2f\n", totalValue);
    }
    
    fclose(file);
}

void appendProduct() {
    FILE *file;
    struct Product p;
    int n, i;
    char filepath[] = "E:\\10\\product.txt";
    
    file = fopen(filepath, "a");
    if(file == NULL) {
        printf("Error: Could not open file at %s!\n", filepath);
        printf("Please check if the directory exists.\n");
        return;
    }
    
    printf("How many products do you want to append? ");
    scanf("%d", &n);
    
    printf("Enter product details to append:\n");
    for(i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i+1);
        
        do {
            printf("Enter Product ID: ");
            scanf("%d", &p.id);
            if(productExists(p.id)) {
                printf("Error: Product ID %d already exists! Please use a different ID.\n", p.id);
            }
        } while(productExists(p.id));
        
        printf("Enter Price: $");
        scanf("%f", &p.price);
        printf("Enter Quantity: ");
        scanf("%d", &p.quantity);
        
        
        fprintf(file, "%d %.2f %d\n", p.id, p.price, p.quantity);
    }
    
    fclose(file);
    printf("\n%d products appended to file successfully!\n", n);
    printf("File location: %s\n", filepath);
}

void searchProduct() {
    FILE *file;
    struct Product p;
    int searchId, found = 0;
    char filepath[] = "E:\\10\\product.txt";
    
    printf("Enter Product ID to search: ");
    scanf("%d", &searchId);
    
    file = fopen(filepath, "r");
    if(file == NULL) {
        printf("Error: Could not open file at %s!\n", filepath);
        printf("File may not exist. Use option 1 to create new products.\n");
        return;
    }
    
    printf("\n=== SEARCH RESULTS ===\n");
    printf("Searching in: %s\n", filepath);
    
    while(fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) != EOF) {
        if(p.id == searchId) {
            printf("\nProduct Found!\n");
            printf("-------------\n");
            printf("ID: %d\n", p.id);
            printf("Price: $%.2f\n", p.price);
            printf("Quantity: %d\n", p.quantity);
            printf("Total Value: $%.2f\n", p.price * p.quantity);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Product with ID %d not found in %s!\n", searchId, filepath);
    }
    fclose(file);
}

void updateProduct() {
    FILE *file, *tempFile;
    struct Product p;
    int updateId, found = 0;
    float newPrice;
    int newQuantity;
    char filepath[] = "E:\\10\\product.txt";
    char tempFilepath[] = "E:\\10\\temp_product.txt";
    
    printf("Enter Product ID to update: ");
    scanf("%d", &updateId);
    
    file = fopen(filepath, "r");
    if(file == NULL) {
        printf("Error: Could not open file at %s!\n", filepath);
        printf("File may not exist. Use option 1 to create new products.\n");
        return;
    }
    
    tempFile = fopen(tempFilepath, "w");
    if(tempFile == NULL) {
        printf("Error: Could not create temporary file!\n");
        fclose(file);
        return;
    }
    
    printf("\nSearching for product ID %d...\n", updateId);
    
    while(fscanf(file, "%d %f %d", &p.id, &p.price, &p.quantity) != EOF) {
        if(p.id == updateId) {
            found = 1;
            printf("\nCurrent Product Details:\n");
            printf("ID: %d\n", p.id);
            printf("Current Price: $%.2f\n", p.price);
            printf("Current Quantity: %d\n", p.quantity);
            printf("Current Total Value: $%.2f\n", p.price * p.quantity);
            
            printf("\nEnter new details:\n");
            printf("Enter new price: $");
            scanf("%f", &newPrice);
            printf("Enter new quantity: ");
            scanf("%d", &newQuantity);
            
            fprintf(tempFile, "%d %.2f %d\n", p.id, newPrice, newQuantity);
            printf("\nProduct updated successfully!\n");
            printf("New Total Value: $%.2f\n", newPrice * newQuantity);
        } else {
            fprintf(tempFile, "%d %.2f %d\n", p.id, p.price, p.quantity);
        }
    }
    fclose(file);
    fclose(tempFile);   
    if(found) {
        remove(filepath);
        rename(tempFilepath, filepath);
        printf("Changes saved to: %s\n", filepath);
    } else {
        remove(tempFilepath);
        printf("Product with ID %d not found in %s!\n", updateId, filepath);
    }
}