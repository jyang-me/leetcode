#include <stdbool.h>

bool canJump(int *nums, int numsSize)
{
    int maxReach = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(i > maxReach)
        {
            return false;
        }
       int currentReach = i+nums[i];
       if(currentReach > maxReach)
       {
          maxReach = currentReach;
       }
       if(maxReach>=numsSize-1)
       {
        return true;
       }

    }
    return true;
}