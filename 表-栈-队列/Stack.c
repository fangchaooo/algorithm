typedef int Position;
struct SNode{
  ElementType *Data;
  Position Topl;
  int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack(int MaxSize){
  Stack S = (Stack)malloc(sizeof(struct SNode));
  S->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
  S->Top = -1;
  s->MaxSize = MaxSize;
  return S;
}

bool IsFull(Stack S){
  return (S->Top == S->MaxSize-1);
}

bool Push(Stack S, ElementType X){
  if (IsFull(S)) {
    printf("堆栈满\n");
    return false;
  }
  else{
    S->Data[++(S->Top)] = X;
    return true;
  }
}

bool IsEmpty(Stack S){
  return (S->Top == -1);
}

ElementType Pop(Stack S){
  if(IsEmpty(S)){
    printf("堆栈空\n" );
    return ERROR;
  }
  else{
    return (S->Data[(S->Top)--]);
  }
}
