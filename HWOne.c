#include <stdio.h>
#include <stdlib.h>
int sumSquares(int n){
  int i;
  int addSum = 0;
  int squareSum = 0;
  for (i = 1; i <= n; i++){
    addSum += i;
    squareSum += (i * i);
  }
  addSum = (addSum * addSum);
  return addSum - squareSum;}

int main(){
  printf ("%d \n",sumSquares(10));}
