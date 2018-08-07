a = map(int,raw_input().strip().split(" "))

def bubble_sort(vec):
    for i in range(0,len(vec)-1):
        for j in range(0,len(vec)-1):
            if vec[j] > vec[j+1]:
                temp = vec[j]
                vec[j] = vec[j+1]
                vec[j+1] = temp
    return vec

print bubble_sort(a)
