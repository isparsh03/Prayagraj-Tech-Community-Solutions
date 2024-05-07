


#include <stdio.h>

int checkSumPair(int arr[], int n, int x) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {0, -1, 42, -3, 1};
    int x = -2;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (checkSumPair(arr, n, x)) {
        printf("Yes, there exist two elements in the array that sum up to %d\n", x);
    } else {
        printf("No, there are no two elements in the array that sum up to %d\n", x);
    }
    
    return 0;
}
