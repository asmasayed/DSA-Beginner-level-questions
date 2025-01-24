//IMPLEMENTATION OF STACKS USING ARRAY

//Creating a stack
// #include<stdio.h>
// #include<stdlib.h>
// //defining stack,top,and max
// #define MAX 4
// int stack_arr[MAX];
// int top=-1;
//
// //declaring functions
// void push(int x);
// int isFull();
// int pop();
// int isEmpty();
// int peek();
// void printStack();

// int main(){
//     int choice,data;
//     //printing the choices
//     while(1){
//         printf("\nEnter function to perform:\n");
//         printf("1.PUSH\n");
//         printf("2.POP\n");
//         printf("3.See topmost element\n");
//         printf("4.Print stack\n");
//         printf("5.Quit\n\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1://push
//             printf("Enter element to push: ");
//             scanf("%d",&data);
//             push(data);
//             break;
//             case 2://pop
//             data=pop();
//             printf("Deleted element is: %d\n",data);
//             break;
//             case 3://peek
//             data=peek();
//             printf("Topmost element is: %d\n",data);
//             break;
//             case 4://print
//             printStack();
//             break;
//             case 5://stop
//             exit(1);
//             default:
//             printf("Select appropriate option\n");
//         }
//     }return 0;
// }
//
// int isFull(){
//     if(top==MAX-1)
//     return 1;
//     else
//     return 0;
// }
// void push(int x){
//     if(isFull()){
//         printf("Stack overflow\n");
//         return;
//     }
//     top=top+1;
//     stack_arr[top]=x;
// }
//
// int isEmpty(){
//     if(top==-1)
//     return 1;
//     else
//     return 0;
// }
// int pop(){
//     int value;
//     if(isEmpty()){
//         printf("Stack underflow\n");
//         exit(1);
//     }
//     value=stack_arr[top];
//     top=top-1;
//     return value;
// }
//
// int peek(){
//     if(isEmpty()){
//         printf("Stack is Empty\n");
//         exit(1);
//     }
//     return stack_arr[top];
// }
//
// void printStack(){
//     int n=top;
//     while(n!=-1){
//         printf("%d ",stack_arr[n]);
//         n--;
//         printf("\n");
//     }
// }

//stacks application:

// 1.convert infix to postfix
//infix to postfix
// #include<stdio.h>
// #include<string.h>
// #define max 100
// char infix[max],postfix[max];
// char stack[max];
// int top=-1;
// int isEmpty(){
//     return top==-1;
// }
// void push(char c){
//     stack[++top]=c;
// }
// char pop(){
//     return stack[top--];
// }
// int pre(char c){
//     switch(c){
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         default:
//             return 0;
//     }
// }
// void convertToPostfix(){
//     int i=0,j=0;
//     char current,c;
//     while(infix[i]!='\0'){
//         current=infix[i++];
//         switch(current){
//             case '(':
//                 push(current);
//                 break;
//             case ')':
//                 while(!isEmpty() && (c=pop())!='(')
//                 postfix[j++]=c;
//                 break;
//             case '+':
//             case '/':
//             case '*':
//             case '-':
//                 while(!isEmpty() && pre(current)<=pre(stack[top]))
//                     postfix[j++]=pop();
//                     push(current);
//                 break;
//             default:
//                 postfix[j++]=current;   
//         }
//     }
//     while(!isEmpty()){
//         postfix[j++]=pop();
//     }
//     postfix[j]='\0';
// }
// void print(){
//     int i=0;
//     while(postfix[i]!='\0'){
//         printf("%c ",postfix[i++]);
//     }
// }
// int main(){
//     printf("Enter infix:");
//     fgets(infix,max,stdin);
//     if(infix[strlen(infix)-1]=='\n')
//     infix[strlen(infix)-1]='\0';
//     convertToPostfix();
//     print();
// }

