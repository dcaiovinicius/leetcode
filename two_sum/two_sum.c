#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int *two_sum(int *nums, int length, int target) {
    int *array = (int*)malloc(sizeof(int) * 2);

    for(int index = 0; index < length; index++) {
        for(int j = index + 1; j < length; j++) {
            if(nums[index] + nums[j] == target) {
                array[0] = index;
                array[1] = j;
            }
        }
    }
    
    return array;
}

int main() {
    int array[] = {2,7,11,15};

    int *data = two_sum(array, ARRAY_SIZE(array), 9);

    // output
    // 202 ms	6.2 MB
    printf("%d - %d\n", data[0], data[1]);

    free(data);
    return 0;
}
