// #include<stdio.h>
// int main()
// {
//1.display reversed elements of array

//     int arr[10],temp=0;
//     printf("Enter the elements of array");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<=4;i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[9-i];
//         arr[9-i]=temp;
//     }
//     for(int i=0;i<10;i++)
//     {
//         printf("%d",arr[i]);
//     }
// }

//2.area of circle using const

    // float r;
    // printf("Enter radius\n");
    // scanf("%f",&r);
    // printf("Area of the circle: %.2f",pi*r*r);

//3.sum and product of array

    // int a[10],sum=0,pro=1;
    // printf("Enter elemnets of array\n");
    // for(int i=0;i<10;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    // for(int i=0;i<10;i++)
    // {
    //     sum=sum+a[i];
    //     pro=pro*a[i];
    // }
    // printf("%d is the sum and %d is the product of elements of array",sum,pro);

//4.Write a C program to read Title, Author and Price of 5 books using array of structures. 
//Display the records in ascending order of Price

// #include<stdio.h>
// //declaring structure
// struct book 
// {
//     char title[20];
//     char name[20];
//     int price;
// };
// //function declare
// void accept(struct book list[5]);
// void sort(struct book list[5]);
// void display(struct book list[5]);
// int main()
// {
//     struct book data[20];
//     //function call
//     accept(data);
//     sort(data);
//     display(data);  
// }
// //function definition
// void accept(struct book list[5])
// {
//     for(int i=0;i<5;i++)
//     {
//         printf("Enter title\n");
//         scanf("%s",&list[i].title);
//         printf("Enter name of Author\n");
//         scanf("%s",&list[i].name);
//         printf("Enter price\n");
//         scanf("%d",&list[i].price);
//     }
// }
// void sort(struct book list[5])
// {
//     struct book temp;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5-i;j++)         //note this step!!!!!!
//         {
//             if (list[j].price>list[j+1].price)
//             {
//                 temp=list[j];
//                 list[j]=list[j+1];
//                 list[j+1]=temp;
//             }
//         }
//     }
// }
// void display(struct book list[5])
// {
//     printf("Title\tAuthor\tPrice\n");
//     printf("--------------------\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("\n%s\t%s\t%d",list[i].title,list[i].name,list[i].price);
//     }
// }

//5.sum of two 3X3 matrix using funt

// #include<stdio.h>
// int i,j;
// void add(int a[10][10],int b[10][10]);
// int main()
// {
//     int a[10][10],b[10][10];
//     //accepting the elements
//     printf("Enter elements of first matrix\n");
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix\n");
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     add(a, b);   
// }
// void add(int a[10][10],int b[10][10])
// {
//     int sum[10][10];
//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 3; j++)
//         {
//             sum[i][j]=a[i][j]+b[i][j];
//             printf("%d\t",sum[i][j]);
//         }
//         printf("\n");
//     }
// }

//6.using switch make a simple calculator

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     char operator;
//     printf("Enter operator");
//     scanf("%c",&operator);
//     printf("Enter a= ");
//     scanf("%d",&a);
//     printf("Enter b= ");
//     scanf("%d",&b);
//
//     switch (operator)
//     {
//     case '+': printf("%d + %d =%d",a,b,a+b);
//         break;
//     case '-': printf("%d - %d =%d",a,b,a-b);
//         break;
//     case '*': printf("%d * %d =%d",a,b,a*b);
//         break;
//     case '/': printf("%d / %d =%d",a,b,a/b);
//         break;
//     default: printf("Enter appropriate character");
//         break;
//     }
// }

//7.Write a C program to store and display the name, 
//runs scored and wickets taken by a cricket player using structure

// #include<stdio.h>
// struct player
// {
//     char name[10];
//     int runs;
//     int wickets;
// }p1;
// int main()
// {
//     //storing data
//     printf("Enter name\n");
//     scanf("%s",&p1.name);
//     printf("Enter runs scored\n");
//     scanf("%d",&p1.runs);
//     printf("Enter wickets taken\n");
//     scanf("%d",&p1.wickets);
//     //displaying data
//     printf("Name: %s ,Runs scored: %d ,Wickets taken: %d",p1.name,p1.runs,p1.wickets);
// }

