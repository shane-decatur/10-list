#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct con {
  int level;
  char *class;
  struct con *next;
};

void print_struct(struct con s){
  printf("Class %s is level %d\n",s.class,s.level);
}

void print_list(struct con *s){
  print_struct(*s);
  if (s->next != NULL){
    print_list(s->next);
  }
}

struct con * make(int l, char *c){
  struct con *s = malloc(sizeof(struct con));
  s->level = l;
  s->class = malloc(strlen(c));
  strcpy(s->class,c);
  return s;
}

struct con * insert_front(struct con *s, int l, char *c){
  struct con *front = make(l,c);
  front->next = s;
  return front;
}

struct con * free_list(struct con *s){
  free(s);
  if (s->next != NULL){
    free_list(s->next);
  }
  return s;
}
