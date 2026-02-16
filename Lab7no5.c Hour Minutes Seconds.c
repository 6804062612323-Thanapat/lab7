#include <stdio.h>

long convert(long h, long m, long s) {
    long H = h * 60 * 60;
    long M = m * 60;
    return H + M + s;
}
int main(){
    long h,m,s;
	scanf("%lu %lu %lu",&h,&m,&s);
	printf("%lu",convert(h,m,s));
}