//8.Write a C program to exchange value of two variables

//#include<stdio.h>
//int main()
//{
    //method1
    // int a,b,temp;
    // printf("Enter a= ");
    // scanf("%d",&a);
    // printf("Enter b= ");
    // scanf("%d",&b);
    // temp=a;
    // a=b;
    // b=temp;
    // printf("Exchanged values are\na =%d ,b= %d",a,b);
//
    //method2
    // int a,b;
    // printf("Enter a= ");
    // scanf("%d",&a);
    // printf("Enter b= ");
    // scanf("%d",&b);
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // printf("Exchanged values are\na =%d ,b= %d",a,b);
//}

//9.1 to 7 for days

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter value from 1 to 7\n");
//     scanf("%d",&num);
//     switch (num)
//     {
//     case 1: printf("Sunday");
//         break;
//     case 2: printf("Monday");
//         break;
//    case 3: printf("Tuesday");
//         break;
//     case 4: printf("Wednesday");
//         break;
//     case 5: printf("Thursday");
//         break;
//     case 6: printf("Friday");
//         break;
//     case 7: printf("Saturday");
//         break;
//     default: printf("Enter value from 0 to 6");
//         break;
//     }
// }

//10.check pos,neg or zero

// #include<stdio.h>
// void check(int n)
// {
//     if (n>0)
//     {
//         printf("Entered number is positive");
//     }
//     else if (n<0){
//         printf("Entered number is negative");
//     }
//     else{
//         printf("Entered number is zero");
//     }
//
// }
// int main()
// {
//     int num;
//     printf("Enter any number");
//     scanf("%d",&num);
//     check(num);
// }

//11.reverse the digits

// #include<stdio.h>
// int main()
// {
//     int num,rem,rev=0;
//     printf("Enter number");
//     scanf("%d",&num);
//     while (num!=0)
//     {
//         rem=num%10;
//         rev=(rev*10)+rem;
//         num/=10;
//     }
//     printf("reversed number is: %d",rev);
// }

//12.symm matrix?

// #include<stdio.h>
// int check(int a[20][20]);    //funct declare
// int main()
// {
//     int n[20][20],result;
//     //accepting elements
//     printf("Enter elements of the matrix");
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&n[i][j]);
//         }
//     }
//     result=check(n);           //funct call
//     if (result==0)
//     {
//         printf("Matrix is not symmetric");
//     }else{
//         printf("Matrix is symmetric");
//     }
// }
//
// int check(int a[20][20])       //funct define
// {
//     int b[20][20],count=0;
//     //storing the values of a to b
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             b[j][i]=a[i][j];
//         }
//     }
//     //checking
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             if(b[i][j]==a[i][j])
//             {
//                 count++;
//             }
//         }
//     }
// }

//13.lcm of two numbers

// #include<stdio.h>
// int main()
// {
//     int n1,n2,lcm;
//     printf("Enter two numbers");
//     scanf("%d %d",&n1,&n2);
//     int i=n1;
//     while ((i%n2!=0))
//     {
//         i=i+n1;
//     }
//     printf(" \nLCM= %d",i);
// }
//second method
// int max,n1,n2,lcm;
//     printf("Enter two numbers");
//     scanf("%d %d",&n1,&n2);
//     max=(n2>n1)?n2:n1;
//     for(int i=2;i<=max;i++)
//     {
//         if(max%n1==0 && max%n2==0)
//         printf("%d is LCM",max);
//         break;
//     }

//14.funct basic

// #include<stdio.h>
// int add(int a,int b)
// {
//     return a+b;
// }
// int sub(int a,int b)
// {
//     return a-b;
// }
// int pro(int a,int b)
// {
//     return a*b;
// }
// int divi(int a,int b)
// {
//     return a/b;
// }
// int main()
// {
//     int no1,no2;
//     printf("Enter two numbers");
//     scanf("%d %d",&no1,&no2);
//     printf("%d + %d = %d\n",no1,no2,add(no1,no2));
//     printf("%d - %d = %d\n",no1,no2,sub(no1,no2));
//     printf("%d X %d = %d\n",no1,no2,pro(no1,no2));
//     printf("%d / %d = %d",no1,no2,divi(no1,no2));
//
// }

//15.cube of a number using funct

