#include<stdio.h>

int main(){
    char text[1000],pattern[100];
    printf("Enter the text: ");
    gets(text);

    int position,length_dlt;
    printf("Enter the position and length to delete the substring:\n");
    scanf("%d  %d",&position,&length_dlt);



    int text_length = strlen(text);


    for(int i=position; i <= (text_length - length_dlt) ;i++){
        text[i] = text[i + length_dlt];

    }


    printf("After deleting,the text is: %s\n",text);

    return 0;
}
