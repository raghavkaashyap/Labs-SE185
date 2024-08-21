#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	int a,b,e,f,j;
	double c,d,g,h,i,k;
	double area, radius;
	
	a=6427+1725;
	b = (6971*3925)-95;
	c = 79 + 12/5;
	d = 3640.0/107.9;
	e =(22/3)*3;
	f = 22/(3*3);
	g = 22/(3*3);
	h = 22/3*3;
	i = (22.0/3)*3.0;
	j = 22.0/(3*3.0);
	k = 22.0/3.0*3.0;
	
	printf("a) 6427+1725 = %d\n", a);
	printf("b) (6971*3925)-95 = %d\n", b);
	printf("c) 79 + 12/5 = %lf\n", c);
	printf("d) 3640.0/107.9 =  %lf\n", d);
	printf("e) (22/3)*3 = %d",e);
	printf("f) 22/(3*3) = %d",f);
	printf("g) 22/(3*3) = %lf",g);
	printf("h) 22/3*3 = %lf", h);
	printf("i) (22.0/3)*3.0 = %lf", i);
	printf("j) 22.0/(3*3.0) = %d", j);
	printf("k) 22.0/3.0*3.0 = %lf",k);
	
	radius = 23.567/(2*M_PI);
	area = M_PI*radius*radius;
	printf("Area of circle with circumference 23.567 is %lf", area);
	
	double length_meters = 14.0*0.3048;
	printf("14 feet in meters is %lf", length_meters);
	
	double temperature = (76.0-32)/(1.8);
	printf(" 76 degrees Fahrenheit in Celsius is %lf", temperature);
	
}
	