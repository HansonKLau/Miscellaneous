#include <stdio.h>
#include <math.h>

int intToBit(int num){

  int exponent = 0;
  int bit = 0;

  while(1<2){
    if(num - pow(2, exponent) == 0){
      bit += pow(10, exponent);
      return bit;
    }
    else if(num - pow(2, exponent) < 0){
      bit += pow(10, exponent - 1);
      num -= pow(2, exponent - 1);
      exponent = 0;
    }
    else{
      exponent++;
    }
  }


}

int main(){

  printf("Enter integer to convert into bit ");
  int num;
  scanf("%d", &num);

  printf("%d", intToBit(num));

}