//2. evaluate postfix expression
//#include<stdio.h>
// #include<string.h>
// #define max 20
// char exp_arr[max];
// int stack_arr[max];
// int top=-1;
// void push(int val){
//     top++;
//     stack_arr[top]=val;
// }
// int pop(){
//     int val;
//     val=stack_arr[top];
//     top--;
//     return val;
// }
// int main(){
//     char current;
//     int op1,op2,ans;
//     printf("Enter expression to evaluate:\n");
//     fgets(exp_arr,20,stdin);
//     for(int i=0;i<strlen(exp_arr);i++){
//         current=exp_arr[i];
//         if(current>='0'&& current<='9'){
//             push(current-'0');
//         }else{
//             op1=pop();
//             op2=pop();
//             switch(current){
//                 case '+':
//                 ans=op2+op1;
//                 break;
//                 case '-':
//                 ans=op2-op1;
//                 break;
//                 case '*':
//                 ans=op2*op1;
//                 break;
//                 case '/':
//                 ans=op2/op1;
//                 break;
//             }push(ans);
//         }
//     }
//     printf("%d",pop());
// }

//IMPLEMENTATION OF STACKS USING LINKEDLISTS

//1. creating stack
// #include<stdlib.h>
// #include<stdio.h>
// struct node{
//     int data;
//     struct node *link;
// }*top=NULL,*temp=NULL;
// void push(int val){
//     struct node *newNode=malloc(sizeof(struct node));
//     if(newNode==NULL)
//     printf("Stack overflow");
//     else{
//         newNode->data=val;
//         newNode->link=NULL;
//         newNode->link=top;
//         top=newNode;
//     }
// }
// int pop(){
//     if(top==NULL)
//     printf("Stack underflow");
//     else{
//         temp=top;
//         top=top->link;
//         return temp->data;
//     }
// }
// void print_stack(){
//     struct node *temp=top;
//     while(temp){
//         printf("%d\n",temp->data);
//         temp=temp->link;
//     }
// }
// int peek(){
//     return top->data;
// }
// int main()
// {
//     int choice,data;
//     while(1){
//         printf("Enter operationn to perform:\n1->Push\n2->Pop\n3->Peek\n4->Display\n5->Quit\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:printf("Enter element to add ");
//             scanf("%d",&data);
//             push(data);
//             break;
//             case 2:
//             data=pop();
//             printf("%d is popped\n",data);
//             free(temp);
//             break;
//             case 3:
//             data=peek();
//             printf("Topmost element: %d\n",data);
//             break;
//             case 4:printf("Elements of stack are:\n");
//             print_stack();
//             break;
//             case 5:
//             exit(1);
//             default:
//             printf("Enter appropriate option\n");
//         }
//     }   
// }

//2. reversing stack in form of linked list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// int isEmpty(struct node **top){
//     return *top==NULL;
// }
// struct node *CreateNode(int x){
//     struct node *temp=malloc(sizeof(struct node));
//     if(temp==NULL)
//     printf("Stack overflow");
//     else{
//         temp->data=x;
//         temp->link=NULL;
//         return temp;
//     }
// }
// void push(int val,struct node **top){
//     struct node *newNode=CreateNode(val);
//     newNode->link=*top;
//     *top=newNode;
// }
// int pop(struct node **top){
//     int val;
//     if(isEmpty(top))
//     printf("Stack is empty\n");
//     else{
//         struct node* temp=*top;
//         val=temp->data;
//         *top=(*top)->link;
//         free(temp);
//         temp=NULL;
//         return val;
//     }
// }
// void rev(struct node **top){
//     struct node *top1,*top2;
//     top1=NULL;
//     top2=NULL;
//     while(*top!=NULL){
//         push(pop(top),&top1);
//     }
//     while(top1!=NULL){
//         push(pop(&top1),&top2);
//     }
//     while(top2!=NULL){
//         push(pop(&top2),top);
//     }
// }
// void print(struct node **top){
//     struct node *temp;
//     temp=*top;
//     while(temp){
//         printf("%d ",temp->data);
//         temp=temp->link;
//     }
//     printf("\n");
// }
// int main(){
//     struct node *top=NULL;
//     int choice,data;
//     push(1,&top);
//     while(1){
//         printf("Select:\n1->Push\n2->Reverse\n3->Display\n4->Quit\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             printf("Enter element to push\n");
//             scanf("%d",&data);
//             push(data,&top);
//             break;
//             case 2:
//             rev(&top);
//             printf("Stack has been reversed\n");
//             break;
//             case 3:
//             print(&top);
//             break;
//             case 4:
//             exit(1);
//             default:
//             printf("Enter valid choice\n");
//         }
//     }
//
// }

