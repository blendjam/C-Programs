#include <stdio.h>
#include <math.h>
struct cor
{
	int x;
	int y;
};
void dist(struct cor a,struct cor b);
void main()
{
	struct cor a,b;
	a.x = 1;
	a.y = 2;
	b.x = 5;
	b.y = 3;
	dist(a,b);
}
void dist(struct cor a, struct cor b)
{
	int d1 = b.x - a.x;
	int d2 = b.y - a.y;
	float dist = sqrt(d1*d1+d2*d2);
	printf("The distance is %f",dist);
}

