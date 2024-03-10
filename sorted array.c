#include <stdio.h>
struct Record
{
    int id;
};
void swap(struct Record *a, struct Record *b)
{
    struct Record temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(struct Record arr[], int n)
  {
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j].id > arr[j+1].id)
             {
                swap(&arr[j], &arr[j+1]);
             }
        }
    }
  }

int main()
 {
    struct Record records[] ={{4},{2},{7},{1},{5}};
    int n = sizeof(records) / sizeof(records[0]);
    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", records[i].id);
    }
    printf("\n");

    bubbleSort(records, n);
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", records[i].id);
    }
    printf("\n");

    return 0;
}


