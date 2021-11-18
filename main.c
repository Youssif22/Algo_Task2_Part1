#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "quick.h"


void insertion_sort(int arr[],int n) {
    int i, j, nav;
    for (int i = 1; i < n; i++) {
        nav = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > nav) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = nav;
    }
}

void printing(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int n = 100000;
    int arr1[n];
    srand(0);
    for(int i=0; i<n; i++){
        arr1[i] = rand();
    }

    clock_t start_t, end_t, start_t1, end_t1;


    start_t = clock();
    insertion_sort(arr1, n);
    end_t = clock();

    printf("The array is sorted using Insertion Sort in: %ld seconds", end_t);
    printf("\n");



    return 0;
}
