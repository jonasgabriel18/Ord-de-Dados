#include <stdio.h>
#include <limits.h>

#define SIZE 10

void swap(int* v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int minimum_value_index(int* v, int start_pos) {
    int min_value = INT_MAX;
    int min_index;

    for(int i = start_pos; i < SIZE; i++) {
        if(v[i] < min_value) {
            min_value = v[i];
            min_index = i;
        }
    }

    return min_index;
}

int main() {
    int vetor[SIZE] = {1, 3, 52, 13, 12, 21, 76, 2, 9, 10};

    for(int i = 0; i < SIZE; i++) {
        int min_index = minimum_value_index(vetor, i);
        swap(vetor, i, min_index);
    }

    for(int i = 0; i < SIZE; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}