// #include<stdio.h>
// int cube(int a)
// {
//     return a*a*a;
// }
// int main()
// {
//     int num;
//     printf("Enter number\n");
//     scanf("%d",&num);
//     printf("Cube= %d",cube(num));
// }

//16.swap using pointers

// #include <stdio.h>
// int swap(int *p,int *q)
// {
//     int temp;
//     temp=*p;
//     *p=*q;
//     *q=temp;
// }
// int main()
// {
//     int n1,n2;
//     printf("Enter two numbers");
//     scanf("%d %d",&n1,&n2);
//     swap(&n1,&n2);
//     printf("The swapped numbers are %d,%d",n1,n2);
// }

//17.demonstrate strcmp()

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int result;
//     char a[20],b[20];
//     printf("Enter first string");
//     scanf("%s",a);
//     printf("Enter second string");
//     scanf("%s",b);
//     result=strcmp(a,b);
//     if (result==0)
//     {
//         printf("The strings are equal");
//     }else if(result>0)
//     {
//         printf("The first string is greater than the second");
//     }else{
//         printf("The second string is greater than the first");
//     }
// }

//18.pattern

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("A ");
//         }
//         printf("\n");
//     }
// }

//19.isEven funct n numbers check

// #include<stdio.h>
// int check(int a)
// {
//     if(a%2==0)
//     return 1;
//     else
//     return 0;
// }
// int main()
// {
//     int n,num,ans;
//     printf("Enter total numbers to check\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         printf("\nEnter number %d-\n",i);
//         scanf("%d",&num);
//         ans=check(num);
//         if (ans==1)
//         {
//             printf("%d is Even",num);
//         }else{
//             printf("%d is Odd",num);
//         }
//     }
//     return 0;
// }

//20.pattern

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

//21.table

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
// }

//22.percentage

// #include<stdio.h>
// int main()
// {
//     int per;
//     printf("Enter percentage ");
//     scanf("%d",&per);
//     if (per>=80 && per<=100)
//     {
//         printf("Grade A");
//     }else if (per>=60 && per<80)
//     {
//         printf("Grade B");
//     }else if (per>=50 && per<60)
//     {
//         printf("Grade C");
//     }else if (per>=40 && per<50)
//     {
//         printf("Grade D");
//     }else{
//         printf("Fail");
//     }

//23.matrix subtraction using function

// #include<stdio.h>
// void accept(int mat1[10][10], int mat2[10][10])
// {
//     printf("Enter elements of first matrix ");
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j =0; j < 3; j++)
//         {
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix ");
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j =0; j < 3; j++)
//         {
//             scanf("%d",&mat2[i][j]);
//         }
//     }
// }
// void mat_sub(int mat1[10][10], int mat2[10][10],int ans[10][10])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j =0; j < 3; j++)
//         {
//             ans[i][j]=mat1[i][j]-mat2[i][j];
//         }
//     }
// }
// void display(int ans[10][10])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j =0; j < 3; j++)
//         {
//             printf("%d\t",ans[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int a[10][10],b[10][10],c[10][10];
//     accept(a,b);
//     mat_sub(a,b,c);
//     display(c);
// }

//24.hotel data structure

// #include<stdio.h>
// struct hotel
// {
//     int room;
//     float mob;
//     float rating;
//     char name[20];
// }h1,h2,h3,h4;
//
// int main()
// {
//     struct hotel h[4];
//     for(int i=1;i<5;i++)
//     {
//         printf("Enter name of Hotel %d\n",i);
//         scanf("%s",&h[i].name);
//     }
//     for(int i=1;i<5;i++)
//     {
//         printf("for Hotel %s\n",h[i].name);
//         printf("no of rooms ");
//         scanf("%d",&h[i].room);
//         printf("ratings ");
//         scanf("%.2f",&h[i].rating);
//         printf("contact number ");
//         scanf("%.10f",&h[i].mob);
//     }
//     printf("Name\t\tNo of Rooms\tRatings\tMobile number\n");
//     printf("---------------------------------------------------");
//     for(int i=1;i<5;i++)
//     {
//         printf("%s\t\t%d\t%.2f\t%.10f\n",h[i].name,h[i].room,h[i].rating,h[i].mob);
//     }
// }

