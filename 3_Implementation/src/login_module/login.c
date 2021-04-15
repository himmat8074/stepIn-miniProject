#include "prototype.h"

void login()
{   
    system("cls");
    printf("\n Enter your choice: \n");
    printf("\t 1. Register new user. \n");
    printf("\t 2. Sign in. \n");
    printf("\t 3. Close the Application. \n");
    
    int choice; scanf("%d", &choice);

    switch (choice)
    {
        case 1: display_register(user *ptr); break;
        case 2: display_signIn(user *ptr); break;
        case 3: exit(0); break;
        default: printf("\n Invalid input, try again."); displayLogin();
    }
}

