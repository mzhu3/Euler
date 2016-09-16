#include <stdlib.h>
#include <stdio.h>
//problem 1
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

//problem 2
int sumOfEvenFib(int x){
  int first = 1;
  int second = 2;
  int next = 3;
  int sum = 2;
  while(next < x){
    next = first + second;
    first = second;
    second = next;
    if(next %2==0){
      sum += next;
    }
  }
  return sum;
}

//problem 5
int smallestPositiveNumber(){
  int start = 1;
  int i;
  while(i % 1 != 0 ||i % 2 != 0 ||i % 3 != 0 ||i % 4 != 0 ||i % 5 != 0 ||
	i % 10 != 0 ||i % 9 != 0 ||i % 8 != 0 ||i % 7 != 0 ||i % 6 != 0 ||
	i % 11 != 0 ||i % 12 != 0 ||i % 13 != 0 ||i % 14 != 0 ||i % 15 != 0 ||
	i % 20 != 0 ||i % 19 != 0 ||i % 18 != 0 ||i % 17 != 0 ||i % 16 != 0 ){
    i ++;
  }
  return i;
}
int main(){
  int endSum1;
  int endSum2;
  int fibSum1;
  int fibSum2;
  int smallestMultiple;
   endSum1 = sumOfNums(10);
  endSum2 = sumOfNums(1000);
  // fibSum1 = sumOfEvenFib(13);
  fibSum2 = sumOfEvenFib(4000000);
  smallestMultiple = smallestPositiveNumber();
  printf("Problem 1 : \n");
  // printf("3+5sum is(10) : %d\n",endSum1);
  printf("3+5sum is(1000) : %d\n",endSum2);
  printf("Problem 2 : \n");
  // printf("Even Fib sum(10) is : %d\n",fibSum1);
  printf("Even Fib sum(4000000) is : %d\n",fibSum2);
  printf("Problem 5 : \n");
  printf("Smallest Multiple divisible by 1 - 20 : %d\n",smallestMultiple);
}

