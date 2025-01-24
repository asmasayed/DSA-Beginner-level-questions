// LINKED LISTS

// basic definition of node 

// #include<stdio.h>
// #include<stdlib.h>
// struct node{               //self referential structure
//     int data;
//     struct node *link;     //contains pointer that points to same structure
// };
// int main()
// {
//     struct node *head=NULL;
//     head=(struct node *)malloc(sizeof(struct node));     //head me base address store hogya
//     head->data=45;                                       //head ne access kiya data ko from struct
//     head->link=NULL;
//     printf("%d",head->data);                      //printing the value after giving the value using head
//     free(head);
//     return 0;
// }

// 1.creating a linked list of 2 nodes
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *list;
// };
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=45;
//     head->list=NULL;
 // 
//     struct node *current=malloc(sizeof(struct node));
//     current->data=50;
//     current->list=NULL;
//
//     head->list=current;
//     printf("%d\n",head->data);
//     printf("%d",current->data);
// }

// 2.creating linked list of 3 nodes
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=45;
//     head->link=NULL;
//
//     struct node *current=malloc(sizeof(struct node));
//     current->data=50;
//     current->link=NULL;
//     head->link=current;
// 
//     current=malloc(sizeof(struct node));
//     current->data=55;
//     current->link=NULL;
//     head->link->link=current;
// }

// 3.Transversing LINKEDLIST:
// Createnode,countnode,printnode functions

// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//     int data;
//     struct node *link;
// };
// void countNode(struct node *head){
//     int count=0;
//     struct node *ptr;
//     ptr=head;
//     if(head==NULL){
//         printf("Empty linked list");
//     }else{
//     while(ptr!=NULL){
//         count++;
//         ptr=ptr->link;
//     }
//     }printf("Total node =%d\n",count);
// }
// void printlist(struct node *head){
//     struct node *ptr;
//     ptr=head;
//     printf("Elements of list:\n");
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data=45;
//     head->link=NULL;
//
//     struct node *current=malloc(sizeof(struct node));
//     current->data=50;
//     current->link=NULL;
//
//     head->link=current;
//
//     current=malloc(sizeof(struct node));
//     current->data=55;
//     current->link=NULL;
//
//     head->link->link=current;
//     countNode(head);
//     printlist(head);
// }

// 4.printing my name in linked list format
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     char data;
//     struct node *link;
// };
// void countnode(struct node *head){
//     int count=0;
//     struct node *ptr;
//     ptr=head;
//     while(ptr!=0){
//         count++;
//         ptr=ptr->link;
//     }printf("Size of list: %d\n",count);
// }
// void printnode(struct node *head){
//     printf("Elements of list:\n");
//     struct node *ptr;
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%c",ptr->data);
//         ptr=ptr->link;
//     }
// }
// int main()
// {
//     struct node *head=malloc(sizeof(struct node));
//     head->data='a';
//     head->link=NULL;
//
//     struct node *current=malloc(sizeof(struct node));
//     current->data='s';
//     current->link=NULL;
//     head->link=current;
//
//     current=malloc(sizeof(struct node));
//     current->data='m';
//     current->link=NULL;
//     head->link->link=current;
 //
//     current=malloc(sizeof(struct node));
//     current->data='a';
//     current->link=NULL;
//     head->link->link->link=current;
//
//     countnode(head);
//     printnode(head);  
// }

// 5.inserting a node at the end of list

// O(n) 
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// struct node* createNode(int x){
//     struct node *temp=(struct node *)malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     return temp;
// }
// struct node *add_to_last(int val,struct node** head){
//     struct node *newNode=createNode(val);
//     if(*head==NULL)
//     *head=newNode;
//     else{
//     struct node *n=*head;
//     while(n->link!=NULL)
//     n=n->link;
//     n->link=newNode;
//     }return *head;
// }
// void display(struct node **head){
//     struct node *temp=*head;
//     while(temp!=NULL){
//     printf("%d->",temp->data);
//     temp=temp->link;        
//     }printf("NULL\n");
// }
// int main(){
//     struct node* head=NULL;
//     struct node* ptr=head;
//     int n,data;
//     printf("Enter number of elements: ");
//     scanf("%d",&n);
//     printf("Enter elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&data);
//         head=add_to_last(data,&head);
//     }
//     display(&head);
// }
// O(1)
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// struct node* add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=add_to_last(ptr,67);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
//     return 0;
// }