//25.a^b

// #include<stdio.h>
// int func(int a,int b)
// {
//     if(b!=0)
//     {
//         return a*func(a,(b-1));
//     }else{
//         return 1;
//     }
//
// }
// int main()
// {
//     int base,power,result;
//     printf("Enter base and power");
//     scanf("%d %d",&base,&power);
//     result=func(base,power);
//     printf("%d",result);
// }

//26.count blank spaces in string

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[20];
//     int len,count=0;
//     printf("Enter a sentence ");
//     fgets(a,20,stdin);
//     len=strlen(a);
//     for (int i = 0; i < len; i++)
//     {
//         if (a[i]==' ')
//         {
//             count++;
//         }
//     }printf("There are %d spaces",count);
// }

//27.pattern

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

//28.length of string using pointer

// #include<stdio.h>
// int str_len(char *a)
// {
//     int len=0;
//     while(*a!='\0')
//     {
//         len++;
//         a++;
//     }
//     return len;
// }
// int main()
// {
//     char sent[20];
//     int ans;
//     printf("Enter a sentence ");
//     scanf("%s",&sent);
//     ans=str_len(sent);
//     printf("The length of the string is %d",ans);
// }

//29.greatest of 3 nums

//#include<stdio.h>
// int funct(int num1,int num2,int num3)
// {
//     if (num1>num2 && num1>num3)
//     {
//         return num1;
//     }else if (num2>num1 && num2>num3)
//     {
//         return num2;
//     }else if (num3>num1 && num3>num2)
//     {
//         return num3;
//     }else if (num1==num2 && num1>num3)
//     {
//         return num1;
//     }else if (num1=num2 && num1<num3)
//     {
//         return num3;
//     }else if (num1==num3 && num1>num2)
//     {
//         return num1;
//     }else if (num1==num3 && num1<num2)
//     {
//         return num2;
//     }else if (num2==num3 && num1>num3)
//     {
//         return num1;
//     }else if (num2==num3 && num1<num3)
//     {
//         return num3;
//     }else{
//         return num1;
//     }
// }
// int main()
// {
//     int a,b,c,ans;
//     printf("Enter three numbers ");
//     scanf(" %d %d %d",&a,&b,&c);
//     ans=funct(a,b,c);
//     printf("The greatest of the three is %d",ans);
// }

//30.factorial

// #include <stdio.h>
// int fac(int n)
// {
//     if (n!=0)
//     {
//         return n*fac(n-1);
//     }else{
//         return 1;
//     }  
// }
// int main()
// {
//     int num;
//     printf("Enter a positive integer ");
//     scanf("%d",&num);
//     printf("The factorial of %d is %d",num,fac(num));
// }

//31.Sort marks using struct

// #include <stdio.h>
// struct stud
//     {
//         int marks;
//         char name[20];
//     };
// int main()
// {
//     struct stud list[20];
//     int n;
//     printf("Enter total number of students");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter name of student %d\n",i);
//         scanf("%s",&list[i].name);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         printf("Enter marks of %s\n",list[i].name);
//         scanf("%i",&list[i].marks);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//         if (list[j].marks>list[j+1].marks)
//         {
//             struct stud temp;
//             temp=list[j];
//             list[j]=list[j+1];
//             list[j+1]=temp;
//         }
//         }
//     }
//     printf("Name\tMarks\n");
//     printf("-----------------\n");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%s\t%d\n",list[i].name,list[i].marks);
//     }
// }

//32.check dates in month using switch

// #include<stdio.h>
// void check(int n)
// {
//     switch (n)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12: printf("31 Days");
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11: printf("30 Days");
//         break;
//     case 2: printf("28/29 Days");
//         break;
//     default: printf("Enter valid number");
//         break;
//     }
// }
// int main()
// {
//     int a;
//     printf("Enter month number ");
//     scanf("%d",&a);
//     check(a);
//     return 0;
// }

//33.check if character is number,alphabet or sp char

// #include<stdio.h>
// int main()
// {
//     char a;
//     printf("Enter a character ");
//     scanf("%c",&a);
//     if (a>=65 && a<=91)
//     {
//         printf("%c is a Capital letter",a);
//     }else if (a>=97 && a<=122)
//     {
//         printf("%c is a small letter",a);
//     }else if (a>=48 && a<=57)
//     {
//         printf("%c is a Number",a);
//     }else{
//         printf("%c is a special character",a);
//     }
// }

