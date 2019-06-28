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
	return 1 + List_len(l -> next);
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

List* reverse_List(List* l){
	if(l -> next == NULL){
		return l;
	}
	List* r_l = create_List(l -> value,NULL);
	List* suiv = l ;
	int len = List_len(suiv) - 1;
	for(int i = 0; i < len; i++){
		suiv = suiv -> next;
		r_l = create_List(suiv -> value, r_l);
	}
	return r_l;
}

List* concatene_List(List* head, List* tail){
