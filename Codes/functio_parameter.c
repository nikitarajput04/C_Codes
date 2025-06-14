#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("nikita");
  myFunction("jhalak");
  myFunction("sonal");
  return 0;
}