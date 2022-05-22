package main

import "fmt"

func Sum(array []int) int {
  sum := 0

  for _, element := range array {
    sum += element
  }

  return sum;
}


func main() {
  array := []int {1, 2, 3, 4, 5}

  fmt.Println(Sum(array))
}
