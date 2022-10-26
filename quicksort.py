def swap(array, a, b):
    aux = array[a]
    array[a] = array[b]
    array[b] = aux

def partition(array, start, end):
    pivo = array[end]
    p_index = start

    for i in range(start, end):
        if array[i] <= pivo:
            swap(array, i, p_index)
            p_index += 1
    
    swap(array, p_index, end)

    return p_index

def quicksort(array, start, end):
    if start >= end:
        return
    
    p_index = partition(array, start, end)
    quicksort(array, start, p_index-1)
    quicksort(array, p_index+1, end)

'''
vetor = [3, 1, 52, 13, 12, 21, 76, 2, 9, 10, 45]
quicksort(vetor, 0, len(vetor)-1)

print(vetor)
'''