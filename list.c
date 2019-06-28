#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List* create_List(int v, List* suivant){
	List* res = malloc(sizeof(List));
	res -> value = v;
	res -> next = suivant;
	return res;
	}

int List_len(List* l){
	if(l -> next == NULL){
		return 1;
	}
	else{
		return 1 + List_len(l -> next);
	}
}

void print_List(List* l){
	if(l -> next == NULL){
		printf("%d\n",l -> value);
	}
	else{
		printf("%d;",l -> value);
		print_List(l -> next);
	}
}
