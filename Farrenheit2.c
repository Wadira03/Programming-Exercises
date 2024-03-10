#include <stdio.h>
#include <stdlib.h>

int main()
{
    float header, start, end, increment;
    printf("Enter the starting Fahrenheit value: ");
    scanf("%f" , &start);
    printf("Enter the ending Fahrenheit value: ");
    scanf("%f" , &end);
    printf("Enter the increment Fahrenheit value: ");
    scanf("%f" , &increment);
    printf("\nFAHRENHEIT  \CELSIUS TABLE\n");
    float fahrenheit = start;
    while (fahrenheit <= end)
    {
        float celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f\t\t%.2f\n" , fahrenheit, celsius);
        fahrenheit += increment;
    }
    return 0;
}
