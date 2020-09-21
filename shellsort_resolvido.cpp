#include <bits/stdc++.h>


void shell_sort(int vetor[],int tam){
    int h = tam/2,aux,c=0;
    int meio;
    while(h > 0){
    	meio = h;
        while(meio<=tam-1){
            if(vetor[c]>vetor[meio]){
                aux = vetor[c];
                vetor[c] = vetor[meio];
                vetor[meio]= aux;
        	}
            c++;
            meio++;
       	}
        h--;
        c=0;
	}

}

int main(){
	int vetor[11]={3,1,10,3,4,-3,88,31,0,5,72};
	shell_sort(vetor,11);
	for(int c = 0;c<11;c++){
		printf("%i\n",vetor[c]);
	}
}