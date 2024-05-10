#include <iostream>
#include <vector>

std::vector<int> spiralOrder(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> evenMatrix = {{1, 2, 3},
                                                {4, 5, 6},
                                                {7, 8, 9}};
    std::vector<std::vector<int>> oddMatrix = {{1, 2, 3, 4},
                                               {5, 6, 7, 8},
                                               {9, 10, 11, 12},
                                               {13, 14, 15, 16}};

    std::vector<int> evenResult = spiralOrder(evenMatrix);
    std::vector<int> oddResult = spiralOrder(oddMatrix);

    std::cout << "Even Matrix Spiral Order: ";
    for (int num : evenResult) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd Matrix Spiral Order: ";
    for (int num : oddResult) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
