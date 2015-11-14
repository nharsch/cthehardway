#include <stdio.h>

int main()
{
  int age = 12;
  int height = 72;
  
  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);
  printf("I am '%x' hex years old and '%x' hex inches tall", age, height);
  printf("and this is what happens when you don't add a substition: %s");
  
  return 0;
}
