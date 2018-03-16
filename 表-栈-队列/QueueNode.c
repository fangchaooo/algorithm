typedef struct Node * PtrToNode;
struct Node{
  ElementType Data;
  PtrToNode Next;
};
typedef PtrToNode Position;

struct Queue{
  Position Front, Rear;
  int MaxSize;
};
typedef struct QNode *Queue;

bool IsEmpty(Queue Q){
  return (Q->Front == NULL);
}

ElementType DeleteQ(Queue Q){
  Position FrontCell;
  ElementType FrontElem;

  if(IsEmpty(Q)){
    printf("队列空\n", );
    return ERROR;
  }
  else{
    FrontCell = Q->Front;
    if(Q->Front == Q->Rear)
      Q->Front = Q->Rear = NULL;
    else
      Q->Front = Q->Front->Next;
    FrontElem = FrontCell ->Data;

    free(FrontCell);
    return FrontElem;
  }
}
