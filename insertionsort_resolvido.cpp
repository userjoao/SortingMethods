#include <bits/stdc++.h>

void InsertionSort(int vet[],int tam){
	int i,j;
	char eleito;
	for(i = 1;i < tam;i++){
		eleito = vet[i];
		j = i - 1;
		while((j>=0)&&(eleito<vet[j])){
			vet[j + 1] = vet[j];
			j--;
		}
		vet[j+1] = eleito;
	}
}

int main(){
    int vetor[5]={1,3,4,9,0};
    InsertionSort(vetor,5);
    for(int c = 0;c<5;c++){
        printf("%d",vetor[c]);
    }
}
