/*
leetcode

Runtime 19ms	Memory 5.8MB
*/

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(size_t number) {
    size_t reverse = 0; 

    if(number < 0 || (number % 10 == 0 && number != 0))
        return false;

    while(number > reverse) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    return (number == reverse || number == reverse/10);
}

int main() {
    /*
    real    0m0,002s
    user    0m0,001s
    sys     0m0,000s
    */
    printf("%d\n", is_palindrome(12345654321));
    return 0;
}