//6.using recursion O(n)
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// struct node *createNode(int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     return temp;
// }
// struct node *add_to_last(int val,struct node**head){
//     struct node* newNode=createNode(val);
//     struct node* temp=*head;
//     if(newNode==NULL){
//         printf("List overflow");
//         exit(1);
//     }else if(temp==NULL){
//         return newNode;
//     }else if(temp->link==NULL){
//         temp->link=newNode;
//     }else{
//         temp->link=add_to_last(val,&temp->link);
//     }
//     return temp;
// }
// void display(struct node **head){
//     struct node *temp=*head;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->link;
//     }printf("NULL");
// }
// int main(){
//     int n,data;
//     struct node *head=NULL;
//     printf("Enter total elements: ");
//     scanf("%d",&n);
//     printf("Enter elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&data);
//         head=add_to_last(data,&head);
//     }
//     display(&head);
// }

//7.inserting element at start of list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// void add_to_start(struct node **head,int x){
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=x;
//     ptr->link=NULL;
//     ptr->link=*head;
//     *head=ptr;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=45;
//     head->link=NULL;
//
//     struct node *ptr=malloc(sizeof(struct node));
//     ptr->data=50;
//     ptr->link=NULL;
//     head->link=ptr;
//
//     int data=40;
//     add_to_start(&head,data);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
//     return 0;
// }

// 8.inserting element at any position
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// struct node* add_to_end(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// void add_at_pos(struct node *head,int pos,int val){
//     struct node *ptr=head;
//     struct node *ptr2=malloc(sizeof(struct node));
//     ptr2->data=val;
//     ptr2->link=NULL;
//     pos--;
//     while(pos!=1){
//         ptr=ptr->link;
//         pos--;
//     }
//     ptr2->link=ptr->link;
//     ptr->link=ptr2;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=3;
//     head->link=NULL;
//
//     struct node *ptr=head;
//     ptr=add_to_end(ptr,6);
//     ptr=add_to_end(ptr,12);
// 
//     ptr=head;
//     int val=9,pos=3;           //change position from here(same code for any position)
//     add_at_pos(head,pos,val);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

// 9.deleting element at first position
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// struct node *delete_first(struct node *head){
//     if(head==NULL){
//         printf("List is Empty");
//     }else if(head->link==NULL){
//         printf("List contained only one element and is now Empty");
//     }
//     else{
//     struct node *ptr=head;
//     head=head->link;
//     free(ptr);
//     ptr=NULL;
//     return head;
//     }
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=head;
 //   
//     head=delete_first(head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

// 10.deleting element at last position(using 2 pointers)
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// struct node *delete_last(struct node *head){
//     if(head==NULL){
//         printf("List is Empty");
//     }else if(head->link==NULL){
//         printf("List contained only one element and is now Empty");
//     }
//     else{
//     struct node *temp,*temp2;
//     temp=head;
//     temp2=head;
//     while(temp->link!=NULL){
//         temp2=temp;
//         temp=temp->link;
//     }
//     temp2->link=NULL;
//     free(temp);
//     temp=NULL;
//     return head;
//     }
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=head;
//     head=delete_last(head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

// 11.deleting element at last position(using one pointer)
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// struct node *remove_last(struct node *head){
//     struct node *temp=head;
//     while(temp->link->link!=NULL){
//         temp=temp->link;
//     }
//     free(temp->link);
//     temp->link=NULL;
//     return head;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=add_to_last(ptr,67);
//     ptr=head;
//     head=remove_last(head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

