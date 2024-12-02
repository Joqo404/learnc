#include <stdio.h>
#include <math.h>

struct result {
    float prev;
    float s;
    float y;
    float min;
};

unsigned int factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned int result = 1;
    for (unsigned int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void func(struct result *res, float a, float b, float h, int n, int k) {
    float x = h;
    for (unsigned int i = k; i <= n; ++i) {
        res->s = ((pow(i, 2) + 1) / (factorial(i))) * (pow((x / 2), i));
        res->y = (((pow(x, 2)) / 4) + (x / 2) + 1) * pow(M_E, x / 2);
        printf("S(X) = %f \nY(X) = %f\n", res->s, res->y);
        x += h;
    }
}

int main() {
    struct result res = {0, 0, 0, 0};
    float a = 0.1;
    float b = 1.0;
    float h = 0.1;
    int n = 5;
    int k = 1;

    func(&res, a, b, h, n, k);
    return 0;
}