// 3. reverse stack using array
// #include<stdio.h>
// #define max 20
// int stack_arr[max];
// int stack_arr_rev[max];
// int top=-1,top1=-1;
// int isFull(){
//     return top==max-1;
// }
// void push(int data){
//     if(isFull())
//     printf("Stack overflow\n");
//     else
//     stack_arr[++top]=data;
// }
// void display_stack(){
//     for(int i=top;i>=0;i--){
//         printf("%d ",stack_arr[i]);
//     }printf("\n");
// }
// int isEmpty(){
//     return top==-1;
// }
// int pop(){
//     return stack_arr[top--];
// }
// int isFullTemp(){
//     return top1==max-1;
// }
// void pushToTemp(int data){
//     if(isFullTemp())
//     printf("Stack overflow\n");
//     else
//     stack_arr_rev[++top1]=data;
// }
// void popTemp(){
//     printf("Reversed Stack: \n");
//     while(top1!=-1){
//         printf("%d ",stack_arr_rev[top1--]);
//     }printf("\n");
// }
// void reverse(){
//     while(top!=-1){
//         int data=pop();
//         pushToTemp(data);
//     }
//     popTemp();  
// }
// int main(){
//     int n;
//     printf("Enter no of elements:\n");
//     scanf("%d",&n);
//     printf("Enter elements:\n");
//     for(int i=0;i<n;i++){
//         int val;
//         scanf("%d",&val);
//         push(val);
//     }
//     printf("Original stack:\n");
//     display_stack();
//     reverse();
// }

//questions:

//4.stack_arr[0] as top
// #include<stdio.h>
// #include<stdlib.h>
// #define max 4
// int stack_arr[max];
// int first=-1;
// int isFull(){
//     int a=(first==max-1)?1:0;
//     return a;
// }
// void push(int val){
//     if(isFull())
//     printf("Stack overflow\n");
//     else{
//         int i;
//         first+=1;
//         for(i=first;i>0;i--){
//             stack_arr[i]=stack_arr[i-1];
//         }
//         stack_arr[0]=val;
//     }
// }
// int isEmpty(){
//     int a=(first==-1)?1:0;
//     return a;
// }
// int pop(){
//     if(isEmpty())
//     printf("Stack underflow\n");
//     else{
//         int val=stack_arr[0];
//         for(int i=0;i<first;i++){
//             stack_arr[i]=stack_arr[i+1];
//         }
//         first-=1;
//         return val;
//     }
// 
// }
// int peek(){
//     if(isEmpty())
//     printf("Stack is empty\n");
//     else
//     return stack_arr[0];
// }
// void display(){
//     printf("Elements of stack are:\n");
//     for(int i=0;i<=first;i++){
//         printf("%d ",stack_arr[i]);
//     }
// }
// int main(){
//     int choice,data;
//     while(1){
//         printf("Select:\n1->Push\n2->Pop\n3->Peek\n4->Display\n5->Quit\n");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             printf("Enter element to push\n");
//             scanf("%d",&data);
//             push(data);
//             break;
//             case 2:
//             printf("%d is popped\n",pop());
//             break;
//             case 3:
//             printf("Topmost element is %d\n",peek());
//             break;
//             case 4:
//             display();
//             break;
//             case 5:
//             exit(1);
//         }
//     }   
// }

//5. find prime factors in descending order
// #include<stdio.h>
// #define max 100
// int stack_arr[max];
// int top=-1;
// void push(int val){
//     stack_arr[++top]=val;
// }
// void prime(int num){
//     int i=2;
//     while(num!=1){
//         while(num%i==0){
//             push(i);
//             num=num/i;
//         }i++;
//     }
// }
// int pop(){
//     int val=stack_arr[top--];
//     return val;
// }
// void print(){
//     while(top!=-1){
//         printf("%d ",pop());
//     }
// }
// int main(){
//     int no;
//     printf("Enter number\n");
//     scanf("%d",&no);
//     prime(no);
//     print();
// }

//6. decimal to binary
// #include<stdio.h>
// #include<stdlib.h>
// #define max 10
// int stack_arr[max];
// int top=-1;
// void push(int val){
//     stack_arr[++top]=val;
// }
// void convert(int num){
//     while(num!=0){
//         push(num%2);
//         num/=2;
//     }
// }
// int pop(){
//     int val=stack_arr[top--];
//     return val;
// }
// void display(){
//     while(top!=-1){
//         printf("%d",pop());
//     }
// }
// int main(){
//     int dec;
//     printf("Enter a decimal number\n");
//     scanf("%d",&dec);
//     convert(dec);
//     display();
// }