//34.print numbs divisible by 2,3,5

// #include<stdio.h>
// int main()
// {
//     int count2=0,count3=0,count5=0;
//     printf("Numbers not divisible by 2:\n");
//     for (int i = 1; i < 51; i++)
//     {
//         if (i%2!=0)
//         {
//             printf("%d, ",i);
//             count2++;
//         }
//     }printf("Total numbers not divisible by 2= %d\n",count2);
//     printf("\nNumbers not divisible by 3:\n");
//     for (int i = 1; i < 51; i++)
//     {
//         if (i%3!=0)
//         {
//             printf("%d, ",i);
//             count3++;
//         }
//     }printf("Total numbers not divisible by 3= %d\n",count3);
//     printf("\nNumbers not divisible by 5:\n");
//     for (int i = 1; i < 51; i++)
//     {
//         if (i%5!=0)
//         {
//             printf("%d, ",i);
//             count5++;
//         }
//     }printf("Total numbers not divisible by 5= %d\n",count5);
// }

//35.pattern

// #include<stdio.h>
// int main()
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             printf("*");
//         }printf("\n");
//     }
// }

//36.pallindrome

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[20];
//     int n,c=0;
//     printf("Enter a string ");
//     scanf("%s",&a);
//     n=strlen(a);
//     for (int i = 0; i < (n/2); i++)
//     {
//         if (a[i]!=a[n-1-i])
//         {
//             c=1;
//             break;
//         }
//     }
//     if (c==0)
//     {
//         printf("The string is pallindrome");
//     }else{
//         printf("The string is not pallindrome");
//     }
// }

//37.check +,-,0 using switch

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number");
//     scanf("%d",&num);
//     switch(num>0)              //returns 1for true and vice versa
//     {
//         case 1: printf("Entered number is positive");
//         break;
//         case 0:
//         switch(num==0)
//         {
//             case 1: printf("Entered number is zero");
//             break;
//             case 0: printf("Entered number is negative");
//             break;
//         }
//     }
// }

//38.check elements present in array

// #include<stdio.h>
// int main()
// {
//     int num,total;
//     char a[20];
//     printf("Enter total elements in array");
//     scanf("%d",&total);
//     for(int i=0;i<total;i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter a number ");
//     scanf("%d",&num);
//     int i=0;
//     while(i<10)
//     {
//         if(a[i]==num)
//         {
//             printf("The number is present in array");
//             break;
//         }else{
//             i++;
//         }
//     }
// }

//39.prime or not

// int num;
//     for(num=1;num<=100;num++)
//     {
//         int count=0;
//         for(int i=2;i<=num/2;i++)
//         {
//             if(num%i==0)
//         {    count++;
//              break;
//         }    
//         }
//     if(count==0 && num!=1)
//     {
//         printf("%d ",num);  
//     }
//     }
//check where string is pallindrome using inbuilt function
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[100],s2[100];
//     printf("Enter string");
//     scanf("%s",s1);
//     strcpy(s2,s1);
//     strrev(s2);
//     if(strcmp(s2,s1)==0)
//     {
//         printf("pallindrome");
//     }else
//     printf("Not pallindrome");  
// }
    
//40.check if string is pallindrome or not without using inbuilt function

// int main()      //without using inbuilt funcion
// {
//     char s1[100];
//     int i,count=0;
//      printf("Enter string");
//     scanf("%s",s1);  
//     int n=strlen(s1);
//     for(i=0;i<n/2;i++)
//     {
//         if(s1[i]==s1[n-i-1])
//         {
//             count++;
//         }else 
//         return 0;  
//     }
//     if(count==0)
//     printf("Not pallindrome");
//     else
//     printf("pallindrome");
// }
//     sort elements in array
// int main()
// {
//     int arr[20],n,temp;
//     printf("Enter total elemets ");
//     scanf("%d",&n);
//     printf("Enter elements");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//         if(arr[i]>arr[j])
//         {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }  
// }

//41.lcm and gcd using recursion

