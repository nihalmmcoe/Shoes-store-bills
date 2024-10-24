#include <stdio.h>

int main() {
    char name[15];
    char address[30]; 
    int phno; 
    
    int itemCount;
    
    char itemName[10][50]; 
    float itemPrice[10];   
    float total = 0.0;
    int shoesize[15]; 

    printf("!!Welcome to our Shoe Store!!\n");
    printf("Enter Name: ");
    scanf("%14s", name); 
    printf("Enter Address: ");
    scanf("%29s", address); 
    printf("Enter Phone Number: ");
    scanf("%d", &phno); 

    // Input number of items
    printf("Enter number of items: ");
    scanf("%d", &itemCount);

    // Input items and prices
    for (int i = 0; i < itemCount; i++) {
        printf("Enter name of item %d: ", i + 1);
        scanf("%49s", itemName[i]); 
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &itemPrice[i]);
        printf("Enter size: ");
        scanf("%d", &shoesize[i]); 
        total += itemPrice[i];
    }
    
    printf("_______________\n");
    printf("Name: %-15s\n", name);
    printf("Address: %-30s\n", address);
    printf("Phone number: %-10d\n", phno);

    // Print the bill
    printf("\n_______Bill _______\n");
    printf("%-20s %10s %-15s\n", "Item", "Price", "Size"); 
    printf("----------------------------------\n");

    for (int i = 0; i < itemCount; i++) {
        printf("%-20s %10.2f %-15d\n", itemName[i], itemPrice[i], shoesize[i]); 
    }

    printf("----------------------------------\n");
    printf("%-20s %10.2f\n", "Total", total);

    return 0;
}
