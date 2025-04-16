#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int Row,Column,x;
    scanf("%d",&x);
    scanf("%d %d",&Row,&Column);

    int Matrix[Row][Column];

    for(int i=0; i < Row; i++){

            for(int j=0; j < Column; j++){
                scanf("%d",&Matrix[i][j]);
            }
    }

    if(Row != Column){
        printf("NO\n");
    }

    int count =0;

    if(Row == Column){
    for(int i=0; i < Row; i++){

        for(int j=0; j < Column; j++){
           if (i == j ){
                if(Matrix[i][j]==1 ){
                    count =0;
                }else{
                    count ++;
                }
           }
           if ( i + j == Row -1){
                if(Matrix[i][j]==1 ){
                    count =0;
                }else{
                    count ++;
                }
           }

           }else{
              Matrix[i][j]=0;
              count =0;
           }
        }

    }

    }
   }
    if(count =0)  {
         printf("YES\n");
    }



    return 0;
}
