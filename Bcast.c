#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int npes,myrank;
	int message=333;
	int startIndex,stopIndex,partsize;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&npes);
	MPI_Comm_rank(MPI_COMM_WORLD,&myrank);
	if (myrank==0) message =9999;
	printf("Hello from process %d out of %d processess BEFORE  message %d \n",myrank,npes,message);
	MPI_Bcast(&message,1,MPI_INT,0,MPI_COMM_WORLD)
	printf("Hello from process %d out of %d processess AFTER  message %d \n",myrank,npes,message);
	MPI_Finalize();
	return(0);
}
