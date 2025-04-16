#include <stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    scanf("%s",&a);
    scanf("%s",&b);

    int lenA =strlen(a);
    int lenB =strlen(b);

    int tempA=0,tempB=0;

    for(int i=0; i<=lenA; i++){
        tempA +=a[i];
    }

    for(int i=0; i<=lenB; i++){
        tempB +=b[i];
    }

    if(lenA == lenB){
        if(tempA == tempB){
            printf("True\n");
        }else{
        printf("False\n");
        }

    }else{
        printf("False\n");
    }

    return 0;

}
