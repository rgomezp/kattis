import math

a = map(int, raw_input().strip().split(" "))

def binary_search(vector, left, right, target):
    if right >= left:

        mid = left + int(math.floor((right-left)/2))

        #base case
        if vector[mid] == target:
            return mid
        elif vector[mid] > target:
            return binary_search(vector, left, mid-1, target)
        elif vector[mid] < target:
            return binary_search(vector, mid+1, right, target)
    else:
        return -1

print binary_search(a, 0, len(a)-1, 7)
