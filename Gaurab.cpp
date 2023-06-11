#include <stdio.h>

int main() {
    int choice, quantity;
    float price, total_amount = 0.0;

    printf("Chwasssai Bhattipasal!\n");
    printf("=================================================\n");
    printf("| Item          | Description         | Price   |\n");
    printf("================================================\n");
    printf("| 1. Gundruk   | Gundruk Sadeko       | Rs. 110 |\n");
    printf("| 2. Momo      | Thulo momo (Buff)    | Rs. 275 |\n");
    printf("| 3. Sukuti    | Buff sukuti          | Rs. 150 |\n");
    printf("| 4. Rum       | Khukuri              | Rs. 655 |\n");
    printf("| 5. Exit      |                      |         |\n");
    printf("=================================================\n");

    do {
        printf("\nSelect the item no. : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                price = 110;
                printf("\nYou chose a Gundruk Sadeko. Enter quantity: ");
                scanf("%d", &quantity);
                total_amount += price * quantity;
                break;
            case 2:
                price = 275;
                printf("\nYou chose a Thulo momo . Enter quantity: ");
                scanf("%d", &quantity);
                total_amount += price * quantity;
                break;
            case 3:
                price = 150;
                printf("\nYou chose a Buff sukuti. Enter quantity: ");
                scanf("%d", &quantity);
                total_amount += price * quantity;
                break;
            case 4:
                price = 655;
                printf("\nYou chose a Rum. Enter quantity: ");
                scanf("%d", &quantity);
                total_amount += price * quantity;
                break;
            case 5:
                printf("\n=============================================\n");
                printf("Total amount: Rs.%.2f\n", total_amount);
                printf("Thank you for your order!\n");
                printf("=============================================\n");
                break;
            default:
                printf("\nInvalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
    } while(choice != 5);

    return 0;
}

