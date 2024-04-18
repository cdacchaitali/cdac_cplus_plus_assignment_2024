#include <stdio.h>

struct ABC
{
	int a;
	float b;
	double c;
};

int main()
{
	printf("Size: %lu\n", sizeof(struct ABC));
}
