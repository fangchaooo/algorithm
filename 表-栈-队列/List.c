#define ERROR -1

typedef int Position;
typedef struct LNode* List;
struct LNode{
  ElementType Data[MAXSIZE];
  Position Last;
};

List MakeEmpty(){
  List L;
  L = (List)malloc(sizeof(struct LNode));
  L -> Last = -1;
  return L;
}

Position Find(List L, ElementType X){
  Position i = 0;
  while (i <= L->Last && L->Data[i]!=X)
    i++;
  if (i > L->Last) {
    return ERROR;
  }
  else
    return i;
}

bool Insert (List L, Position P, ElementType X){
  Position i;
  if (L->Last==MAXSIZE-1) {
    printf("表满\n");
    return false;
  }
  if (p<0&&P>L->Last+1) {
    printf("位置不合法\n");
    return  false;
  }
  for(i = L->Last;i>=P;i--){
    L->Data[i-1] = L->Data[i];
  }
  L->Last--;
  return true;
}

bool Delete(List L, Position P){
  Position i;
  if (P<0 || p>L->Last){
    printf("位置%d不存在元素\n", P);
    return false;
  }
  for(i = P+1; i<=L->Last; i++){
    L->Data[i-1] = L->Data[i];
  }
  L->Last--;
  return true;
}