// int gcd(int n1,int n2)
// {
//     if(n2!=0)
//     return gcd(n2,n1%n2);
//     else
//     return n1;
// }
// int main()
// {
//     int a,b;
//     printf("Enter two positive integers");
//     scanf("%d %d",&a,&b);
//     printf("GCD of %d and %d is %d",a,b,gcd(a,b));
// }
// int lcm(int n1,int n2)
// {
//      static int l=1;
//     if(l%n1==0 && l%n2==0)
//     {
//         return l;
//     }else
//     {
//         l++;
//         lcm(n1,n2);
//         return l;
//     }
// }
// int main()
// {
//     int a,b;
//     printf("Enter two positive integers");
//     scanf("%d %d",&a,&b);
//     printf("LCM of %d and %d is %d",a,b,lcm(a,b));
// }

//42.stucture for student info

//     struct student
//     {
//         int rn;
//         int marks;
//         char name[20];
//     };
//     struct student temp;
//     struct student total[10];
//     for(int i=0;i<10;i++)
//     {
//         printf("Enter roll no");
//         scanf("%d",&total[i].rn);
//         printf("Enter marks");
//         scanf("%d",&total[i].marks);
//         printf("Enter name");
//         fgets(total[i].name,20,stdin);
//     }
//     for(int i=0;i<10;i++)
//     {
//         for(int j=i+1;j<10;j++)
//     {
//         if(total[i].marks>total[j].marks)
//         {
//             temp=total[i];
//             total[i]=total[j];
//             total[j]=temp;
//         }
//     }
//     }printf("Roll no\tmarks\tname\n");
//     printf("---------------------------------------\n");
//     for(int i=0;i<10;i++)
//     {
//         printf("%d\t%d\t%s\n",total[i].rn,total[i].marks,total[i].name);
//     }  

//ARRAY
//43.sorting array

// #include<stdio.h>
// int main()
// {
//     int total;
//     int a[20];
//     int temp,j;
//     printf("Enter total elements in array");
//     scanf("%d",&total);
//     for(int i=0;i<total;i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<total;i++)
//     {
//         for(int step=0;step<step-j;step++)
//     {    for(j=0;j<total;j++)
//     {
//         if(a[i]>a[i+1])
//         {
//             temp=a[i];
//             a[i]=a[i+1];
//             a[i+1]=temp;
//         }
//     }
//     }
//     }
//     for(int i=0;i<total;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
//fibonacci
//     int f1,f2,f3=0,limit;
//     printf("Enter maximum number");
//     scanf("%d",&limit);
//     f1=0;
//     f2=1;
//     printf("%d %d ",f1,f2);
//     f3=f1+f2;
//     for (int i = 0; i < limit-2; i++)
//     {
//         printf("%d ",f3);
//         f1=f2;
//         f2=f3;
//         f3=f1+f2;
//     }

//44.to insert any element at any position in an array

// void insertElement(int arr[],int total,int pos, int value){
//     //shifting elements to the right
//     for(int i=total-1;i>=pos;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=value;
// }
// void printarr(int arr[],int total){
//     for(int i=0;i<total+1;i++){
//         printf("%d ",arr[i]);
//     }
// }
// int main()
// {
//         //  a[0] 1 2 3 4 (insert element after second index)
//   //int a[10]={1,2,3,5,6}; 
//     int a[10],total,value,pos;
//     printf("Enter total elements of array");
//     scanf("%d",&total);
//     printf("Enter elements of array\n");
//     for(int i=0;i<total;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the element to insert");
//     scanf("%d",&value);
//     printf("Enter the position(index) of inserted element");
//     scanf("%d",&pos);
//     insertElement(a,total,pos,value);
//     printarr(a,total);
//     return 0;
// } 

//45.delete any element in array

