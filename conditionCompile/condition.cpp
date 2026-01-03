#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define DEBUG
int main(){
	int a = 5,b = 5,c = 8;
	double s,area;
#ifdef DEBUG
	printf("DEBUG:a=%d,b=%d,c=%d\n",a,b,c);
#endif
	s=1.0*(a+b+c)/2;
#ifdef DEBUG
	printf("DEBUG:s=%.2f\n",s);
#endif
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area = %.2f\n",area);
	system("pause");
	return 0;
}