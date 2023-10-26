#include <stdio.h>
#include <stdbool.h>

void NhapMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}

void HienMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}

bool KiemTraNguyenTo(int n) {
  if (n < 2) return false;
  for (int i = 2; i <= n/2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void XoaKhongNguyenTo(int a[], int *n) {
  for (int i = 0; i < *n; i++) {
    if (!KiemTraNguyenTo(a[i])) {
      for (int j = i; j < *n - 1; j++) {
        a[j] = a[j+1];
      }
      (*n)--;
      i--; 
    }
  }
}

int main() {
  int n, a[100];
  scanf("%d", &n);
  NhapMang(a, n);
  
  XoaKhongNguyenTo(a, &n);
  
  HienMang(a, n);

  return 0;
}