#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sumOfSquaresOfDistinctCounts(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        int frequency[101] = {0}; 
        int distinctCount = 0;
        for (int j = i; j < n; j++) {
            if (frequency[nums[j]] == 0) {
                distinctCount++;
            }
            frequency[nums[j]]++;
            result += distinctCount * distinctCount;
        }
    }

    return result;
}

int main() {
    int nums[] = {1, 2, 1}; 
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = sumOfSquaresOfDistinctCounts(nums, n);

    printf("Output: %d\n", result); 

    return 0;
}

