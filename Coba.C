#include <stdio.h>

int main(){
	
	//input data
	int K,N,I;
	I = 1;
	
	//ALgoritma
	printf("Masukan Nilai Kelipatan"); scanf("%d\n", &N);
	scanf("%d", &K);
	if(1<=N<=100)
	if(1<=K<=N){
	while(I<=N){
		if(I!=N){
			if(I%K==0){
				printf("* ");
			}else{
				printf("%d ",I);
			}
		}else{
			if(I%K==0){
				printf("*");
			}else{
				printf("%d",I);
			}
		}
		I++;
	}
	return 0;
}
	else{
		printf("Data Salah");
	}
}
