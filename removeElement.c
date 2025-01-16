// beats 100%
int removeElement(int* nums, int numsSize, int val) {
    int outer = 0;
    while (outer < numsSize) {
        int inner = outer + 1;
        while (inner < numsSize) {
            if (nums[outer] == val && nums[inner] != val) {
                int temp = nums[outer];
                nums[outer] = nums[inner];
                nums[inner] = temp;
            }
            inner++;
        }
        outer++;
    }


    int i = 0;
    int nonValCount = 0;
    while (i < numsSize) {
        if (nums[i] != val) {
            nonValCount++;
        }
        i++;
    }
    return nonValCount;
}