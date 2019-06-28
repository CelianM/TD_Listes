#pragma once

typedef struct _List{
	int value;
	struct _List* next;
	}List;

List* create_List(int v, List* suivant);
int List_len(List* l);
void print_List(List* l);
List* reverse_List(List* l);
List* concatene_List(List* head, List* tail);
