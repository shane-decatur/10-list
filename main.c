#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "construct.h"

int main(){
  srand(time(NULL));

  struct con *s = make(100,"wizard");
  s = insert_front(s,12,"knight");
  s = insert_front(s,0,"court jester");
  print_list(s);
  // printf("%p\n",s);
  // printf("%p\n",free_list(s));

  // struct con *x = make(12,"knight");
  // print_list(x);
  // free(x);
}
