// beats 100%
bool canJump(int* nums, int numsSize) {
    if (numsSize == 1) return true;
    if (nums[0] == 0) return false;
    int i = 1;
    int currJumpSize = nums[0];
    int reachedEnd = numsSize - 1;
    while (i < numsSize) {
        currJumpSize--;
        if (i == reachedEnd) {
            return true;
        }
        if (currJumpSize < nums[i]) {
            currJumpSize = nums[i];
        } else if (currJumpSize == 0) {
            return false;
        }
        i++;
    }
    return false;
}