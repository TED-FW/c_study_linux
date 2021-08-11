#include <stdio.h>
#include <math.h>

int main()
{
	int n=0;
	float x=0.0, y=0.0, nx1=0.0, ny1=0.0, nx1_temp=0.0, ny1_temp=0.0;;
	float d=0.0, d_temp=0.0;

	scanf("%d %f %f", &n, &x, &y);
	printf("%d %f %f\n", n, x, y);

	for(int i=0; i<n; i++){

		scanf(" %f %f", &nx1_temp,&ny1_temp);
	
		printf("temp %f %f \n", nx1_temp, ny1_temp);

		d_temp = sqrt(pow((x-nx1_temp),2)+pow((y-ny1_temp),2));
		if(i==0) {
			d = d_temp;
		}
		else if(d_temp < d){
			d = d_temp;
			nx1 = nx1_temp;
			ny1 = ny1_temp;
		}
	}
	
	printf("The closest point form (%0.2f, %0.2f) is (%0.2f %0.2f) and distance between them is %0.2f\n", x, y, nx1, ny1, d);

	return 0;
}
