#include <stdio.h>
int main() {
    int n, choice;
    int positives = 0, negatives = 0, zeros = 0;
    for(;;) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n > 0)
            positives++;
        else if (n < 0)
            negatives++;
        else
            zeros++;

        printf("Do you want to continue? (1 = Yes / 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0)  
            break;
    }
    printf("\nCount of Positive Numbers = %d", positives);
    printf("\nCount of Negative Numbers = %d", negatives);
    printf("\nCount of Zeros = %d\n", zeros);

    return 0;
}
