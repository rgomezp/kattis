a = map(int, raw_input().strip().split(" "))

def selection_sort(vector):
    for i in range(0,len(vector)):
        low_index = i
        for j in range(i+1, len(vector)):
            if vector[j] < vector[low_index]:
                low_index = j
        #swap
        temp = vector[i]
        vector[i] = vector[low_index]
        vector[low_index] = temp
    return vector

print selection_sort(a)
