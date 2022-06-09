#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int npes,myrank;
	int ary[ARYSIZE];
	int startIndex,stopIndex,partsize;

	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&npes);
	MPI_Comm_rank(MPI_COMM_WORLD,&myrank);
	partsize = ARYSIZE/npes;
	startIndex = myrank*partsize;
	stopIndex = ((myrank+1)*partsize)-1;
	printf("Hello from process %d out of %d processess range %d - %d \n",myrank,npes,startIndex,stopIndex);
	MPI_Finalize();
	return(0);
}
