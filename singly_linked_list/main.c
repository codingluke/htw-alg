#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *read_line (char *buf, size_t length, FILE *f);

typedef struct student {
  char surname[25];
  char name[25];
  char study_path[25];
  int mat_num;
} STUDENT;

typedef struct node {
  STUDENT *data;
  struct node *next;
} NODE;

int main () {
  NODE *n;
  n = malloc(sizeof(NODE));
  n->data = NULL;
  n->next = NULL;

  char line[20];
  line = read_line(line, 20, stdin);
  printf(line);

  return 0;
}

char *read_line (char *buf, size_t length, FILE *f) {
  char *p;
  if ((p = fgets(buf, length, f))) {
    size_t last = strlen(buf) - 1;

    if (buf[last] == '\n') {
      buf[last] = '\0';
    } else {
      fscanf (f, "%*[^\n]");
      (void) fgetc (f);
    }
  }
  return p;
}
