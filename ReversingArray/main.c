#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int nums[]={1,2,3,4,5};
    int reversedNums[5];

    for (i=0 ;i<5; i++)
    reversedNums[4-i] = nums[i];

    for (i=0;i<5;i++)
    printf("%i\n", reversedNums[i]);

    getchar();
}
