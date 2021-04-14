#include "prototype.h"

void display_sigIn(user *ptr)
{ 
    FILE *creds = fopen("userCreds.txt","w");
    if(creds == NULL){printf("\nFile error, try again. "); displayLogin();}

    printf("\nEnter details to sign in: \n");
    
    printf("\n Username: ");
    scanf("%s",&ptr->username);
    printf("\n Password: ");
    scanf("%s",&ptr->passcode);

    char username[21], passcode[21];
    while(!feof(creds))
    {
        fscanf(creds,"%s %s",&username, &passcode);
        if(username == ptr->username){
            if(passcode == ptr->passcode)
            {
                display_mainMenu();
            }
            else{
                printf("\nPasscode is invalid, try again.");
                displayLogin();
            }
        }
        else{
            printf("\nUsername not found, try again.");
            displayLogin();
        }
    }
    
    fclose(creds);
}