//
//  leetcode
//	Runtime 35 ms	Memory 4.6 MB
// 
package main

import "fmt"

func isPalindrome(number int) bool {
  if number < 0 || (number % 10 == 0 && number != 0) {
    return false
  }

  reverse := 0

  for number > reverse {
    reverse = reverse * 10 + number % 10
    number = number / 10
  }

  return (number == reverse || number == reverse/10)
}

func main() {
  /*
  real	0m0,002s
  user	0m0,000s
  sys	0m0,003s
  */
  fmt.Println(isPalindrome(12345654321))
}
