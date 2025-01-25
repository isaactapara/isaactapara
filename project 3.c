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
    printf("First name: %s", firstName);
    printf("Second name: %s", secondName);
    printf("Third name: %s", thirdName);

    return 0;
}
