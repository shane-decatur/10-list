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
  if (s->level != 0 && s->class[0] != 0){
    print_struct(*s);
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

int main(){
  srand(time(NULL));

  struct con *s = make(rand(),"wizard");
  print_struct(*s);
  free(s);

  struct con *x = make(rand(),"knight");
  print_struct(*x);
  free(x);
}
