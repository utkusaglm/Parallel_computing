#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
int main(int argc, char *argv[]){
    struct timeval start,end;
    struct timeval start1,end1;
    int **mul,**a,**b;
    int row,col,i,j,k;
    row=atoi(argv[1]);
    col=atoi(argv[2]);
    
    
    mul = (int **)malloc(row*sizeof(int *));
    a= (int **)malloc(row*sizeof(int *));
    b= (int **)malloc(row*sizeof(int *));
    
    for(i=0;i<row;i++){
        mul[i]= (int *)malloc(col*sizeof(int));
        a[i]= (int *)malloc(col*sizeof(int));
        b[i]= (int *)malloc(col*sizeof(int));
        for(j=0;j<col;j++){
            a[i][j]=rand();
            b[i][j]=rand();
        }
    }

    gettimeofday(&start,NULL);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            mul[i][j]=0;
            for(k=0;k<col;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    gettimeofday(&end,NULL);
    printf("Traditional Method time: %3.4f\n",((end.tv_sec-start.tv_sec)*1000000+(end.tv_usec-start.tv_usec))/1000000.0);
    
    gettimeofday(&start1,NULL);
    
    for(i=0;i<row;i++){
        for(k=0;k<col;k++){
            mul[i][j]=0;
            for(j=0;j<col;j++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    gettimeofday(&end1,NULL);
    
    printf("Row-Major time: %3.4f\n",((end1.tv_sec-start1.tv_sec)*1000000+(end1.tv_usec-start1.tv_usec))/1000000.0);
    return (0);
}
