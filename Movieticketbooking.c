#include <stdio.h>

int main() {
    int choice, tickets;
    float price = 0, total;

    printf("===== Movie Ticket Booking =====\n");
    printf("1. Pushpa 2\n");
    printf("2. Jawan\n");
    printf("3. Animal\n");
    printf("4. Kalki\n");
    printf("5.Pathaan\n");
    printf("6. Pushpa The Rise\n");
    printf("7. Jawan\n");
    printf("8. Bahubali\n");
    printf("9. RRR\n");
    printf("10.Dangal\n");

    printf("\nEnter movie choice (1-10): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            price = 150;
            printf("You selected Pushpa 2\n");
            break;
        case 2:
            price = 180;
            printf("You selected Jawan\n");
            break;
        case 3:
            price = 200;
            printf("You selected Animal\n");
            break;
        case 4:
            price = 220;
            printf("You selected Kalki\n");
            break;
        case 5:
             price = 250;
             printf("you selected Pathaan\n");
             break;
       case 6:
            price = 300;
            printf("You selected Pushpa The Rise\n");
            break;
        case 7:
            price = 420;
            printf("You selected Dhurandar 2\n");
            break;
        case 8:
             price = 550;
             printf("you selected Bahubali\n");
             break;
        case 9:
            price = 620;
            printf("You selected RRR \n");
            break;
        case 10:
             price = 650;
             printf("you selected Dangal\n");
             break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    total = price * tickets;

    printf("\n----- Booking Details -----\n");
    printf("Tickets: %d\n", tickets);
    printf("Price per ticket: %.2f\n", price);
    printf("Total amount: %.2f\n", total);

    printf("\nBooking Successful!\n");

    return 0;
}
