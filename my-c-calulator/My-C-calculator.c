// My C calculator
#include <stdio.h>

int main(){
    
  char operator = '\0';
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator (+ - * / %%): ");
  scanf(" %c" , &operator);

// validating the operator
  while (operator != '+' && operator != '-' &&
         operator != '*' && operator != '/' && operator != '%') {
  printf("\nPlease enter a VALID operator (+ - * / %%): ");
  scanf(" %c" , &operator);
         }

// asks user to enter their numbers
  printf("Enter number 1: ");
  scanf("%lf" , &num1);
  printf("Enter number 2: ");
  scanf("%lf" , &num2);

//each case of the operations
  switch(operator) {
    case '+' :
        result = num1 + num2;
        printf("\nresult: %.2lf" , result);
        break;

    case '-' :
        result = num1 - num2;
        printf("\nresult: %.2lf" , result);
        break;

    case '*' :
        result = num1 * num2;
        printf("\nresult: %.2lf" , result);
        break;

    case '/' :
        if(num1 == 0 || num2 == 0) {
        printf("\nERROR, cannot divide by zero"); }
        else {  
        result = num1 / num2;
        printf("\nresult: %.2lf" , result); }
        break;

    case '%' :
        result = (int)num1 % (int)num2;
        printf("\nresult: %.2lf" , result);
        break;

  }

  return 0;
}

