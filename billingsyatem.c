#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[30];
    float price;
    int quantity;
};

int main() {
    struct Product p[50];
    int n = 0, choice, i, id, qty;
    float total = 0;

    while (1) {
        printf("\n--- INVENTORY & STORE BILLING SYSTEM ---\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Generate Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice==1) {
            printf("Enter the product ID: ");
            scanf("%d", &p[n].id);
            printf("Enter Product Name: ");
            scanf("%s", p[n].name);
            printf("Enter Price: ");
            scanf("%f", &p[n].price);
            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);
            n++;
            printf("Product Added Successfully!!\n");
        }

        else if (choice==2) {
            printf("\nID\tName\tPrice\tQuantity\n");
            printf("---------------------------------------\n");
            for(i=0; i<n; i++) {
                printf("%d\t%-10s\t%.2f\t%d\n",
                p[i].id,
                p[i].name,
                p[i].price,
                p[i].quantity);
            }
        }

        else if (choice==3) {
            total = 0;
            printf("Enter the procduct ID to purchase (0 to stop):\n");
            while(1) {
                scanf("%d", &id);
                if (id==0)
                    break;

                for(i=0; i<n; i++) {
                    if (p[i].id == id) {
                        printf("Enter quantity: ");
                        scanf("%d", &qty);

                        if (qty <=p[i].quantity){
                            total +=qty*p[i].price;
                            p[i].quantity -=qty;
                            printf("Iteam added to bill ! Enter next product ID (0 to stop):\n");  
                        } 
                        else{
                            printf("Insufficient Stock!!\n");
                        }
                    }
                }
            }
            printf("Total Bill Amount: Rs %.2f\n",total);
        }

        else if (choice==4) {
            printf("Thank you! Exiting...\n");
            break;
        }

        else{
            printf("Invalid Choice!!\n");
        }
    }
    return 0;
}
