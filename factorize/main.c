#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h> 

int *primenumbers_to (int n);

int main(int argc, char* argv[]) {

  if (argc > 1) {
    int n = atoi(argv[1]);

    // get all the possible primnumbers
    int *pnums = primenumbers_to(n);
    int pindex = 0;
    while (pnums[pindex] < n) {
      if (n % pnums[pindex] == 0) {
        n = n / pnums[pindex];
        printf("%d x ", pnums[pindex]);
      } else {
        // If prime number is not valid, take the next one
        pindex++;
      }
    }

    printf("%d", pnums[pindex]);

    free(pnums);
  } else {
    printf("You should input a number");
  }

  return(0);
}

// Find all the primnumbers smaller n
int *primenumbers_to(int n) {
  bool a[n-1];

  // fill boolean array with true
  int i; 
  int z = 0;
  for (i = 0; i < n; i++) {
    a[i] = true;
  }

  // Iterate over the numbers until square number of n
  for (i = 2; i < (int)sqrt((float)n); i++) {

    // Just check numbers which are still possible
    if (a[i]) {
      int j;
      for(j = i; j <= n; j++) {
        // Check if its not a primnumber and mark it
        if (i * j <= n) {
          a[i * j] = false;
        } else {
          z++;
        }
      }
    }
  }
  
  int *pnums = malloc(z);
  int x = 0;

  // Iterate over the boolena array, every index
  // which has the value true, is a primnumber
  for ( i = 2; i < n; i++) {
    if (a[i]) {
      pnums[x] = i;
      x++;
    }
  }

  return pnums;
}


