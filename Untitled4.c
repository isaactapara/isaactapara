#include <stdio.h>

int main() {
    char firstName[50];
    char secondName[50];
    char thirdName[50];

    // Prompt the user for their names
    printf("Enter First name: ");
    scanf("%49s", firstName);  

    printf("Enter Second name: ");
    scanf("%49s", secondName); 

    printf("Enter Third name: ");
    scanf("%49s", thirdName);  

    // Display the names
    printf("Your names are:\n");
    printf("First name: %sSecond name: %sThird name: %s", firstName, secondName, thirdName);

    return 0;
}
