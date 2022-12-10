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
node *compare(node *head11, node *head22);
void print(node *p11, node *p22, node* (*func)(node*, node*));
