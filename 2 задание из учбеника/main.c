#include <stdio.h>
#include <math.h>

float phi1(float x){
	float phi;
	phi = 2 * x;
	return phi;
}

float phi2 (float x){
	float phi;
	phi = pow(x,2);
	return phi;
}

float phi3(float x){
	float phi;
	phi = x/3;
	return phi;
}

float calclute_x(float z){
	float x;
	if(z < 1){
		x = pow(z,2);
	}
	if (z >= 1){
		x = z + 1;
	}
	return x; 
}

int main() {
	int ch;
	float z;
	float phi;
	float x;
	float a = 2;
	float y;
	printf("выберите значение фи\n1: 2x\n2: 2^x\n3: x/3\n");
	ch = getchar();
	printf("введите z: ");
	scanf("%f", &z);
	x = calclute_x(z);
	printf("x = %f\n", x);

	switch(ch){
	case '1': phi = phi1(x); break;
	case '2': phi = phi2(x); break;
	case '3': phi = phi3(x); break;
	}

	printf ("phi = %f\n", phi);

	y = a * log(1 + pow(x, 1/5)) + pow(cos(phi + 1),2);
	printf("ответ: %f\n", y);
    return 0;
}