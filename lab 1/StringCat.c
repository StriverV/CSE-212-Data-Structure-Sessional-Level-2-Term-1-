//2. Write a program to concatenate two strings.

#include<stdio.h>

char str1[100000],str2[100000];

int main(){

    printf("Enter two strings :  ");
    gets(str1);
    gets(str2);

    printf("str1 = %s and str2 = %s\n",str1,str2);
    printf("\n");

    int length_str1=strlen(str1);
    int length_str2=strlen(str2);

    int length=length_str1 + length_str2;


    for (int i=length_str1,j=0; i <length; i++,j++){
        str1[i]=str2[j];
    }
    str1[length] ='\0';

    printf("After concatenation,first string :  %s\n",str1);


    return 0;
}
