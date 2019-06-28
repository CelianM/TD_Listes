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
	if(l == NULL){
		return 0;
	}
	return 1 + List_len(l -> next);
}

void print_List(List* l){
	if(l == NULL){
		printf("\n");
	}
	else{
		printf("%d;",l -> value);
		print_List(l -> next);
	}
}

List* reverse_List(List* l){
	if(l == NULL){
		return NULL;
	}
	List* r_l = create_List(l -> value,NULL);
	int len = List_len(l);
	for(int i = 1; i < len; i++){
		l = l -> next;
		r_l = create_List(l -> value, r_l);
	}
	return r_l;
}

List* concatene_List(List* head, List* tail){
	List* r_head = reverse_List(head);
	List* concat = tail;
	while(r_head != NULL){
		concat = create_List(r_head -> value, concat);
		r_head = r_head -> next;
	}
	return concat;
}
