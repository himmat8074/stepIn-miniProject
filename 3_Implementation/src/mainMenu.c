#include "prototype.h"

void display_mainMenu()
{
    int choice;
    do{
        system("cls");
        printf("\n---------------------------------------------\n");
        printf("Select the option: \n");
        printf("\t 1. View Bus List \n\n");
        printf("\t 2. Book Tickets \n\n");
        printf("\t 3. Cancel Booking \n\n");
        printf("\t 4. View Available Seats \n\n");
        printf("\t 5. Exit the Application \n\n"); 

        scanf("%d",&choice);

        switch (choice)
        {
        case 1: display_busList(bus *ptr); break;
        case 2: bookTicket(bus *ptr); break;
        case 3: cancelBooking(); break;
        case 4: viewAvailbleSeats(); break;
        
        default:
            break;
        }
    }while (choice != 5);
    
    system("cls");
    printf("\n---------------------------------------------\n");
    printf("Thank you for using the HSR Bus Application!");
    printf("\n---------------------------------------------\n");
    getch();    
}