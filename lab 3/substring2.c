#include<stdio.h>
#include<string.h>

int main(){
    char String[1000];

    printf("Enter a String: ");
    gets(String);


    int initial_index,Substring_length;
    printf("Enter the initial index and length of the substring: \n");
    scanf("%d  %d",  &initial_index,  &Substring_length);

    char Substring[1000];
    for(int i = initial_index,j=0 ; i < (initial_index + Substring_length);  i++,j++){
         Substring[j]=String[i];
    }
    Substring[Substring_length]='\0';
    printf("Substring: %s, initial_index: %d,  Substring_length: %d",Substring, initial_index, Substring_length);
    return 0;
}
