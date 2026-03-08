#include <stdio.h>
#include <stdlib.h>

int checkSize(int M, int N) {
    int totalNumbers = 200 - 100 + 1;
    return (M * N <= totalNumbers);
}

void initializeNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        numbers[i] = 100 + i;
    }
}

void shuffleArray(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void fill2DArray(int arr[][20], int M, int N, int numbers[]) {
    int index = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = numbers[index++];
        }
    }
}

void displayArray(int arr[][20], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", arr[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        if (i < M - 1) {
            printf("\n");
        }
    }
}

int main() {
    int M, N;
    int array[20][20];
    int numbers[101];
    
    scanf("%d %d", &M, &N);
    
    if (!checkSize(M, N)) {
        return 1;
    }
    
    initializeNumbers(numbers, 101);
    
    srand(12345);
    shuffleArray(numbers, 101);
    
    fill2DArray(array, M, N, numbers);
    
    displayArray(array, M, N);
    
    return 0;
}