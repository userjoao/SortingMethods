#include <bits/stdc++.h>

int vetor[5]={3,2,1,4,6};

void selectionsort(){
	int aux;
	for(int j = 0;j<5;j++){
		int valor_min = j;
		for(int c = j+1;c<5;c++){
			if(vetor[c]<vetor[valor_min]){
				valor_min = c;
			}
		}
		aux = vetor[j];
		vetor[j] = vetor[valor_min];
		vetor[valor_min] = aux;		
	}

}

int main(){
	selectionsort();
	for(int c = 0;c<5;c++){
		printf("%i\n",vetor[c]);
	}
}
