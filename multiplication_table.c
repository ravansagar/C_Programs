#include<stdio.h>
int main(){
    int i,j,m=1,mult[21][11];
    for(i=1;i<11;i++){
        for(j=1;j<21;j++){
            m = i*j;
            mult[i][j] = m;
        }
    }
    for(i=1;i<11;i++){
        for(j=1;j<21;j++){
            if(mult[i][j]<10)
                printf("%d  ",mult[i][j]);
            else
                printf("%d ",mult[i][j]);
        }
    printf("\n");
    }
    return 0;
}
