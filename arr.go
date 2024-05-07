package main

import "fmt"

func checkSum(arr []int, x int) bool {
    seen := make(map[int]bool)

    for _, num := range arr {
        complement := x - num
        if seen[complement] {
            return true
        }
        seen[num] = true
    }

    return false
}

func main() {
    arr := []int{0, -1, 42, -3, 1}
    x := -2

    if checkSum(arr, x) {
        fmt.Println("Two elements exist in the array whose sum is exactly", x)
    } else {
        fmt.Println("No two elements exist in the array whose sum is exactly", x)
    }
}
