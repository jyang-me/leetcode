#include <stdio.h>

int jump(int *nums,int numsSize)
{
    int maxReach =0;
    int currentReach = 0;
    int step = 0;
    if(numsSize <= 1)
    {
        return 0;
    }
    for(int i =0;i<numsSize-1;i++)
    {
        if(i+nums[i]>maxReach)
        {
            maxReach = i+nums[i];
        }
        if(i ==currentReach)
        {
            step++;
            currentReach = maxReach;
        }
        if(currentReach >= numsSize -1)
        {
            break;
        }
    }
    return step;

    

}

int main()
{
    int nums[] = {2,3,1,1,4};
    int step = jump(nums,sizeof(nums)/sizeof(nums[0]));
    printf("step:%d\n",step);
    return 0;
}