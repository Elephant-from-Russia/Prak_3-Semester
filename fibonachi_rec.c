#include <stdio.h>


int rec(int a, int b, int N) {
	int arr[10000];
	if(a + b < N) {
		a = a + b;
		b = a - b;
		rec(a,b,N);
	}
	else
		return a;
}
int main()
{
	int N;
	int a=1,b=1;
	scanf("%d", &N);
	printf("%d", rec(a,b, N));
	return 0;
}