#include <stdio.h>

#define ARRAY_SIZE(arr) sizeof(arr) / sizeof((arr)[0])

int array_sum(int *nums, size_t size) {
    int sum = 0;
    
    for(int index = 0; index < size; index++) {
        sum = sum + nums[index];
    }

    return sum;
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5 };

    printf("%d\n", array_sum(numbers, ARRAY_SIZE(numbers)));

    return 0;
}