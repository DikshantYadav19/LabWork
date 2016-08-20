#include <omp.h>

#include <stdio.h>

void main()

{

	int i,myval,tid;

	#pragma omp parallel for private(myval) schedule(dynamic,1) ordered	

	for(i=1; i<=10; i++)

	{
		myval = i+2;
		
		#pragma omp ordered
	
		tid = omp_get_thread_num();

		printf("%d %d %d\n",tid, i, myval);

	}
}
