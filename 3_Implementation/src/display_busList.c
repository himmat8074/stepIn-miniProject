#include "prototype.h"

void display_busList(bus *ptr)
{
  system("cls");
  printf("\n---------------------------------------------\n");
  int i = 0;
  while (ptr->bus_id[i] != "\0")
  {
      printf("\n\tBus ID: %d",ptr->bus_id[i]);
      printf("\tBus Name: %s",ptr->bus_name[i]);
      printf("\tBus Number: %d",ptr->bus_number[i]);
      printf("\n");
      i++;
  }
  // int choice;  
  // do
  // {
  //   printf("\n---------------------------------------------\n");
  //   printf("Select the option:\n");
  //   printf("\t 1. Continue to Main Menu \n\n");
  //   printf("\t 2. Exit the Application \n\n");

  //   scanf("%d",&choice);
  //   switch (choice)
  //   {
  //   case 1: display_mainMenu(); break;
  //   case 2: exit(0); break;
  //   default: printf("\nInvalid option, try again."); break;
  //   }
  // } while (choice != 2);
  
  getch();
}