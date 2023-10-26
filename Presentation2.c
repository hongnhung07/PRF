#include <stdio.h>
#include <stdbool.h>

void NhapMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("a[%d]=",i);
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

void SelecionSort(int a[], int n) {
  int i,j, tmp;
  for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
      if(a[i] > a[j]) {
        tmp= a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
  HienMang(a,n);
}

void CheckSame(int a[], int *n) {
  int i,j,k;
  for(i=0;i<*n;i++){
    for(j=i+1;j<*n;j++) {
      if(a[i] == a[j]) {
        for(k=j;k <*n;k++) {
          a[k] = a[k+1];
        }
        (*n)--, j--;
      }
    }
  }
}

void DelNotPrime(int a[], int *n) {
  for (int i = 0; i < *n; i++) {
    if (!KiemTraNguyenTo(a[i])) {
      for (int j = i; j < *n - 1; j++) {
        a[j] = a[j+1];
      }
      (*n)--;
      i--; 
    }
  }
  HienMang(a,*n);
}

int main() {
  int n, a[100];
  printf("Nhập số phần tử của mảng:\n");
  scanf("%d", &n);
  NhapMang(a, n);

  printf("Mảng ban đầu nhập vào: \n");
  HienMang(a,n);
  printf("\n");
  printf("Mảng sau khi đã xoá các số không phải là số nguyên tố: \n");
  DelNotPrime(a, &n);
  printf("\n");
  printf("Sau Khi xoá các số nguyên tố  giống nhau:\n");
  CheckSame(a,&n);
  SelecionSort(a,n);

  return 0;
}