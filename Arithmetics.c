#include<stdio.h>
int main (){
 int num1, num2, result;
 char operator;

 printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Enter two operands: ");
  scanf("%d %d", &num1, &num2);

 switch(operator){
  case'+':result =  num1+num2;
  printf("\nWhen added values are: %/d\t", result);
  break;
  case '-': result =  num1-num2;
  printf( "\nWhen subtracted values are: %d\t",result);
  break;
  case '*':result =  num1*num2;
  printf(" \nWhen multiplication applies values are:%d\t", result);

  case '/':result =num1/num2;
  printf("\nWhen division applies values are:%d\t", result);

 default:
 printf("Not applicable\n");
 }
}
