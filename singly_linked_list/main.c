#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 25

char *read_line (char *buf, size_t length, FILE *f);

typedef struct student {
  char surname[BUFFSIZE];
  char name[BUFFSIZE];
  char study_path[BUFFSIZE];
  int mat_num;
} STUDENT;

typedef struct node {
  STUDENT *data;
  struct node *next;
} NODE;

int main () {
  // Initialize first node 
  NODE *n;
  n = malloc(sizeof(NODE));
  n->data = NULL;
  n->next = NULL;

  char line[BUFFSIZE];
  printf("Please enter someting:\n> ");
  read_line(line, BUFFSIZE, stdin);
  printf("$ %s\n", line);
  
  free(n);

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
