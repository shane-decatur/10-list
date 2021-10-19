struct con {
  int level;
  char *class;
  struct con *next;
};

void print_struct(struct con s);
void print_list(struct con *s);
struct con * make(int l, char *c);
struct con * insert_front(struct con *s, int l, char *c);
struct con * free_list(struct con *s);
struct con * remove_node(struct con *front, int data);
