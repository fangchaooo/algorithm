# 第三章课后练习

1. 编写打印出一个单链表所有元素的程序

   ```c
   /*
     Print elements of a linked list on console 
     head pointer input could be NULL as well for empty list
     Node is defined as 
     struct Node
     {
        int data;
        struct Node *next;
     }
   */
   void Print(Node *head)
   {
     if(head == NULL)
       return ;
     else
     {
       while(head!=NULL)
       {
         printf("%d", head->data);
         head = head->next;
       }
     }
   }
   ```

   ​

2. 给你一个链表L和另一个链表P，他们包含以升序排列的整数。操作`PrintLots(L, P)` 将打印L中那些由P所指定的位置上的元素。例如，如果`p=1, 3, 4, 6`。 那么L中的第1，第3，第4和第6个元素将被打印出来。写出过程`PrintLots(L, P)`你应该只使用基本表操作。该过程的运行时间是多少？

   ```c
   /*
     Print elements of a linked list on console 
     head pointer input could be NULL as well for empty list
     Node is defined as 
     struct Node
     {
        int data;
        struct Node *next;
     }
   */
   void PositionPrint(Node* L, Node* P)
   {
     int Counter = 1;
     Node* Lpos, Ppos;
     Ppos = p;
     Lpos = L;
     while(Lpos != NULL && Ppos != NULL)
     {
       if(Ppos -> data == Counter++)
       {
         printf("%d", Lpos->data);
         Ppos = Ppos -> next;
       }
       Lpos = Lpos -> next;
     }
   }
   ```





3. 通过只调整指针来交换两个相邻元素。	

   ```c
   void SwapWithNext(Positon BeforeP , List L)
      {
        position P, AfterP;

        p = BeforeP->next;
        AfterP = P -> next;
        
        P -> next = AfterP ->next;
        BeforeP -> next = AfterP;
        AfterP -> Next = p;
      }
   ```

   ​

4. 写出函数实现 L1 $\bigcap$ L2（L1,L2已排序）

   ```c
   List Intersect(List L1, List L2)
   {
     List Result;
     Position 
   }
   ```

   ​