//12.deleting element at any index
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// void del_at_index(struct node **head,int index){
//     struct node *ptr=*head;
//     if(ptr==NULL)
//     printf("Empty list");
//     else if (index==1){
//         *head=ptr->link;
//         free(ptr);
//         ptr=NULL;
//     }else{
//         while (index!=1){
//             ptr=ptr->link;
//             index--;
//         }
//         struct node *temp=ptr->link;
//         ptr->link=ptr->link->link;
//         free(temp);
//         temp=NULL;
//     }
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=add_to_last(ptr,67);
//     ptr=add_to_last(ptr,77);
//
//     ptr=head;
//     int index=2;
//     del_at_index(&head,index);  
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

//13. deleting entire list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// struct node *del_list(struct node *head){
//     struct node *temp=head;
//     while(temp!=NULL){
//         temp=temp->link;
//         free(head);
//         head=temp;
//     }return head;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=37;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,47);
//     ptr=add_to_last(ptr,57);
//     ptr=add_to_last(ptr,67);
//     ptr=head;
//     head=del_list(head);
//     if(head==NULL)
//     printf("List deleted successfully");
//     return 0;
// }

//14. reversing LL
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
//  struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// struct node* rev(struct node *head){
//     struct node *prev,*next;
//     prev=NULL;
//     next=NULL;
//     while(head!=NULL){
//         next=head->link;
//         head->link=prev;
//         prev=head;
//         head=next;
//     }head=prev;
//     return head;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=10;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,20);
//     ptr=add_to_last(ptr,30);
//     ptr=add_to_last(ptr,40);
//     ptr=add_to_last(ptr,50);
//     ptr=head;
//     head=rev(head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

//15. reversing LL using pointer to pointer
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
//  struct node *add_to_last(struct node *ptr,int x){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=x;
//     temp->link=NULL;
//     ptr->link=temp;
//     return temp;
// }
// void rev(struct node **head){
//     struct node *prev,*next;
//     prev=NULL;
//     next=NULL;
//     while(*head!=NULL){
//         next=(*head)->link;
//         (*head)->link=prev;
//         prev=*head;
//         *head=next;
//     }*head=prev;
// }
// int main(){
//     struct node *head=malloc(sizeof(struct node));
//     head->data=10;
//     head->link=NULL;
//     struct node *ptr=head;
//     ptr=add_to_last(ptr,20);
//     ptr=add_to_last(ptr,30);
//     ptr=add_to_last(ptr,40);
//     ptr=add_to_last(ptr,50);
//     ptr=head;
//     rev(&head);
//     ptr=head;
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->link;
//     }
// }

//16.find length of list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* next;
// }*head=NULL;
// struct node *CreateNode(int data){
//     struct node *temp=malloc(sizeof(struct node));
//     temp->data=data;
//     temp->next=NULL;
//     return temp;
// }
// struct node* insertAtEnd(struct node *ptr,int data){
//     struct node *newNode=CreateNode(data);
//     if(newNode==NULL){
//         printf("List overflow");
//         return NULL;
//     }else if(head==NULL){
//         head=newNode;
//         return head;
//     }
//     else{
//         ptr->next=newNode;
//         return newNode;
//     }
// }
// int findLength(){
//     int count=0;
//     struct node *temp=head;
//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }return count;
// }
// int main(){
//     struct node*ptr=head;
//     int continueAdding=1,val;
//     char choice;
//     while(continueAdding){
//         printf("Do you want to add elements?\nY or n\n");
//         scanf(" %c",&choice);
//         if(choice=='Y' || choice=='y'){
//             printf("Enter element to add: ");
//             scanf("%d",&val);
//             ptr=insertAtEnd(ptr,val);
//         }
//         else if(choice=='N' || choice=='n'){
//             continueAdding=0;
//         }else
//         printf("Enter appropriate choice\n");
//     }
//     printf("Length of list: %d",findLength());
// }

