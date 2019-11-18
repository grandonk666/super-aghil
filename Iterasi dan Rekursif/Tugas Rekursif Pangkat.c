#include<stdio.h>

int rekursif(int x,int n){
	if(n==0){
		return 1;
	}
	else{
		return x*rekursif(x,n-1);
	}
}

int main()
{
	int x,n;
	printf("Bilangan yang akan dipangkatkan : ");
	scanf("%d",&x);
	
	printf("Pangkat bilangan : ");
	scanf("%d",&n);
	
	printf("Hasil bilangan %d dipangkatkan %d = %d\n",x,n, rekursif(x,n));
	
	return 0;
}