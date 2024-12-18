#include"app.h"

int main()
{
	int sz = sizeof(struct List);

	printf("%d\n", sz);



	LIST lists[] =
	{

	{ "Bakalov", 10501, 66.3},
	{ "Beshliu", 10502, 74.4},
	{ "Kyrylenko", 10503, 76},
	{ "Kotov", 10504, 88},
	{ "Lapiuk", 10505, 74.4},
	{ "Romaniv", 10507, 59.4},
	{ "Samoray", 10508, 65.6},
	{ "Sereda", 10501, 69.4},
	{ "Khavich", 10510, 92},

	};
	
	print_array(lists, 9);
	
	return 0;

}