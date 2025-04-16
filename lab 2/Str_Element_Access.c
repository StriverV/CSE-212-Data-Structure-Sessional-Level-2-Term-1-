#include<stdio.h>

int main(){
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    int index;
    printf("Enter index to access an element of the string: ");
    scanf("%d",&index);


    char string_Element;
    for(int i=0;i <= index;i++){
        string_Element = str[index];
    }

    printf("The element at index %d is '%c' \n",index,string_Element);

    return 0;
}
