#include <stdio.h>

int main()
{
    const float miles_to_km = 1.60934;
    printf("Miles\t    Kilometers\n");
    for (int miles = 1; miles <= 10; miles++)
        {
        float kilometers = miles * miles_to_km;
        printf("%d\t   %.2f\n", miles, kilometers);
        }

    return 0;
}


