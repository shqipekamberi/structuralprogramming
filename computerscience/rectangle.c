#include <stdio.h>

int main()
{
    float length, width, area;

    printf("enter the length of the rectange: ");
    scanf("%f", &length);

    printf("enter the width of the rectangle: ");
    scanf("%f", &width);

    area= length * width;

    printf ("The area of the rectangle is: %.2f sqare units\n", area);

    return 0;


}