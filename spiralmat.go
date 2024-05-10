package main

import "fmt"

func spiralOrder(matrix [][]int) []int {
    if len(matrix) == 0 {
        return []int{}
    }

    rows, cols := len(matrix), len(matrix[0])
    top, bottom, left, right := 0, rows-1, 0, cols-1
    result := make([]int, 0, rows*cols)

    for {
        for i := left; i <= right; i++ {
            result = append(result, matrix[top][i])
        }
        top++
        if top > bottom {
            break
        }

        for i := top; i <= bottom; i++ {
            result = append(result, matrix[i][right])
        }
        right--
        if left > right {
            break
        }

        for i := right; i >= left; i-- {
            result = append(result, matrix[bottom][i])
        }
        bottom--
        if top > bottom {
            break
        }

        for i := bottom; i >= top; i-- {
            result = append(result, matrix[i][left])
        }
        left++
        if left > right {
            break
        }
    }

    return result
}

func main() {
    evenMatrix := [][]int{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}
    oddMatrix := [][]int{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}

    fmt.Println("Even Matrix Spiral Order:", spiralOrder(evenMatrix))
    fmt.Println("Odd Matrix Spiral Order:", spiralOrder(oddMatrix))
}
