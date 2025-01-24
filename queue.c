//implement queue using array
// #include<stdio.h>
// #include<stdlib.h>
// #define max 10
// int queue_arr[max];
// int front=-1,rear=-1;
// int isFull(){
//     return rear==max-1;
// }
// void enqueue(int val){
//     if(isFull()){
//         printf("Queue overflow");
//         exit(1);
//     }
//     else if(front==rear && front==-1){
//         front++;
//         queue_arr[++rear]=val;
//     }else
//     queue_arr[++rear]=val;
// }
// int isEmpty(){
//     return front==-1;
// }
// int dequeue(){
//     if(isEmpty()){
//         printf("Queue is empty\n");
//         exit(1);
//     }
//     else
//     return queue_arr[front++];
// }
// int peek(){
//     if(isEmpty()){
//         printf("Queue is empty\n");
//         exit(1);
//     }else
//     return queue_arr[front];
// }
// void delete(){
//     if(isEmpty()){
//         printf("Queue is empty\n");
//         exit(1);
//     }else
//         front=rear=-1;
// }
// void display(){
//     if(isEmpty()){
//         printf("Queue is empty\n");
//         exit(1);
//     }
//     else{
//         for(int temp=front;temp<=rear;temp++)
//         printf("%d ",queue_arr[temp]);
//     }printf("\n");
// }
// int main(){
//     int choice,data;
//     while(1){
//     printf("Enter operation to perform on queue:\n1->Enqueue\n2->Dequeue\n3->Peek\n4->Display\n5->Delete queue\n6->Quit\n");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1: printf("Enter element to enqueue: ");
//         scanf("%d",&data);
//         enqueue(data);
//         break;
//         case 2: printf("%d is dequeued\n",dequeue());
//         break;
//         case 3: printf("Element at front: %d\n",peek());
//         break;
//         case 4: display();
//         break;
//         case 5:delete();
//         printf("Queue has been deleted\n");
//         break;
//         case 6: exit(1);
//         default: printf("Select appropriate option\n");
//     }
//     }
// }
