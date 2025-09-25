#include <stdio.h>
int main() {
    {float length, breadth, area;
    printf("Enter the length of the Rectangle:");
    scanf("%f", &length);
    printf("Enter the breadth of the Rectangle:") ;
    scanf("%f", &breadth) ;
    area = length * breadth ;
    printf("Area of Rectangle = %.2f\n", area);
    }
 
    {int length, breadth, area;
    printf("Enter the length of the Rectangle:");
    scanf("%d", &length);
    printf("Enter the breadth of the Rectangle:");
    scanf("%d", &breadth);
    area = length * breadth ;
    printf("Area of the Rectangle = %d\n", area);
    }
    return 0;
}