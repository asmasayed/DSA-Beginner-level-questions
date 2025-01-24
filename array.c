//#include <stdio.h>
// int main()
// {
    //dynamic arr declaration (1D)
    /*int arr[5];
    arr[0]=5;
    arr[1]=10;
    arr[2]=15;
    arr[3]=20;
    arr[4]=25;
    for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
    }*/
//
    //or
    /*int arr[5]={1,2,3,4,5};     //static memory allocation/compile time memory allocation
    for(int i=0;i<5;i++){
    printf("%d ",arr[i]);        //array transversal
    }*/

    //2D dynamic definition
    /*int arr[10][10]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",arr[i][j]); //array transversal
        }printf("\n");
    }*/

//operations in array based dsa

//DSA PROBLEMS ARRAYS
//I.searching algorithm(EASY)
//1.find min or max number in an array

// int findmin(int a[],int n)
// {
//     int temp,minimum=a[0];
//     for(int i=1;i<n;i++){
//         if(a[i]<minimum){
//             minimum=a[i];
//         }
//     }return minimum;
// }
// int findmax(int a[],int n)
// {
//     int temp,maximum=a[0];
//     for(int i=1;i<n;i++){
//         if(a[i]>maximum){
//             maximum=a[i];
//         }
//     }return maximum;
// }
// int main()
// {
//     int arr[10],total;
//     printf("Enter total elements of array ");
//     scanf("%d",&total);
//     printf("Enter elements of array ");
//     for(int i=0;i<total;i++)
//         scanf("%d",&arr[i]);
//     printf("smallest number= %d\nGreatest number= %d",findmin(arr,total),findmax(arr,total));
// }

//2.find last duplicate number in sorted array

// void findDup(int a[],int len)
// {
//     int lastInd=-1,lastDup=-1;
//     for(int i=len-1;i>=0;i--){
//         if(a[i]==a[i-1]){
//             lastInd=i;
//             lastDup=a[i];
//         if(lastDup!=-1){
//             printf("Last index= %d\nLast duplicate number= %d",lastInd,lastDup);
//             return;
//             }else{
//                 printf("No duplicate number is found");
//                 return ;
//             }
//         }
//     }
// }
// int main()
// {
//     int len;
//     int arr[]={1,4,4,3,3,7};
//     len=sizeof(arr)/sizeof(int);
//     findDup(arr,len);
//     return 0;
// }

// 3.least frequent element

// int freq(int a[],int n)
// {
//     int leastFreq;
//     int count;
//     int minCount=n+1;
//     for(int i=0;i<n;i++)
//     {
//         count=0;
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//             }
//         }if(minCount>count)
//         {
//             minCount=count;
//             leastFreq=a[i];
//         }
//     }return leastFreq;
// }
// int main()
// {
//     int arr[]={1,3,3,4,4,4};
//     int len=sizeof(arr)/sizeof(int);
//     int result=freq(arr,len);
//     printf("Least frequent element is=%d",result);
// }

//4.most frequent element

// int maxFreq(int a[],int n){
//     int maxCount=0;
//     int count,ans;
//     for(int i=0;i<n;i++){
//         count=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }if(maxCount<count){
//             maxCount=count;
//             ans=a[i];
//         }
//     }return ans;
// }
// int main()
// {
//     int arr[]={1,2,3,3};
//     int len=sizeof(arr)/sizeof(int);
//     printf("%d is most frequent element in array ",maxFreq(arr,len));
// }
        
//5.fixed point(value=index)

// int func(int a[],int n){
//     for(int i=0;i<n;i++){
//         if(a[i]==i){
//             printf("Index= %d\tNumber=%d",i,a[i]);
//         }
//     }
// } 
// int main()
// {
//     int arr[]={10,22,2,30};
//     int len=sizeof(arr)/sizeof(int);
//     func(arr,len);
// }

// 6.find element that appears once

// int func(int a[],int n){
//     int minCount=n+1;
//     int ans;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }if(minCount>count){
//             minCount=count;
//             ans=a[i];
//         }
//         if(minCount==1){
//             return ans;
//         }
//     }
// }
// int main()
// {
//     int arr[]={10,2,2,2,30,30};
//     int len=sizeof(arr)/sizeof(int);
//     printf("%d",func(arr,len));
// }
                
//7.find common elements in 3 array      //note the logic

// void com(int a1[],int a2[],int a3[],int n1,int n2,int n3){
//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2 && k<n3){
//         if(a1[i]==a2[j] && a2[j]==a3[k]){
//             printf("%d",a1[i]);
//             i++,j++,k++;
//         }else if(a1[i]<a2[j]){
//             i++;
//         }else if(a2[j]<a3[k]){
//             j++;
//         }else{
//             k++;
//         }
//     }
// }
// int main(){
//     int arr1[]={1,2,3};
//     int arr2[]={1,4,5};
//     int arr3[]={1,6,7};
//     int len1=sizeof(arr1)/sizeof(int);
//     int len2=sizeof(arr2)/sizeof(int);
//     int len3=sizeof(arr3)/sizeof(int);
//     printf("Common elemets to the three arrays are:\n");
//     com(arr1,arr2,arr3,len1,len2,len3);
// }

//8.check for majority element

