#include <stdio.h>
#define SIZE 10

int main() {
    int vetor[SIZE] = {3, 1, 52, 13, 12, 21, 76, 2, 9, 10};
    int sorted_part;

    for(int i = 1; i < SIZE; i++) {
        int val = vetor[i];
        sorted_part = i;

        while(sorted_part > 0 && vetor[sorted_part-1] > val) {
            vetor[sorted_part] = vetor[sorted_part-1];
            sorted_part--;
        }

        vetor[sorted_part] = val;
    }

    for(int i = 0; i < SIZE; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}