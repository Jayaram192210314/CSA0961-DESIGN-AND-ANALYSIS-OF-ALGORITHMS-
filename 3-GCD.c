#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,m,GCD;
	printf("K.L.V Jayaram, Reg.No - 192210314");
	printf("\nEnter the Number:");
	scanf("%d %d",&m,&n);
	for(i=1;i<=n && i<=m; i++){
		if(n%i==0 && m%i==0){
			GCD = i;
		}
	}
	printf("GCD of the numbers %d and %d is %d",n,m,GCD);
	return 0;
}