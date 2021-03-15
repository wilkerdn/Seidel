#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double x1(double x2, double x3){ //double x4){
	double p1 = 0.125;
	double p2 = x2*(4);
	double p3 = x3*(3);
	//double p4 = (-2)*x4;
	double tp = 14+(p2)+(p3);
	double x1 = p1*tp;
	return x1;
}

double x2(double x1, double x3){// double x4){
	double p1 = -0.2;
	double p2 = x1*(-2);
	double p3 = (-3)*x3;
	//double p4 = (-1)*x4;
	double tp = -1+(p2)+(p3);
	double x2 = p1*tp;
	return x2;
}

double x3(double x1, double x2){// double x4){
	double p1 = 0.111111;
	double p2 = 3*x1;
	double p3 = (-1)*x2;
	//double p4 = 0;
	double tp = 9+(p2)+(p3);
	double x3 = p1*tp;
	return x3;
}

/*double x4(double x1, double x2, double x3){
	double p1 = 0.125;
	double p2 = (-1)*x1;
	double p3 = (-1)*x2;
	double p4 = x3*(-8);
	double tp = 0.1+(p2)+(p3)+(p4);
	double x4 = p1*tp;
	return x4;
}*/

void conversao(){
	double a11 = 8, a12 = 4, a13 = 3;
	double a22 = 5, a21 = 2, a23 = 3;
	double a33 = 9, a31 = 3, a32 = 1;
	//double a44 = 12, a41 = 2, a42 = 2, a43 = 1;
	double b1 = 0, b2 = 0, b3 = 0;
	double s1 = 0, s2 = 0, s3 = 0;
	s1 = a12+a13;
	b1 = s1/a11;
	s2 = (a21*b1)+a23;
	b2 = s2/a22;
	s3 = (a31*b1)+(a32*b2);
	b3 = s3/a33;
	//s4 = (a41*b1)+(a42*b2)+(a43*b3);
	//b4 = s4/a44;
	printf("B1 = %lf\nB2 = %lf\nB3 = %lf\n",b1,b2,b3);
	if((b1<1)&&(b2<1)&&(b3<1)){
		printf("Converge por linhas\n\n");
	}
}
	

int main(){
	double x1a=0, x2a=0, x3a, x4a=0;
	double ant1=0, ant2=0, ant3=0, ant4=0;
	double res1=0, res2=0, res3=0, res4=0;
	double dif=0.001;
	conversao();
	for(int i=0; i<10; i++){
		x1a = x1(ant2,ant3);
		res1 = x1a - ant1;
		ant1 = x1a;
		x2a = x2(ant1,ant3);
		res2 = x2a - ant2;
		ant2 = x2a;
		x3a = x3(ant1,ant2);
		res3 = x3a - ant3;
		ant3 = x3a;
		/*x4a = x4(ant1,ant2,ant3);
		res4 = x4a - ant4;
		ant4 = x4a;*/
		printf("TENTATIVA %d:\nX1 = %lf, X2 = %lf, X3 = %lf\n",i+1,x1a,x2a,x3a);
		printf("R1 = %lf, R2 = %lf, R3 = %lf\n\n",res1,res2,res3);
	}//while((res1>dif)&&(res2>dif)&&(res3>dif)&&(res4>dif));
	return 0;
}
