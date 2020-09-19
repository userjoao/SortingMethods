#include <bits/stdc++.h>


void bubble_sort(int vetor[]){
	int aux=0,c=0;
	for(int i = 0;i<5-c;i++){
		for(int j = 0;j<4;j++){
			if(vetor[j]>vetor[j+1]){
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;	
			}
			
		}
		c++;
	}
}

int main(){
	int vetor[5]={3,1,10,3,4};
	bubble_sort(vetor);
	for(int c = 0;c<5;c++){
		printf("%i\n",vetor[c]);
	}
}
