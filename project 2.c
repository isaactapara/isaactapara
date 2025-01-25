#include <stdio.h>

int main() {
    char firstName[50];
    char secondName[50];
    char thirdName[50];

    
    printf("Enter First name: ");
    scanf("%49s", firstName);  

    printf("Enter Second name: ");
    scanf("%49s", secondName); 

    printf("Enter Third name: ");
    scanf("%49s", thirdName);  

    // Display the names
    printf("Your names are:\n");
    snprintf(Fullnames, sizeof(Fullnames),"%49s %49s %49s", firstName, secondName, thirdName);
    printf("Full Names: %49s\n, "Fullnames);
    

    return 0;
}
