#include<stdio.h>
void sort(int arr[],int size){

    for(int i=0; i<size - 1; i++){
        for(int j=0; j<size - 1; j++){

            if(arr[j] > arr[j + 1]){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}
void displayArr(int arr[],int size){

    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int arr[]={1,2,3,4,56,6,99};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort (arr,size);

    displayArr(arr,size);

    return 0;
}

