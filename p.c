//Program to Count the Number of Digits
#include <stdio.h>
int main() {
  long n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%ld", &n);
 
  do {
    n /= 10;
    ++count;
  } while (n != 0);

  printf("Number of digits: %d", count);
}
