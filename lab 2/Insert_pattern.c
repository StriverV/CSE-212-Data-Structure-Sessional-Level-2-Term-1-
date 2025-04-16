#include<stdio.h>

int main(){
    char text[1000],pattern[100];
    printf("Enter the text: ");
    gets(text);
    printf("Enter the pattern: ");
    gets(pattern);

    int position;
    printf("Enter the position to insert the pattern: ");
    scanf("%d",&position);


    int text_length = strlen(text);
    int pattern_length = strlen(pattern);

    for(int i=text_length; i >= position;i--){
        text[i+pattern_length] = text[i];
        text_length++;
    }

    for(int i=0; i < pattern_length; i++){
         text[position + i] = pattern[i];
    }


    printf("After inserting,the text is: %s\n",text);

    return 0;
}
