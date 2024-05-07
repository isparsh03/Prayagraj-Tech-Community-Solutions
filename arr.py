"""So Guys welcome you there"""
"""Give an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x. 

"""

"""Code Starts From Here"""
def check_sum_pair(arr, x):
    seen = set()
    for num in arr:
        if x - num in seen:
            return True
        seen.add(num)
    return False

arr = [0, -1, 42, -3, 1]
x = -2
print(check_sum_pair(arr, x))

"""Code Ends"""
