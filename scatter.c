#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
define ARYSIZE 100
pid printdata(int myrank,int *data, int datalen){
	printf("Process %d data[%d]=%d\n",myrank,i,data[i]);
}

int main(int argc,char *argv[]){
	int npes,myrank;
	int ary[ARYSIZE];
	int *rcvbuffer;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&npes);
	MPI_Comm_rank(MPI_COMM_WORLD,&myrank);
	for(int i=0;i<ARYSIZE;i++) ary[i]=1;
	rcvbuffer=malloc(sizeof(int)*(int)(ARYSIZE/npes));
	MPI_Scatter(&ary,(int)(ARYSIZE/npes),MPI_INT,rcvbuffer,(int)(ARYSIZE/npes),MPI_INT,0,MPI_COMM_WORLD);
	printdata(myrank,rcvbuffer,(int)(ARYSIZE/npes));
	MPI_Finalize();
	free(rcvbuffer)
	return(0);
}
