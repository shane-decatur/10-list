#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "construct.h"

int main(){
  srand(time(NULL));

  struct con *s = make(100,"wizard");
  s = insert_front(s,12,"knight");
  s = insert_front(s,0,"court jester");
  s = insert_front(s,80,"necromancer");
  s = insert_front(s,1000,"huge nerd");
  print_list(s);

  printf("\n");

  //removes in middle of list
  s = remove_node(s, 12);
  print_list(s);

  printf("\n");

  //removes beginning of list
  s = remove_node(s,1000);
  print_list(s);

  printf("\n");

  //removes end of list
  s = remove_node(s,100);
  print_list(s);

  printf("\n");

  //removes nonexistent value
  s = remove_node(s,1209);
  print_list(s);
}
