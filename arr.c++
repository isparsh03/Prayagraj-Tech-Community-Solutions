#include <iostream>
#include <unordered_set>

bool checkSumExists(int arr[], int n, int x) {
    std::unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(x - arr[i]) != s.end()) {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr[] = {0, -1, 42, -3, 1};
    int x = -2;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (checkSumExists(arr, n, x)) {
        std::cout << "Two elements exist in the array whose sum is " << x << std::endl;
    } else {
        std::cout << "No two elements exist in the array whose sum is " << x << std::endl;
    }
    
    return 0;
}
