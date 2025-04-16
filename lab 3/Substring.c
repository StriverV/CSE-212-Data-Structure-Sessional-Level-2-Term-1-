#include<stdio.h>
#include<string.h>

int main(){
    char String[1000];

    printf("Enter a String: ");
    gets(String);


    int initial_index,Substring_length;
    printf("Enter the initial index and length of the substring: \n");
    scanf("%d  %d",  &initial_index,  &Substring_length);


    for(int i = initial_index;  i < (initial_index + Substring_length);  i++){
         printf("%c",String[i]);
    }

    return 0;
}
