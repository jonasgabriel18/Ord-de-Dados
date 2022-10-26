#include <stdio.h>
#define SIZE 10

void swap(int* v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main() {
    int vetor[SIZE] = {1, 3, 52, 13, 12, 21, 76, 2, 9, 10};

    for(int i = 1; i < SIZE-1; i++) {
        for(int j = 0; j < SIZE-1; j++) {
            if(vetor[j] > vetor[j+1])
                swap(vetor, j, j+1);
        }
    }

    for(int i = 0; i < SIZE; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}