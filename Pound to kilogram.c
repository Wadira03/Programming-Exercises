#include <stdio.h>

int main() {
    float pounds, kilograms;
    printf("Pounds\t  Kilograms\n");
    for(pounds = 1; pounds <= 100; pounds += 5) {
        kilograms = pounds * 0.453592;
        printf("%.2f\t%.2f\n", pounds, kilograms);
    }

    return 0;
}

