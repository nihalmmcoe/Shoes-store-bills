#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[20];
    char address[30];
    char phno[15];  

    int itemCount;
    char itemName[10][50];
    char itemBrand[10][30]; 
    float itemPrice[10];
    float total = 0.0;
    int shoesize[10];  

    printf("!! Welcome to our Shoe Store !!\n");
    printf("Enter Name: ");
    scanf("%19s", name);
    printf("Enter Address: ");
    scanf(" %[^\n]", address); 
    printf("Enter Phone Number: ");
    scanf("%14s", phno);  

    // Input number of items
    printf("Enter number of items (max 10): ");
    if (scanf("%d", &itemCount) != 1 || itemCount > 10 || itemCount < 1) {
        printf("Invalid number of items.\n");
        return 1;
    }

    // Input items, prices, sizes, and brands
    for (int i = 0; i < itemCount; i++) {
        printf("Enter name of item %d: ", i + 1);
        scanf(" %[^\n]", itemName[i]); 
        printf("Enter brand of item %d: ", i + 1); 
        scanf(" %[^\n]", itemBrand[i]); 
        printf("Enter price of item %d: ", i + 1);
        if (scanf("%f", &itemPrice[i]) != 1 || itemPrice[i] < 0) {
            printf("Invalid price.\n");
            return 1;
        }
        printf("Enter size: ");
        if (scanf("%d", &shoesize[i]) != 1 || shoesize[i] < 0) {
            printf("Invalid size.\n");
            return 1;
        }
        total += itemPrice[i];
    }

    // Print receipt
    printf("\n------------------------ XYZ Shoe Store --------------------\n");
    printf("|                                                             |\n");
    printf("|         ABC chowk, Special Baug, Pune, Maharashtra          |\n");
    printf("|                   Contact No. - 1234567890                  |\n");
    printf("--------------------------------------------------------------\n");
    printf("\n");
    printf("Name: %-20s\n", name);
    printf("Address: %-30s\n", address);
    printf("Phone number: %-15s\n", phno);  // Print phone number as string

    // Print the bill
    printf("\n____________________________ Bill ____________________________\n");
    printf("%-15s %-15s %10s %15s\n", "Item", "Brand", "Price", "Size"); 
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < itemCount; i++) {
        printf("%-15s %-15s %10.2f %15d\n", itemName[i], itemBrand[i], itemPrice[i], shoesize[i]); 
    }

    printf("-------------------------------------------------------------\n");
    printf("%-15s %-15s %10.2f\n", "Total","  ", total);
    printf("-------------------------------------------------------------\n");
    printf("Thank you for buying... Visit Again!!!\n");

    return 0;
}

