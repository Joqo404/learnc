#include <stdio.h>
#include <math.h>

struct result
{
	float prev;
	float curret;
	float max;
	float min;
};

void func(struct result res, float a, float b, float h){
	res.prev = res.curret;
	float x = 0;
	for (int i = a; i < b; i++)
	{
		x += h;
		res.prev = res.curret;
		res.curret = (2 * sin (x))/(pow(1-x,2));
		if (res.prev > res.curret){
			res.max = res.prev;
			res.min = res.curret;
			printf("%i: x: %f,func: %f,  убывает \n" , i, x, res.curret);
		}
		else{
			res.max = res.curret;
			res.min = res.prev;
			printf("%i: x: %f,func: %f,  возрастает \n" , i, x, res.curret);
		}
		
	}
}
int main() {
	struct result res;
	res.prev = 0;
	res.max = 0;
	res.min = 0;
	res.curret = 0;
	func(res,-3.14,3.14,0.4);
}
