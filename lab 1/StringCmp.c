//1. Write a program to compare two strings and determine if they are the same or not.

#include<stdio.h>

int main(){

   char a[100],b[100];
   printf("Enter two strings :  ");
   scanf("%s %s",a,b);

   int i=0;
   while(1){

    if(a[i]=='\0' && b[i]=='\0'){
            printf("Same\n");
            break;
    }

    else if(a[i]=='\0' || b[i]=='\0'){
            printf("Not Same\n");
            break;
    }
    else if(a[i] != b[i]){
            printf("Not Same\n");
            break;
    }
    i++;

    }


    return 0;
}
