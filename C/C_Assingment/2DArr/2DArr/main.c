//
//  main.c
//  2DArr
//
//  Created by aBoelghet  on 26/07/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[100][100]={0};
    int row,colum,i,j;
    int rowMax = 0;

    printf("Enter array row numbers \n");
    scanf("%d",&row);
    printf("Enter array colum numbers \n");
    scanf("%d",&colum);

    for( i = 0; i < row; i++){
        for(j = 0 ;j<colum ;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);

        }
    }
    for( i = 0; i < row; i++){
        printf("\n");
        for(j = 0 ;j<colum ;j++){
            printf("%d \t",arr[i][j]);

        }
    }
    for( i = 0; i < row; i++){
        int rowSum = 0;
        for(j = 0 ;j<colum ;j++){
            rowSum += arr[i][j];
        }
        if(rowMax < rowSum){
            rowMax = rowSum;
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rowSum);

    }
    printf("\nMax sum of elements in row is %d\n",rowMax);

    for( i = 0; i < row; i++){
        int coSum = 0;
        for(j = 0 ;j<colum ;j++){
            coSum += arr[j][i];
        }
        printf("\nColume average of all the elements in colum %d is %f\n",j,coSum/(float)colum);
        printf("\nSum of all the elements in colum %d is %d\n",j,coSum);

    }

    return 0;
}
//#include<stdio.h>
//
//int main(int argc, const char * argv[])
//{
//    int arr[100][100];
//    int row,colum,i,j;
//    int rowMax = 0;
//
//    printf("Enter array row numbers \n");
//    scanf("%d",&row);
//    printf("Enter array colum numbers \n");
//    scanf("%d",&colum);
//
//
//    char words[4][5] = {"word", "bird", "lost", "grid"};
//    for(int i=0; i<4; i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            printf("%c", words[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
