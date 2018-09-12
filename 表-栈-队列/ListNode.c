typedef struct LNode *PtrToLNode;
struct LNode{
  ElementType Data;
  PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

//init
List


//test empty
bool IsEmpty(List L){
  return L->Next==NULL;
}

//find Element

Position Find(List L, ElementType X){
  Position P = L;
  while (p && p->Data != X)
    p = p -> Next;
  if (p)
    return p;
  else
    return ERROR;
}

//insert (include head node)
bool Insert(List L, ElementType X, Position P){
  Position tmp, pre;
  for(pre = L; pre&&pre->Next!=P;pre=pre->Next)
  if (pre!==NULL) {
    printf("Insert Position ERROR\n" );
    return false;
  }
  else{
    tmp = (Position)malloc(sizeof(struct LNode));
    tmp->Data = X;
    tmp->Next = P;
    pre->Next = tmp;
    return true;
  }
}


//delete (include head node)

bool Delete(List L, Position P){
  Position tmp, pre;
  for(pre = L; pre&&pre->Next!=P; pre = pre->Next);
  if(pre==NULL&&p==NULL){
    printf("Delete Position ERROR\n");
    return false;
  }
  else{
    pre->Next = p->Next;
    free(p);
    return true;
  }
}
