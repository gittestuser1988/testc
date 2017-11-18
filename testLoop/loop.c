#include<stdio.h>
int main(void) {
  int x;
  int y;
  for (x = 1;x < 10;x++) {
    for (y = 1;y < 10;y++) {
      printf("%2d",x * y);
    }
    printf("\n");
  }
}
