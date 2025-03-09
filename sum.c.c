#include <stdio.h>

int sum(int arr[], int size);

int main() {
    int i, size, s;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    s = sum(arr, size);
    printf("Sum = %d\n", s);  
    return 0;
}

int sum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s;  
}
