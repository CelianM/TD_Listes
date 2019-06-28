#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
	List* l = create_List(7,NULL);
	l = create_List(5,l);
	l = create_List(3,l);
	int len = List_len(l);
	printf("La liste est de longueur %d\n",len);
	printf("Liste : ");
	print_List(l);
	List* r_l = reverse_List(l);
	printf("Liste inversée : ");
	print_List(r_l);
	List* li = concatene_List(l,r_l);
	printf("Palindrome : ");
	print_List(li);
}
