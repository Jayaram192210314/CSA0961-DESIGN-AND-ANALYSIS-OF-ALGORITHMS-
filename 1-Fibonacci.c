#include<stdio.h>
#include<conio.h>
#include<math.h>
int fib(int n){
	if(n==0)
		return 0;
	else if(n ==1)
		return 1;
	else
		return (fib(n-1) + fib(n-2));
}
int main(){
	int n,i;
	printf("K.L.V Jayaram, Reg.No - 192210314");
	printf("\nEnter the Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf(" %d ",fib(i));
	}
	return 0;
}