//17.get nth node
// #include<stdio.h>
// #include<stdlib.h>
// struct node {
//     int data;
//     struct node*link;
// };
// typedef struct node node;
// node* head=NULL;
// node*createNode(int data){
//     node* newNode=malloc(sizeof(struct node));
//     newNode->data=data;
//     newNode->link=NULL;
//     return newNode;
// }
// node* insertAtEnd(node* ptr,int data){
//     node* temp=createNode(data);
//     if(head==NULL){
//         head=temp;
//         return head;
//     }
//     else{
//         ptr->link=temp;
//         return temp;
//     }
// }
// void display(){
//     node*temp=head;
//     while(temp!=NULL){
//         printf("%d",temp->data);
//         if(temp->link!=NULL)
//         printf("->");
//         temp=temp->link;
//     }printf("\n");
// }
//
//nth node form end:
//int find(int pos){
//     node*ptr1=head;
//     node*ptr2=head;
//     if(head==NULL){
//         printf("List is empty\n");
//         exit(0);
//     }else{
//         for(int i=0;i<pos;i++){
//             ptr2=ptr2->link;
//         }
//         while(ptr2!=NULL){
//             ptr1=ptr1->link;
//             ptr2=ptr2->link;
//         }
//         return ptr1->data;
//     }
// }
//
//nth node from start
// int find(int pos){
//     node*ptr=head;
//     if(ptr==NULL){
//         printf("List is empty\n");
//         exit(0);
//     }else{
//         while(pos!=1){
//             ptr=ptr->link;
//             pos--;
//         }return ptr->data;  
//     }
// }
// int main(){
//     int n,val,no;
//     node* ptr=head;
//     printf("Enter n\n");
//     scanf("%d",&n);
//     printf("Enter elements\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&val);
//         ptr=insertAtEnd(ptr,val);
//     }
//     printf("list:\n");
//     display();
//     printf("\nEnter node: ");
//     scanf("%d",&no);
//     printf("Element at node %d is %d\n",no,find(no));
// }

//18.find middle element of list
// int findMiddleElement(int n){
//     int mid=n/2;
//     node*ptr=head;
//     if(head==NULL){
//         printf("List is empty\n");
//         exit(0);
//     }else{
//         for(int i=0;i<mid;i++){
//             ptr=ptr->link;
//         }
//         return ptr->data;
//     }
// }

//19.delete last repeating element
// void deleteLastRep(int key){
//     node*prev=NULL,*current=head,*lastMatch=NULL,*lastMatchprev=NULL;
//     if(current==NULL){
//         printf("list is empty\n");
//         exit(0);
//     }while(current!=NULL){
//         if(current->data==key){
//             lastMatch=current;
//             lastMatchprev=prev;
//         }
//         prev=current;
//         current=current->link;
//     }
//     if(lastMatch==NULL)
//         printf("The element was not found\n");
//     else if(lastMatch==head)
//         head=head->link;
//     else
//         lastMatchprev->link=lastMatch->link;
//     free(lastMatch);
// }

//20.delete all duplicate elements(duplicates)
// void deleteDup(){
//     node*ptr=head,*current=head,*ptrPrev=NULL;
//     while(current!=NULL && current->link!=NULL){
//         ptrPrev=current;
//         ptr=current->link;
//         while(ptr!=NULL){
//             if(current->data==ptr->data){
//                 ptrPrev->link=ptr->link;
//                 free(ptr);
//                 ptr=ptrPrev->link;
//             }else{
//                 ptrPrev=ptr;
//                 ptr=ptr->link;
//             }
//         }current=current->link;
//     }
// }

//21.Delete N nodes after M nodes of a list
// void deleteNtoM(int n,int m){
//     node*nthNode=head,*mthNode=head->link;
//     if(head==NULL){
//         printf("List is empty\n");
//         exit(0);
//     }else{
//         while(n!=1){
//             nthNode=nthNode->link;
//             mthNode=mthNode->link;
//             n--;
//         }
//         while(m!=0){
//             nthNode->link=mthNode->link;
//             free(mthNode);
//             mthNode=nthNode->link;
//             m--;
//         }
//     }
// }

