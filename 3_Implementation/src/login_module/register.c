#include "prototype.h"

void display_register(user *ptr)
{
    FILE *creds = fopen("userCreds.txt","w");
    if(creds == NULL){printf("\nFile error, try again. "); displayLogin();}

    printf("\nEnter details to register new user: \n");
    
    printf("\n Username: ");
    scanf("%s",&ptr->username);
    printf("\n Password: ");
    scanf("%s",&ptr->passcode);

    fprintf(creds,"%s %s \n",ptr->username, ptr->passcode);
    
    printf("\nUser registered."); 
    fclose(creds);
    displayLogin();
}