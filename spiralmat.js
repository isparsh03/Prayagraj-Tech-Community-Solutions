function spiralOrder(matrix) {
    const result = [];
    while (matrix.length) {
        result.push(...matrix.shift());
        for (const row of matrix) {
            result.push(row.pop());
        }
        if (!matrix.length) break;
        result.push(...matrix.pop().reverse());
        for (let i = matrix.length - 1; i >= 0; i--) {
            result.push(matrix[i].shift());
        }
    }
    return result;
}

// Even matrix
const evenMatrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];
console.log(spiralOrder(evenMatrix));

// Odd matrix
const oddMatrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
];
console.log(spiralOrder(oddMatrix));
