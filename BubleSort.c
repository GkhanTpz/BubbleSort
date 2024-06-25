#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 12

void PrintArray(unsigned int* array);
void BubbleSort(unsigned int* array);

int main()
{
    unsigned int* array = (int*)malloc(SIZE * sizeof(unsigned int));
    srand(time(NULL));

    for(size_t i = 0; i < SIZE; i++)
    {
        array[i] = 1+rand()%100;
    }

    printf("%s", "Unordered Array\n");
    PrintArray(array);

    printf("%s", "\n\nOrdered Array\n");
    BubbleSort(array);
    PrintArray(array);
    free(array);

    return 0;
}

void PrintArray(unsigned int* array)
{
    size_t i;
    for(i = 0; i < SIZE; ++i)
    {
        printf("%u ", array[i]);
    }
}

void BubbleSort(unsigned int* array)
{
    unsigned int hold;
    for(size_t i = 0 ; i < SIZE; ++i)
    {
        for(size_t j = 0; j < SIZE - i; ++j)
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