//22.CIRCULAR LINKED LIST
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node* link;
// };
// typedef struct node node;
// node *head=NULL,*tail=NULL;
// node*CreateNode(int data){
//     node*temp=malloc(sizeof(node));
//     temp->data=data;
//     temp->link=NULL;
//     return temp;
// }
// void createDummies(){
//     head=CreateNode(0);
//     tail=CreateNode(0);
//     head->link=tail;
//     tail->link=head;
// }
// void insertAtStart(int data){
//     node*newNode=CreateNode(data);
//     node*temp;
//     temp=head->link;
//     head->link=newNode;
//     newNode->link=temp;
// }
// node* insertAtEnd(node*ptr,int data){
//     node*newNode=CreateNode(data);
//     if(head->link==tail){
//         head->link=newNode;
//     }
//     else{
//         ptr->link=newNode;
//     }
//     newNode->link=tail;
//     return newNode;
// }
// void insertAtPos(int pos,int x){
//     if(pos<=0){
//         printf("Invalid Position!");
//         return;
//     }
//     node*newNode=CreateNode(x);
//     if(pos==1){
//         newNode->link=head->link;
//         head->link=newNode;
//         return;
//     }
//     node*temp=head->link;
//     pos--;
//     while(pos!=1 && temp!=tail){
//         temp=temp->link;
//         pos--;
//     }
//     newNode->link=temp->link;
//     temp->link=newNode;
// }
// void deleteNode(int pos){
//     node*temp=head->link,*prev=NULL;
//     if(pos<1){
//         printf("Invalid position");
//         return;
//     }else if(pos==1){
//         if(temp==tail){
//             printf("List is empty\n");
//             return;
//         }
//         head->link=temp->link;
//         free(temp);
//         return;
//     }else{
//         while(pos!=1){
//             prev=temp;
//             temp=temp->link;
//             pos--;
//         }
//         prev->link=temp->link;
//         free(temp);
//         return;
//     }
// }
// int find(int key){
//     int count=1;
//     node*temp=head->link;
//     while(temp!=tail){
//         if(temp->data==key)
//         return count;
//         else{
//         temp=temp->link;  
//         count++;
//         }
//     }
// }
// int length(){
//     int count=0;
//     node*temp=head->link;
//     if(temp==tail)
//     return count;
//     while(temp!=tail){
//         count++;
//         temp=temp->link;
//     }return count;
// }
// void reverse(){
//     node*prev=tail,*current=head->link,*next=NULL;
//     while(current!=tail){
//         next=current->link;
//         current->link=prev;
//         prev=current;
//         current=next;
//     }head->link=prev;
// }
// void display(){
//     node*temp=head->link;
//     while(temp!=tail){
//         printf("%d",temp->data);
//         if(temp->link!=tail)
//         printf("->");
//         temp=temp->link;
//     }printf("\n");
// }
// int main(){
//     int val,n;
//     createDummies();
//     printf("Enter number of elements: ");
//     scanf("%d",&n);
//     printf("Enter elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&val);
//         insertAtStart(val);
//     }
//     printf("Circular list:\n");
//     display();
// }

//23.DOUBLY LINKED LIST
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node node;
// struct node{
//     int data;
//     node* prev,*next;
// };
// node *head=NULL,*tail=NULL;
// node*CreateNode(int data){
//     node*temp=malloc(sizeof(node));
//     temp->data=data;
//     temp->prev=NULL;
//     temp->next=NULL;
//     return temp;
// }
// void createDummies(){
//     head=CreateNode(0);
//     tail=CreateNode(0);
//     head->prev=NULL;
//     tail->next=NULL;
//     head->next=tail;
//     tail->prev=head;
// }

//24. Insert at start of list
// void insertAtStart(int data){
//     node*newNode=CreateNode(data);
//     if(newNode==NULL){
//         printf("MEmory allocation failed");
//         exit(0);
//     }else if(head->next==tail){
//         //first node is getting added
//         head->next=newNode;
//         newNode->prev=head;
//         newNode->next=tail;
//         tail->prev=newNode;
//     }else{
//         //one or more nodes are already there
//         head->next->prev=newNode;
//         newNode->next=head->next;
//         newNode->prev=head;
//         head->next=newNode;
//     }
// }

