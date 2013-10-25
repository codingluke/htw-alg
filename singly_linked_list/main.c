#include <stdio.h>
#include <stdlib.h>

char *read_line (char *buf, size_t length, FILE *f) {
  char *p;
  if (p = fgets (buf, length, f)) {
    size_t last = strlen (buf) - 1;

    if (buf[last] == '\n') {
      buf[last] = '\0';
    } else {
      fscanf (f, "%*[^\n]");
      (void) fgetc (f);
    }
  }
  return p;
}

typedef struct student {
  char surname[25];
  char name[25];
  char study_path[25];
  int mat_num;
}

typedef struct node {
  student *data;
  node *next;
}

int main() {
  /*node *n;*/
  /*n = malloc(sizeof(node));*/
  /*n.data = NULL;*/
  /*n.next = NULL;*/

  return 0;
}
