#include"app.h"

void print(PLIST list)
{
	printf("name=%s\n", list->name);
	printf("id=%d\n", list->id);
	printf("average=%f\n", list->average);
}
void print_array(LIST list[], int size)

{
	int i;
	for (i = 0; i < size; ++i)
	{
		print(&list[i]);
		printf("--------\n");
	}
}