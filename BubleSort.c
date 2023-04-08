#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 12

void printArray(unsigned int* array);
void bubbleSort(unsigned int* array);

int main()
{
    unsigned int* array = (int*)malloc(SIZE * sizeof(unsigned int));
    srand(time(NULL));

    for(size_t i = 0; i < SIZE; i++)
    {
        array[i] = 1+rand()%100;
    }

    printf("%s", "Dizinin Siralanmamis Hali\n");
    printArray(array);

    printf("%s", "\nDizinin Siralanmis Hali\n");
    bubbleSort(array);
    printArray(array);
    free(array);

    return 0;
}

void printArray(unsigned int* array)
{
    size_t i;
    for(i = 0; i < SIZE; ++i)
    {
        printf("%u ", array[i]);
    }
}

void bubbleSort(unsigned int* array)
{
    unsigned int hold;
    for(size_t pass = 0 ; pass < SIZE; ++pass)
    {
        for(size_t j = 0; j < SIZE - pass; ++j)
        {
            if(array[j] > array[j+1])
            {
                hold = array[j];
                array[j] = array[j+1];
                array[j+1] = hold;
            }
        }
    }
}
