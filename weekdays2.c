
#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day == 1) {
        printf("Today is Sunday.\n");
    } else if (day == 2) {
        printf("Today is Monday.\n");
    } else if (day == 3) {
        printf("Today is Tuesday.\n");
    } else if (day == 4) {
        printf("Today is Wednesday.\n");
    } else if (day == 5) {
        printf("Today is Thursday.\n");
    } else if (day == 6) {
        printf("Today is Friday.\n");
    } else if (day == 7) {
        printf("Today is Saturday.\n");
    } else {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
