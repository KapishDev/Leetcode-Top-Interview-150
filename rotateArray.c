// beats 100%
void rotate(int* nums, int numsSize, int k) {
    int *rotatedArr = malloc(numsSize * sizeof(int));

    int i = 0;
    while (i < numsSize) {
        int rotatedIndex = (i + k) % numsSize;
        rotatedArr[rotatedIndex] = nums[i];
        i++;
    }
    i = 0;
    while (i < numsSize) {
        nums[i] = rotatedArr[i];
        i++;
    }
}