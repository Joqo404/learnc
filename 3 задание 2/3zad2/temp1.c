include <stdio.h>
int main(){
    int n;
    n = 1;
    int *p_n;
    p_n = &n;
    printf("%p \n", p_n);
    printf("%i \n", *p_n);
    *p_n += 1;
    printf("указатель: %p \n разыменнованый: %i \n сама переменная: %i", p_n, *p_n, n);
}
