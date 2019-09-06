#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int i, vet[5];
	
	//codigo para testar script de entrada e saida de dados
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &vet[i]);
	}

	for(i = 0; i < 5; i++) {
		printf("%d ", vet[i]);
	}

	return  0;
	
}


