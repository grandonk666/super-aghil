#include<stdio.h>

int iterasi (int x, int n){
	int hasil;
	int i;
	for(i = 0; i < n; i++){
		hasil = x*x;
	}
	return hasil;
}

int main()
{
	int x,n;
	printf("Bilangan yang akan dipangkatkan : ");
	scanf("%d",&x);
	
	printf("Pangkat bilangan : ");
	scanf("%d",&n);
	
	printf("Hasil bilangan %d dipangkatkan %d = %d\n",x,n,iterasi(x,n));
	
	return 0;
}