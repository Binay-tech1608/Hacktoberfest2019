//This program will tell how to evaluate sum of n natural numbers in 0(1) time.

#include <stdio.h>
int sum(int n){
  if(n==1){
    return 1;
  }
return n + sum(n-1);
}

int main() {
int num, sum = 0;
printf ("Enter the last natural number you want the sum of: ");
//Sum = 1+2+3.....n
scanf("%d", &num);
int total = sum(n);
printf ("Sum of first %d natural numbers is : %d\n", num, total);
return 0;
}
