import math

a = map(int, raw_input().strip().split(" "))

def binary_search(array,left,right,x):
    #if
    if right >= left:
        mid = left + int(math.floor((right-left)/2))

        if array[mid] == x:
            return mid
        elif array[mid] > x:
            binary_search(array,left,mid-1,x)
        elif array[mid] < x:
            binary_search(array, mid+1, right,x)

    else:
        return -1

print binary_search(a, 0, len(a), 2)
