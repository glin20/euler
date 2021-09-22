#include <stdio.h>
int question1(int n){
  int i;
  int total = 0;
  for (i = 0; i < n; i++){
    if (i % 3 == 0 || i % 5 == 0){
      total += i;
    }
  }
  return total;
}
int question5(){
  int x = 2520;
  while (x %  2 != 0 || x %  3 != 0 || x %  4 != 0 || x %  5 != 0 ||
    x %  6 != 0 || x %  7 != 0 || x %  8 != 0 || x %  9 != 0 ||
    x % 10 != 0 || x % 11 != 0 || x % 12 != 0 || x % 13 != 0 ||
    x % 14 != 0 || x % 15 != 0 || x % 16 != 0 || x % 17 != 0 ||
    x % 18 != 0 || x % 19 != 0 || x % 20 != 0 ){
      x++;
  }
  return x;
}
int question6(int n){
  int i;
  int sumofsquare;
  int squareofsum;
  sumofsquare = n*(n + 1)*(2*n + 1)/6;
  squareofsum = n*(n + 1)/2;
  return squareofsum * squareofsum - sumofsquare;
}
int main(){
  int q1 = question1(1000);
  int q5 = question5();
  int q6 = question6(100);
  printf("%d\n", q1);
  printf("%d\n", q5);
  printf("%d\n", q6);
}
