#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    //square ****

    // int n=4;                                     **** 
    // int i,j;                                     **** 
    // for(i=1;i<=n;i++){                           **** 
    //     for(j=1;j<=n;j++){                       **** 
    //         printf("%c",j+64);
    //     }printf("\n");
    // }

    //square ABCD

    // int n=4;                                     ABCD 
    // int i,j;                                     ABCD 
    // for(i=1;i<=n;i++){                           ABCD 
    //     for(j=1;j<=n;j++){                       ABCD 
    //         printf("%c",j+64);
    //     }printf("\n");
    // }

    //right angled left side triangle

    // int n=4;
    // int i,j;                                        * 
    // for(i=1;i<=n;i++){                              **
    //     for(j=1;j<=i;j++){                          ***
    //         printf("*");                            ****
    //     }printf("\n");
    // } 

    //right angled triangle (1 23 456 78910)

    // int n=5,i,j,p=1;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         printf("%d",p);
    //         p++;
    //     }printf("\n");
    // }

    //right angled right side triangle(* pattern)

    // int n=4;
    // int i,j,space;                               //   *
    // for(i=1;i<=n;i++){                           //  **
    //     for(space=i;space<n;space++){            // ***
    //         printf(" ");                         //**** 
    //     }for(j=i;j>=1;j--){
    //         printf("*");
    //     }printf("\n");
    // }

    //right angled right side triangle(alphabet pattern)

    // int n=4;
    // int i,j,space; 
    // char currentChar='A';                        //   A
    // for(i=1;i<=n;i++){                           //  BC
    //     for(space=i;space<n;space++){            // CEF
    //         printf(" ");                         //GHIJ 
    //     }for(j=i;j>=1;j--){
    //         printf("%c",currentChar);
    //         currentChar++;
    //     }printf("\n");
    // }

    //inverted right angled triangle right side(* triangle)

    // int i,j,space;                              //**** 
    // int n=4;                                    // ***
    // for(i=1;i<=n;i++){                          //  **
    //     for(j=i;j<=n;j++){                      //   *
    //         printf("*");
    //     }
    //     printf("\n");
    //     for(space=i;space>=1;space--){
    //         printf(" ");
    //     }
    // }

    //inverted right angled triangle right side(* triangle)
    
    // for(int i=1;i<=4;i++){                       //****
    //     for(int j=4;j>=i;j--){                   //***
    //         printf("*");                         //**
    //     }printf("\n");                           //*
    // }

    //Equilateral triangle(*pattern)

    // int i,j,spaces,k=1;
    // for(i=1;i<=4;i++){                           //      *
    //     for(spaces=i;spaces<4;spaces++){         //     ***
    //         printf(" ");                         //    *****
    //     }for(j=k;j>=1;j--){                      //   *******
    //         printf("*");
    //     }printf("\n");
    //     k+=2;
    // }

    //1.eq triangle(A BCD EFGHI...)
  
    // int i,j,spaces,k=1;
    // char currentChar='A';
    // for(i=1;i<=4;i++){
    //     for(spaces=i;spaces<4;spaces++){
    //         printf(" ");
    //     }for(j=k;j>=1;j--){
    //         printf("%c",currentChar);
    //         currentChar++;
    //     }printf("\n");
    //     k+=2;
    // }

    //2.eq triangle(A CBA EDCBA)

    // int i,j,spaces,k=1;                   //     A
    // for(i=1;i<=4;i++){                    //    CBA
    //     for(spaces=i;spaces<4;spaces++){  //   EDCBA
    //         printf(" ");                  //  GFEDCBA
    //     }for(j=k;j>=1;j--){
    //         printf("%c",j+64);
    //     }printf("\n");
    //     k+=2;
    // }

    //3.eq triangle(A ABC ABCDE)
 
    // int i,j,spaces,k=1;
    // int n=4;
    // for(i=1;i<=n;i++){
    //     for(spaces=n-1;spaces>=i;spaces--){
    //         printf(" ");
    //     }for(j=1;j<=k;j++){
    //         printf("%c",j+64);
    //     }printf("\n");
    //     k+=2;
    // }

    //4.eq triangle(1 123 12345....)

    // int i,j,spaces,k=1;
    // int n=4;
    // for(i=1;i<=n;i++){
    //     for(spaces=n-1;spaces>=i;spaces--){
    //         printf(" ");
    //     }for(j=1;j<=k;j++){
    //         printf("%d",j);
    //     }printf("\n");
    //     k+=2;
    // }

    //5.eq triangle(0 101 21012....)

    // int i,j,spaces,k=1;
    // int n=4;
    // for(i=1;i<=n;i++){
    //     for(spaces=n-1;spaces>=i;spaces--){
    //         printf(" ");
    //     }for(j=1;j<=k;j++){
    //         printf("%d",abs(j-i));
    //     }printf("\n");
    //     k+=2;
    // }

    //inverted equilateral triangle(* pattern)

    // int i,j,spaces,k=1,n=4;
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=2*i-1;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    //     for(spaces=k;spaces>=1;spaces--){
    //         printf(" ");
    //     }
    //     k++;
    // }

    //inverted triangle(AAAA BBB CC D)

    // int i,j,spaces,k=1,n=5;
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=2*i-1;j++){
    //         printf("%c",k+64);
    //     }
    //     printf("\n");
    //     for(spaces=k;spaces>=1;spaces--){
    //         printf(" ");
    //     }
    //     k++;
    // }

    //
    
}