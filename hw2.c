#include <stdio.h>
int question1(){
  int i;
  int total = 0;
  for (i = 0; i < 1000; i++){
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
int question6(){
  int i;
  int sumofsquare = 0;
  int squareofsum = 0;
  for (i = 1; i <= 100; i++){
    sumofsquare += i * i;
    squareofsum += i;
  }
  return squareofsum * squareofsum - sumofsquare;
}
int main(){
  printf("%d\n", question1());
  printf("%d\n", question5());
  printf("%d\n", question6());
}
