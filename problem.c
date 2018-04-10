#include <stdio.h>
#include <malloc.h>
#include "pvm3.h"
#include "point.h"


void send_pb(int tid, pb_t *pb)
{
	int *tabX,*tabY;
	int counter = 0;
	pb_t *pb_local= pb_t;
	while(pb_local->next != NULL){
	  pb_local = pb_local-> next;
	  counter ++;
	}
	tabX = (int *) malloc(counter*sizeof(int));
	tabY = (int *) malloc(counter*sizeof(int));
	int i=0;
	
	while(pb->next != Null){
	 tabX[i] = pb->x;
	 tabY[i] = pb->y;
	 i++;
	}
	pb_free(pb);
}