//25.Insert at end
// void insertAtEnd(int data){
//     node*newNode=CreateNode(data);
//     if(newNode==NULL){
//         printf("Memory allocation failed!\n");
//         return;
//     }else if(head->next==tail){
//         //first node is being added
//         newNode->next=head->next;
//         head->next=newNode;
//         newNode->prev=tail->prev;
//         tail->prev=newNode;
//     }else{
//         //more than one nodes are present
//         newNode->prev=tail->prev;
//         newNode->next=tail;
//         newNode->prev->next=newNode;
//         tail->prev=newNode;
//     }
// }

//26.Delete a particular position
// void deletePos(int pos){
//     node*ptr=head->next;
//     if(pos<1){
//         printf("Invalid");
//         return;
//     }else if(pos==1){
//         //first element is to be deleted
//         head->next=ptr->next;
//         ptr->next->prev=head;
//         free(ptr);
//     }else{
//         while(pos!=1 && ptr!=tail){
//             ptr=ptr->next;
//             pos--;
//         }
//         if(ptr==tail){
//             printf("Position out of bounds");
//             return;
//         }
//         ptr->prev->next=ptr->next;
//         ptr->next->prev=ptr->prev;
//         free(ptr);
//     }
// }

//27.delete entire list
// void deleteList(){
//     node*temp=head;
//     while(temp!=NULL){
//         node*newNode=temp->next;
//         free(temp);
//         temp=newNode;
//     }head=tail=NULL;
//     printf("List is deleted\n");
// }

//28.Search for an element
// int search(int key){
//     int count=1;
//     node*ptr=head->next;
//     while(ptr!=tail){
//         if(ptr->data==key){
//             return count;
//         }else{
//             ptr=ptr->next;
//             count++;
//         }
//     }return 0;
// }

//29.reverse the list
// void reverse(){
//     node*ptr=tail->prev;
//     if(ptr==head){
//         printf("List is empty");
//         return;
//     }  
//     while(ptr!=head){
//         printf(" %d ",ptr->data);
//         if(ptr->prev!=head)
//         printf("<->");
//         ptr=ptr->prev;
//     }printf("\n");
// }

//30.Search for the smallest value
// int searchSmallest(int key){
//     int count=0;
//     node*temp=head->next;
//     int min=temp->data;
//     int minIndex=0;
//     while(temp!=tail){
//         if(min>temp->data){
//             min=temp->data;
//             minIndex=count;
//         }
//         temp=temp->next;
//         count++;
//     }
//     return minIndex;
// }

//31.display the list
// void display(){
//     node*temp=head->next;
//     if(head->next==tail){
//         printf("List is empty");
//         return;
//     }
//     while(temp!=tail){
//         printf(" %d ",temp->data);
//         if(temp->next!=tail)
//         printf("<->");
//         temp=temp->next;
//     }printf("\n");
// }
// int main(){
//     int val,n,choice;
//     createDummies();
//     while(1){
//         printf("Enter operation:\n1.Insert at start\n2.Insert at end\n3.Delete a node\n4.Delete List\n5.Search element\n6.Quit");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:printf("\nEnter element to add: ");
//             scanf("%d",&val);
//             insertAtStart(val);
//             break;
//             case 2:printf("\nEnter element to add: ");
//             scanf("%d",&val);
//             insertAtEnd(val);
//             break;
//             case 3:printf("\nEnter node to delete: ");
//             scanf("%d",&val);
//             printf("\nNode is deleted\n");
//             break;
//             case 4:deleteList();
//             break;
//             case 5:
//             printf("\nEnter element to find: ");
//             scanf("%d",&n);
//             val=search(n);
//             if(val>=1)
//             printf("\nElement is found at node %d");
//             else
//             printf("\nElement is not found");
//             break;
//             case 6:exit(0);
//     }
//     }
// }

