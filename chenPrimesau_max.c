#include <stdio.h>
#include <stdlib.h>

// Hàm kiểm tra số nguyên tố
int isPrimeNumber(int n) {
    if (n <= 1) {
        return 0; // 0 và 1 không phải là số nguyên tố
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Hàm tìm phần tử lớn nhất trong mảng
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Hàm chèn các số nguyên tố vào sau phần tử lớn nhất
void insertPrimeNumbers(int arr[], int *n) {
    // Tìm phần tử lớn nhất
    int max = findMax(arr, *n);

    int originalSize = *n; // Lưu kích thước ban đầu của mảng

    // Duyệt mảng tìm số nguyên tố và chèn vào sau số lớn nhất
    for (int i = 0; i < originalSize; i++) {
        if (isPrimeNumber(arr[i])) {
            arr[(*n)++] = arr[i]; // Chèn số nguyên tố vào cuối mảng và tăng kích thước mảng
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    // Cấp phát động mảng với kích thước n
    int arr[n];

    // Nhập các phần tử cho mảng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Chèn số nguyên tố vào mảng
    insertPrimeNumbers(arr, &n);

    // In ra mảng sau khi đã chèn số nguyên tố
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}