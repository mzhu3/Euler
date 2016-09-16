#include <stdlib.h>
#include <stdio.h>

int sumOfNums(int x){
  int sum = 0;
  int i;
  for(i = 0; i < x; i++){
    if(i % 3 == 0 || i % 5 ==0){
      sum += i;
    }
  }
  return sum;
}

int main(){
  int endSum1;
  int endSum2;
  endSum1 = sumOfNums(10);
  endSum2 = sumOfNums(1000);
  printf("sum is : %d\n",endSum1);
   printf("sum is : %d\n",endSum2);
}

