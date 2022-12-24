#include <stdio.h>

int main(void)
{
  int integer = 1234;
  char character = '?';
  double number2 = 6587.741;
  float number3 = 74.1524698;
  char text[7] = "Camilo";
  char* text2 = "Estrada";
  double sum = number2 + number3;
  
  printf("The integer is %i\n", integer);
  printf("the charactre is %c\n", character);
  printf("the double is %f\n", number2);
  printf("the float is %f\n", number3);
  printf("My name is %s %s\n", text, text2);
  printf("number2 + number3 = %f\n", sum);
}