//7.string pallindrome(using stack)
// #include<stdio.h>
// #include<string.h>
// #define MAX 100
// char stack_arr[MAX];
// int top=-1;
// void push(char s){
//     if(top==MAX-1)
//         printf("Stack overflow\n");
//     else
//         stack_arr[++top]=s;
// }
// char pop(){
//     if(top==-1){
//         printf("Stack underflow");
//         return '\0';
//     }
//     else
//         return stack_arr[top--];
// }
// int reverseString(char str[]){
//     char strRev[MAX];
//     int count=0;
//     int len=strlen(str);
//     for(int i=0;i<len;i++)
//         push(str[i]);
//     for(int i=0;i<len;i++)
//         strRev[i]=pop();
//     strRev[len]='\0';
//     for(int i=0;i<len;i++){
//         if(str[i]==strRev[i]){
//             count++;
//         }
//     }if(count==len)
//     return 1;
//     else
//     return 0;
// }
// int main(){
//     char str[MAX];
//     printf("Enter a string ");
//     fgets(str,MAX,stdin);
//     str[strcspn(str, "\n")] = '\0';
//     if(reverseString(str))
//     printf("String is pallindrome\n");
//     else
//     printf("String is not pallindrome\n");  
// }

//8. Number Pallindrome
// #include<stdio.h>
// #include<string.h>
// #define MAX 100
// int stack_arr[MAX];
// int top=-1;
// int isFull(){
//     return top==MAX-1;
// }
// void push(int val){
//     if(!isFull())
//         stack_arr[++top]=val;
// }
// int isEmpty(){
//     return top==-1;
// }
// int pop(){
//     if(!isEmpty())
//         return stack_arr[top--];
// }
// int check(int num){
//     int ogNo=num;
//     while(num>0){
//         push(num%10);
//         num/=10;
//     }
//     num=ogNo;
//     int digit;
//     while(num>0){
//         digit=num%10;
//         if(digit!=pop())
//             return 0;
//         num/=10;
//     }return 1;
// }
// int main(){
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     if(check(num))
//     printf("The number is Pallindrome");
//     else
//     printf("The number is not Pallindrome");
// }

//9. rev string using stack
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #define max 20
// char stack_arr[max];
// int top=-1;
// int isFull(){
//     return top==max-1;
// }
// void push(char val){
//     if(isFull()){
//         printf("Stack overflow");
//         exit(1);
//     }else
//     stack_arr[++top]=val;
// }
// int isEmpty(){
//     return top==-1;
// }
// char pop(){
//     if(isEmpty())
//         return -1;
//     return stack_arr[top--];
// }
// void rev(char string[20]){
//     int i=0;
//     while(string[i]!='\0'){
//         push(string[i]);
//         i++;
//     }
//     printf("Reversed string is:\n");
//     while(top!=-1){
//         printf("%c",pop());
//     }
// }
// int main(){
//     char s[max];
//     printf("Enter a string ");
//     fgets(s,max,stdin);
//     if(s[strlen(s)-1]=='\n')
//     s[strlen(s)-1]='\0';
//     rev(s);
// }

//10.decimal to binary
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *link;
// };
// typedef struct node stack;
// stack *top=NULL;
// void push(int val){
//     stack *ptr=malloc(sizeof(stack));
//     ptr->data=val;
//     ptr->link=NULL;
//     if(top==NULL){
//         top=ptr;
//     }else{
//         ptr->link=top;
//         top=ptr;
//     }
// }
// int isEmpty(){
//     return top==NULL;
// }
// int pop(){
//     if(isEmpty()){
//         printf("Stack underflow");
//         return -1;
//     }
//     stack *temp=top;
//     int val=temp->data;
//     if(top->link==NULL) {
//         top=NULL;
//     }else{
//         top=top->link;
//     }
//     free(temp);
//     return val;
// }
// void display(){
//     stack *temp=top;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp=temp->link;
//     }
//     printf("\n");
// }
// void decimalToBin(int num){
//     int rem;
//     while(num>0){
//         rem=num%2;
//         push(rem);
//         num/=2;
//     }
// }
// int main(){
//     int num;
//     printf("Enter decimal number:");
//     scanf("%d",&num);
//     decimalToBin(num);    
//     display();
// }