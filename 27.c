#include <stdio.h>
int removeElement(int *nums, int numsSize, int val)
{
    int i = 0;
    for (int j = 0; j < numsSize; j++)
    {
        if (nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int main()
{
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int newLength = removeElement(nums, numsSize, val);

    for (int i = 0; i < newLength; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
