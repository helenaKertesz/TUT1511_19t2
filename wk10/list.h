
struct node {
	int data;           // data item at this node
	struct node *next;  // pointer to the next node
};

void print( struct node* list );
struct node* new_node( int value );
