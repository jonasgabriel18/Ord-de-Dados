def merge(arr, left, right):
    nL = len(left)
    nR = len(right)
    i = j = k = 0

    while i < nL and j < nR:
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        
        k += 1
    
    while i < nL:
        arr[k] = left[i]
        i += 1
        k += 1
    
    while j < nR:
        arr[k] = right[j]
        j += 1
        k += 1

def mergesort(arr):
    if len(arr) < 2:
        return arr
    
    midpoint = len(arr) // 2
    left = arr[:midpoint]
    right = arr[midpoint:]

    mergesort(left)
    mergesort(right)
    merge(arr, left, right)

'''
vetor = [3, 1, 52, 13, 12, 21, 76, 2, 9, 10, 45]
mergesort(vetor)

print(vetor)
'''