#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
	List* l = create_List(7,NULL);
	l = create_List(5,l);
	l = create_List(3,l);
	int len = List_len(l);
	printf("La liste est de longueur %d\n",len);
	print_List(l);
}
