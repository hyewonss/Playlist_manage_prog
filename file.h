struct element{
    char artist[30];
    char song[30];
};
typedef struct element element; //node구조체내의 변수중 하나

struct node{
    struct element data;  //이름,전화번호 데이터
    struct node * next;  //다음 노드를 가리키는 데이터
};
typedef struct node node; 

char result[30];    //compare에서 입력받은 가수명
char result1[30];   //compare에서 입력받은 곡명의 가수명

node *createnode(void);     //node 하나 만드는 함수, insert 함수의 두번째 인자로 전달하기 위해
void insert(node **phead, node *newnode);      //연결리스트의 마지막 node에 newnode연결
node *search(node *phead);      //입력한 곡명을 가진 node를 찾는 함수
node *search_s(node *phead);    //연결리스트를 한바퀴 순회하면서 입력된 곡명을 가진 node를 모두 찾는 함수.
node *search_a(node *phead);    //연결리스트를 한바퀴 순회하면서 입력된 가수명을 가진 node를 모두 찾는 함수.
void delete(node **phead, node *remove);    //remove노드를 search함수로 찾아서 인자로 전달
void display(node *head);   //연결리스트의 모든 내용, 총 몇곡 있는지 출력
void writefile(node *phead);    //종료시 파일에 연결리스트의 내용을 저장
int compare(node *head);    //result와 result1 문자열 비교
void print_e(node *head, int(*func)(node*));    //compare함수를 함수포인터 인자로 받아서 시행한 비교의 결과값 리턴
