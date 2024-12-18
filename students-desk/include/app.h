#pragma once

#include<stdio.h>

struct List {
	char name[128];
	int id;
	double average;

};

typedef struct List LIST;
typedef struct List* PLIST;

void print(PLIST list);

void print_array(LIST list[], int size);



	