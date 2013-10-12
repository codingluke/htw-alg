#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
  if (argc > 1) {
    int n = atoi(argv[1]);
    printf("%d", n);
  } else {
    printf("You should input a number");
  }

  return(0);
}
