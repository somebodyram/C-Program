#include <stdio.h>
void fibo(int);
int main(void) {
    int a;
	printf("Enter no. of terms to be printed:");
    scanf("%d",&a);
    printf("\nThe fibonacci series is ....");
	fibo(a);
	return 0;
}

void fibo(int n)
{
    int n1=-1,n2=1,s;
    while(n>0)
    {
        s=n1+n2;
        printf("%d ",s);
        n1=n2;
        n2=s;
        n--;
    }
}
