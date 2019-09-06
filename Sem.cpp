#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp (int a, int b) {
	return a > b;
}

int main(){
	int a[] = {5,3,4,1,2};
	
	sort(a, a+5, cmp);
	
	for(int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}

	return  0;
	
}


