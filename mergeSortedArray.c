// beats 100%
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int nums1counter = 0;
    int nums2counter = 0;
    int *tempArr = malloc((m + n) * sizeof(int));
    int tempArrCounter = 0;

    while (nums1counter != m && nums2counter != n) {
        if (nums1[nums1counter] >= nums2[nums2counter]) {
            tempArr[tempArrCounter] = nums2[nums2counter];
            nums2counter++;
            tempArrCounter++;
        } else {
            tempArr[tempArrCounter] = nums1[nums1counter];
            nums1counter++;
            tempArrCounter++;    
        }
    }

    while (nums1counter != m) {
        tempArr[tempArrCounter] = nums1[nums1counter];
        nums1counter++;
        tempArrCounter++;         
    }
    while (nums2counter != n) {
        tempArr[tempArrCounter] = nums2[nums2counter];
        nums2counter++;
        tempArrCounter++;     
    }

    int i = 0;
    while (i < (m + n)) {
        nums1[i] = tempArr[i];
        i++;
    }
}