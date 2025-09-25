#include <stdio.h>
int main() {
    double population = 100000;  
    float r = 0.10;    
    int year;
    printf("Year\tPopulation at the end of year\n");
    for (year = 1; year <= 10; year++) {
        population = population * (1 + r); 
        printf("%d\t%.0f\n", year, population);
    }
    return 0;
}
