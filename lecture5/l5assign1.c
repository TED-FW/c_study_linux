#include <stdio.h>
#include <math.h>



int main()
{
	int x1=0, x2=0, y1=0, y2=0;
	int r1=0, r2=0;
	int	cross=0;

	int dx=0, dy=0, sr=0, dr=0;

	printf("put in integer value between 0 to 10000\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d", &r1, &r2);
	
	if(x1 == x2 && y1 == y2 && r1 == r2){
		printf("same circle has infinit cross point\n");
	}

	dx = pow((x2-x1),2);
	dy = pow((y2-y1),2);
	sr = pow((r2+r1),2);
	dr = pow((r2-r1),2);


	if(sr == dx +dy){
		cross = 1;
	}
	else if (sr > dx+dy){
		cross = 2;
		if(dr > dx+dy){
			cross = 0;
		}
	}
	else if (sr < dx+dy){
		cross = 0;
	}



	printf("cross point num #%d ", cross);
	
	return 0;	
}


