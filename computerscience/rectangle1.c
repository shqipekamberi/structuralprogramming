#include <stdio.h>

int main()
{
    float length = get_float ("Length:");

    float width = get_float ("Width:");

    float area = width * length;

    printf ("%f", area);

}