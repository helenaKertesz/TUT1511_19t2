struct overall {
    struct node *start;
    struct node *end;
};

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void insert_at_front(struct overall *o, int data);
void insert_before_end(struct overall *o, int data);
struct overall* new_list();
void print_list (struct overall *o);
