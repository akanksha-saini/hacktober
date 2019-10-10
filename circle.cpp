#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,r;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	printf("\nEnter coordinate x and y of the point :");
	printf("\nx=");
	scanf("%d",&x);
	printf("\ny=");
	scanf("%d",&y);
	if(((x*x)+(y*y))>(r*r)) //to check whether square of radius is less than the sum of squares of x and y then point lies outside the circle
		printf("(%d,%d) lies outside the circle",x,y);
	else if(((x*x)+(y*y))<(r*r))//to check whether square of radius is greater than the sum of squares of x and y then point lies inside the circle
			printf("(%d,%d) lies inside the circle",x,y);
		else
			printf("(%d,%d) lies on the circle",x,y);
	return 0;
}
