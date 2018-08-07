import math

a = map(int, raw_input().strip().split(" "))

def binary_search(arr, left, right, x):
    #base
    if right >= left:
        #calculate mid
        mid = left + int(math.floor((right-left)/2))

        #found
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            return binary_search(arr, mid+1, right, x)
        elif arr[mid] > x:
            return binary_search(arr, left, mid-1, x)

    else:
        return -1

print binary_search(a, 0, len(a)-1, 13)