// int isMajority(int a[],int n,int x){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             count++;
//         }
//     }if(count>n/2){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main()
// {
//     int arr[100],x,len;
//     printf("Enter length of array\n");
//     scanf("%d",&len);
//     printf("Enter elements of array\n");
//     for(int i=0;i<len;i++){
//         scanf("%d",&arr[i]);
//     }printf("Enter element x: ");
//     scanf("%d",&x);
//     int ans=isMajority(arr,len,x);
//     if(ans==1)
//     printf("%d is a majority element",x);
//     else
//     printf("%d is not a majority element",x);
// }

//9.find the missing number from first n natural no

// int isMissing(int a[],int n,int N){
//     int nsum=N*(N+1)/2;
//     int arrsum=0;
//     for(int i=0;i<n;i++){
//         arrsum+=a[i];
//     }
//     int no=nsum-arrsum;
//     return no;
// }
// int main()
// {
//     int arr[100],x,len;
//     printf("Enter length of array\n");
//     scanf("%d",&len);
//     printf("Enter elements of array\n");
//     for(int i=0;i<len;i++){
//         scanf("%d",&arr[i]);
//     }printf("Enter N: ");
//     scanf("%d",&x);
//     int ans=isMissing(arr,len,x);
//     printf("%d is missing",ans);
// }

//10.no occuring odd no of times

// int func(int a[],int n){
//     int ans;
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }
//         if(count%3==0){
//             return a[i];
//         }
//     }
// }
// int main()
// {
//     int arr[]={10,30,2,2,30,30};
//     int len=sizeof(arr)/sizeof(int);
//     printf("%d",func(arr,len));
// }

//11.find first repeating no

// void findFirstDup(int a[],int len)
// {
//     int firInd=-1,firDup=-1;
//     for(int i=0;i<=len;i++){
//         if(a[i]==a[i+1]){
//             firInd=i;
//             firDup=a[i];
//         if(firDup!=-1){
//             printf("first index= %d\nfirst repeating number= %d",firInd,firDup);
//             return;
//             }else{
//                 printf("No duplicate number is found");
//                 return ;
//             }
//         }
//     }
// }
// int main()
// {
//     int len;
//     int arr[]={1,4,4,3,3,7}; //ans=4
//     len=sizeof(arr)/sizeof(int);
//     findFirstDup(arr,len);
//     return 0;
// }

//12.lost element in second arrays

// #include <stdbool.h>
// int isMissing(int a[],int b[],int n,int m){
//     bool found;
//     for(int i=0;i<n;i++){
//         found=false;
//         for(int j=0;j<m;j++){
//             if(a[i]==b[j]){
//                 found=true;
//                 break;
//             }
//         }if(!found)
//         return a[i];
//     }return -1;
// }
// int main()
// {
//     int len1,len2;
//     int arr1[10]={1,2,3,4};
//     int arr2[10]={2,3,4};
//     len1=sizeof(arr1)/sizeof(int);
//     len2=sizeof(arr2)/sizeof(int);
//     int ans=isMissing(arr1,arr2,len1,len2);
//     if(ans==-1)
//     printf("No elements missing");
//     else
//     printf("%d is missing from second array",ans);
//}

//13.most frequent element in sorted array

// int mostFreq(int a[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==a[i+1]){
//             count++;
//         }
//     if(count>=n/2){
//        return a[i];
//     }}
//     return -1;
// }
// int main()
// {
//     int arr[]={1,2,2,2,3};
//     int len=sizeof(arr)/sizeof(int);
//     int ans=mostFreq(arr,len);
//     printf("%d ",ans);
// }

//14.longest consecutive sequence in array
// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for a node in the linked list
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Define the structure for the queue
// struct Queue {
//     struct Node *front, *rear;
// };

// // Function to create a new node with given data
// struct Node* newNode(int data) {
//     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// // Function to create a new queue
// struct Queue* createQueue() {
//     struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
//     q->front = q->rear = NULL;
//     return q;
// }

// // Function to add an element to the queue
// void enqueue(struct Queue* q, int data) {
//     // Create a new node
//     struct Node* temp = newNode(data);

//     // If queue is empty, then the new node is both the front and rear
//     if (q->rear == NULL) {
//         q->front = q->rear = temp;
//         return;
//     }

//     // Add the new node at the end of the queue and change rear
//     q->rear->next = temp;
//     q->rear = temp;
// }

// // Function to remove an element from the queue
// void dequeue(struct Queue* q) {
//     // If queue is empty, return NULL
//     if (q->front == NULL) {
//         printf("Queue is empty\n");
//         return;
//     }

//     // Store the previous front and move front one node ahead
//     struct Node* temp = q->front;
//     q->front = q->front->next;

//     // If front becomes NULL, then change rear to NULL
//     if (q->front == NULL) {
//         q->rear = NULL;
//     }

//     free(temp);
// }

// // Function to print the elements of the queue
// void printQueue(struct Queue* q) {
//     struct Node* temp = q->front;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Main function to test the queue implementation
// int main() {
//     struct Queue* q = createQueue();
//     enqueue(q, 10);
//     enqueue(q, 20);
//     enqueue(q, 30);
//     enqueue(q, 40);

//     printf("Queue elements: ");
//     printQueue(q);

//     printf("Dequeue element\n");
//     dequeue(q);
//     printf("Queue elements after dequeue: ");
//     printQueue(q);

//     printf("Dequeue element\n");
//     dequeue(q);
//     printf("Queue elements after dequeue: ");
//     printQueue(q);

//     return 0;
// }