// int findElement(int a[],int total,int value)
// {
//     for(int i=0;i<total;i++){
//         if(a[i]==value){
//             return i;     //found index
//         }
//     }return -1;
// }
// int deleteElement(int a[],int total,int value)
// {
//     int ans=findElement(a,total,value);
//     if(ans==-1){
//     printf("Element is not present in array ");
//     return total;
//     }else{
//         for(int i=ans;i<total-1;i++){
//             a[i]=a[i+1];
//         }return total-1;
//     }
// }
// int main()
// {
//     int arr[10],total,val;
//     printf("Enter total elements of array ");
//     scanf("%d",&total);
//     printf("Enter the elements of array ");
//     for(int i=0;i<total;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter value to delete ");
//     scanf("%d",&val);
//     //to find index of 'val'
//     int resultSize=deleteElement(arr,total,val);
//     printf("Resultant array is ;\n");
//     for(int i=0;i<resultSize;i++){
//         printf("%d ",arr[i]);
//     }
// }

//46.to find any element in array

// int find(int a[],int total,int find)
// {
//     for(int i=0;i<total;i++){
//         if(a[i]==find)
//         return 1;         //note this step
//     }return 0;
// }
// int main()
// {
//     int arr[10],no,tot;
//     printf("Enter total elements of array ");
//     scanf("%d ",&tot);
//     for(int i=0;i<tot;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter element to find ");
//     scanf("%d",&no);
//     int ans=find(arr,tot,no);
//     if(ans==1)
//     printf("Enter number is present in array");
//     else
//     printf("Enter number is not present in array");
// }

//47.Linear search

// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE];
// void accept(int total){
//     printf("Enter elements of array\n");
//     for(int i=0;i<total;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void sort(int total){
//     int temp;
//     for(int i=0;i<total;i++){
//         for(int j=1+1;j<total;j++){
//              if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;     
//             }
//         }
//     }
// }
// int find(int x,int total){
//     for(int i=0;i<total;i++){
//         if(arr[i]==x){
//             return 1;
//             break;
//         }
//     }return -1;
// }
// int main(){
//     int n,x,result;
//     printf("Enter size of the Array:\n");
//     scanf("%d",&n);
//     accept(n);
//     sort(n);
//     printf("Enter element to find ");
//     scanf("%d",&x);
//     result=find(x,n);
//     if(result==1)
//     printf("Element found");
//     else
//     printf("Element not found");
// }

//48.Binary search

// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE];
//
// void accept(int total){
//     printf("Enter elements of array\n");
//     for(int i=0;i<total;i++){
//         scanf("%d",&arr[i]);
//     }
// }
// void sort(int total){
//     int temp;
//     for(int i=0;i<total;i++){
//         for(int j=i+1;j<total;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
// int find(int key,int total){
//     int lower=0;
//     int upper=total-1;
//     int mid;
//     while(mid!=0){
//         mid=(lower+upper)/2;
//         if(arr[mid]==key){
//             return 1;
//             break;
//         }else if(arr[mid]>key){
//             upper=mid-1;
//         }else{
//             lower=mid+1;
//         }
//     }return -1;
// }
// int main(){
//     int n,x,result;
//     printf("Enter total elements of array\n");
//     scanf("%d",&n);
//     accept(n);
//     sort(n);
//     printf("Enter element to find: ");
//     scanf("%d",&x);
//     result=find(x,n);
//     if(result==1)
//     printf("Element found");
//     else
//     printf("Element not found");
// }

//49.stone paper scissors

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//     int user,comp;
//     printf("Welcome!\nEnter 1 for stone\tEnter 2 for paper\tEnter 3 for scissors\n");
//     scanf("%d",&user);
//     srand(time(NULL));
//     comp=rand()%(3-1+1)+1;
//     if(comp==1 && user==2 || comp==3 && user==1 || comp==2 && user==3)
//     {
//         printf("You chose %d and computer chose %d\nYou WIN!",user,comp);
//     }else if(comp==2 && user==1 || comp==1 && user==3 || comp==3 && user==2)
//     {
//         printf("You chose %d and computer chose %d\nYou LOSE!",user,comp);
//     }else{
//         printf("You chose %d and computer chose %d\nTIE!",user,comp);
//     }
// }

//50.String compare

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int result;
//     char first_string[10]="paapa";
//     char second_string[10]="mama";
//     result=strcmp(first_string,second_string);
//     if(result>0)
//     printf("first string is bigger");
//     else if(result<0)
//     printf("second string is bigger");
//     else
//     printf("same size");
// }

//51.Add an element to end a full/partially array

