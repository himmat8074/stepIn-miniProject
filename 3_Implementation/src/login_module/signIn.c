#include "prototype.h"

void display_sigIn(user *ptr)
{ 
    int a = 0;
    do
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
                    a++; getch();
                }
            }
            else{
                printf("\nUsername not found, try again.");
                a++; getch();
            }
        }
        
        fclose(creds);
    } while (a<=2);

    if(a>2)
    {
        printf("You have exceeded the maximum number of attempts. \n Application is closing... ");
        exit(0);
    }
    
    
}