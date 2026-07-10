#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int hIndex(int* citations, int citationsSize) 
{
    qsort(citations, citationsSize, sizeof(int), cmp);//升序排列
    int h = 0;
    for(int i=citationsSize-1; i>=0; i--)
    {
        if(citations[i] >= h+1)
        {
            h++;
        }
        else
        {
            break;
        }
    }
    return h;
}

int main()
{
    int a[5] = {2,6,5,3,4};
    int result = hIndex(a,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("H-Index: %d\n", result);    
    return 0;
}