// #include<stdio.h>
// #define SIZE 5
// int arr[SIZE];
// int add(int a[],int b[],int freePos,int n){
//     int data;
//     for(int i=0;i<n;i++){
//         b[i]=a[i];
//     }
//     printf("Enter element to add\n");
//     scanf("%d",&data);
//     b[freePos]=data;
//     freePos++;
//     return freePos;
// }
// int main(){
//     int n;
//     int freePos;
//     printf("Enter total no of elements of array ");
//     scanf("%d",&n);
//     freePos=n;
//     printf("Enter elements\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }if(n>=SIZE){
//         int b[SIZE+1];
//         freePos=add(arr,b,freePos,n);
//         for(int i=0;i<freePos;i++){
//             printf("%d ",b[i]);
//         }
//     }else if(n<SIZE){
//         for(int i=0;i<n;i++){
//             printf("%d ",arr[i]);
//         }
//     }
// }

//52.Add element to start of a full array/Partially full 
//(When array is full: O(n)/ partially full=O(n))

// #include<stdio.h>
// #define MAX 5
// int arr[MAX];
// int add_to_start1(int a[],int b[],int n){
//     int data;
//     for(int i=0;i<n+1;i++){
//         b[i+1]=a[i];
//     }
//     printf("Enter element to add\n");
//     scanf("%d",&data);
//     b[0]=data;
//     return n+1;
// }
// void add_to_start2(int arr[],int n){
//     int data;
//     for(int i=n-1;i>=0;i--){
//         arr[i+1]=arr[i];
//     }
//     printf("Enter element to add\n");
//     scanf("%d",&data);
//     arr[0]=data;
// }
// int main(){
//     int n;
//     printf("Enter total no of elements of array\n");
//     scanf("%d",&n);
//     printf("Enter elements\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     if(n>=MAX){
//         int arr2[MAX+1];
//         int newN=add_to_start1(arr,arr2,n);
//         for(int i=0;i<newN;i++){
//             printf("%d ",arr2[i]);
//         }
//     }else if(n<MAX){
//         add_to_start2(arr,n);
//         for(int i=0;i<n+1;i++){
//             printf("%d ",arr[i]);
//         }
//     }
// }

//53.insert any element at any position in array

// #include<stdio.h>
// #include<stdlib.h>
// void add_at_pos(int arr[],int arr2[],int pos,int val,int n){
//     int index=pos-1;         //index=4
//     for(int i=0;i<index;i++){
//         arr2[i]=arr[i];
//     }
//     arr2[index]=val;
//     for(int i=index;i<n;i++){
//         for(int j=i+1;j<n+1;j++){
//             arr2[j]=arr[i];
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size=sizeof(arr)/sizeof(int);
//     int val=100;
//     int pos=5;
//     int arr2[size+1];
//     add_at_pos(arr,arr2,pos,val,size);
//     for(int i=0;i<size+1;i++){
//         printf("%d ",arr2[i]);
//     }
// }

//54.deleting first element of array

// #include<stdio.h>
// int delete_last(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         a[i]=a[i+1];
//     }return n-1;
// }
// int main(){
//     int arr[]={21,43,5,67,3,8,90};
//     int size=sizeof(arr)/sizeof(int);
//     size=delete_last(arr,size);
//     for(int i=0;i<size; i++){
//         printf("%d ",arr[i]);
//     }
// }

//55.deleting element at any position

// #include<stdio.h>
// int remove_at_pos(int a[],int b[],int n,int pos){
//     int index=pos-1;
//     for(int i=0;i<index;i++){
//         b[i]=a[i];
//     }for(int i=index+1;i<n;i++){
//         b[i-1]=a[i];
//     }
//     return n-1;
// }
// int main(){
//     int arr[10],size,delete_pos;
//     printf("Enter no of elements");
//     scanf("%d",&size);
//     printf("Enter elements of array\n");
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter position to remove element from\n");
//     scanf("%d",&delete_pos);                 //index=pos-1=2
//     int arr2[size-1];
//     size=remove_at_pos(arr,arr2,size,delete_pos);
//     for(int i=0;i<size;i++){
//         printf("%d ",arr2[i]);
//     }
// }

//56.sum of multiples of 3 and 5
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%3==0 || i%5==0)
        sum+=i;
    }
    printf("%d",sum);
}
