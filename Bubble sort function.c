#include <stdio.h>

#define MAX 10

int a[MAX];

int rand_seed = 10;

int rand_seed_func(int seed) {
    rand_seed = seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        {
        for (int j = 0; j < n - i - 1; j++)
         {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
         }
        }
}

int main(void) {
    int i;
    for (i = 0; i < MAX; i++)
        {
        a[i] = rand_seed_func(i + 1);
        printf("%d\n", a[i]);
        }
    bubble_sort(a, MAX);
    printf("\n");
    for (i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

