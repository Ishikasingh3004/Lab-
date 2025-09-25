#include <stdio.h>
int main() {
    int year, i, day = 1;
    int days_passed = 0;

    printf("Enter year: ");
    scanf("%d", &year);
    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            days_passed += 2; 
        } else {
            days_passed += 1;
        }
    }
    day = (1 + days_passed) % 7; 
    printf("On 01/01/%d it was ", year);
    switch (day) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }
    return 0;
}
