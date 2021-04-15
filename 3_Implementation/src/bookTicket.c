#include "prototype.h"

void bookTicket(bus *bus_ptr)
{
    int i = 0, busno; char numstr[100];
    system("cls");
    printf("\n---------------------------------------------\n");
    display_busList(bus *ptr);
    printf("\n---------------------------------------------\n");
    printf("\nEnter the Bus ID: \n");
    scanf("%d",&busno);

    system("cls");
    printf("\n---------------------------------------------\n");
    printf("\nYou selected the following Bus with: \n");
    printf("\tBus ID: %d",bus_ptr->bus_id[busno-1]);
    printf("\tBus name: %s",bus_ptr->bus_name[busno-1]);
    printf("\tBus number: &s",bus_ptr->bus_number[busno-1]);

    view_seatStatus(busno);
    FILE *seatFile, *fopen();
    char str1[81]="32", str2[4], str3[4];
    int seat1, seat2, booking = 0;

    for(int i = 1; i <= 8; i++)
    {
        if(busno == i)
        {
            seatFile = fopen("bus'\i'.txt","r+");
            fgets(str1, 80, seatFile);
            fclose(seatFile);
        }
    }

    seat1 = atoi(str1);
    if(seat1 <= 0)
    {
        printf("\nNo seat available.\n");
    }
    else
    {
        printf("\n\n\tAvailable seats: %d\n",seat1);
        printf("\n\n\tNumber of Seats to be book: ");
        scanf("%d", &booking);
        seat1 -= booking;
        itoa(busno, numstr, 10);

        enter_pasengerInfo(booking, numstr);

    }
}    

// void booking()
// {


// seat1=atoi(str1);//covert the string into number
// if(seat1 <= 0)
// {
//  printf("There is no blank seat in this bus ");
// }else
// {
// printf("\n\n\n\t\t\t\tAvailable Seats:------>%d\n",seat1);
// printf("\n\t\t\t\tNumber of Tickets:----->");
// scanf("%d",&booking);
// printf("\n");

// seat1=seat1-booking;
// itoa(trno,numstr,10);
// name_number(booking,numstr);
// printf("\n\t\t\t\tThe Total booking amount is %d",200*booking);
// itoa(seat1, str1, 10);
// //for reading the seats from the user.
// if(trno == 1)
// {
//  f1 = fopen("tr1.txt","w");
//  fputs(str1,f1);
//  fclose(f1);
// }
// else if(trno == 2)
// {
//  f1 = fopen("tr2.txt","w");
//  fputs(str1,f1);
//   fclose(f1);
// }
// else if(trno == 3)
// {
//  f1 = fopen("tr3.txt","w");
//  fputs(str1,f1);
//   fclose(f1);
// }
// else if(trno == 4)
// {
//  f1 = fopen("tr4.txt","w");
//  fputs(str1,f1);
//   fclose(f1);
// }
// else if(trno == 5)
// {
//  f1 = fopen("tr5.txt","w");
//  fputs(str1,f1);
//  fclose(f1);
// }
// }
// }
