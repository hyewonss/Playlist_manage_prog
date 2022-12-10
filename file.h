struct element{
    char artist[30];
    char song[30];
};
typedef struct element element;

struct node{
    struct element data;
    struct node * next;
};
typedef struct node node;

node *createnode(void);
void insert(node **phead, node *newnode);
node *search(node *phead);
void delete(node **phead, node *remove);
void display(node *head);
void writefile(node *phead);