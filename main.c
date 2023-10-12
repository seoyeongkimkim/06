#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int div1, div2;
	
	div1= factorial(n);//n!
	div2= factorial(n-r) * factorial(r);
	
	return div1/div2;
}

int factorial (int n)
{
	int i;
	int res =1;
	
	for(i=1; i<=n; i++)
	{
		res*=i;
	}
	
	return res;
}

int main(int argc, char *argv[]){
	
	int n, r;
	int div1, div2; //div1 분자, div2 분모 
	int result;
	
	printf("input n : ");
	scanf("%d", &n);
	
	printf("input r : ");
	scanf("%d", &r);
	
	//분모분자 계산 
	
	result=combination(n,r);
	
	//최종값 출력 
	
	printf("result is %i\n", result); 
	
	return 0;
}
