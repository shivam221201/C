#include <stdio.h>

void main(){
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("enter a[%d][%d]" ,i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("%d\t",arr[i][j]);
        }
    }
}