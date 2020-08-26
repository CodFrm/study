#include <stdio.h>

int main() {
  for (int i = 1; i <= 9; i++) {
    for (int n = 1; n <= i; n++) {
        printf("%d*%d=%d\t",n,i,i*n);
    }
    printf("\n");
  }
  getchar();
  return 0;
}