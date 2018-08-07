import math
a = map(int, raw_input().strip().split(" "))

def merge_sort(vec, low, high):
    if low == high:
        return vec[low]
    else:
        mid = math.floor((low+high)/2)
        vec_left = merge_sort(vec, low, mid)
        vec_right = merge_sort(vec, mid+1, high)
        return merge_lists(vec_left, vec_right)

print merge_sort(a)
