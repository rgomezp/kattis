#include <ctime>
#include <stdio.h>
#include <iostream>

using namespace std;

int fibonacci(int num){
	if(num<=1) return 1;
	return fibonacci(num-1) + fibonacci(num-2);
}


int main(int argc, char *argv[]){
	clock_t begin = clock();

	cout<<to_string(fibonacci(stoi(argv[1])));
	cout<<endl;
	clock_t end = clock();

	cout<<"Time: "<<double(end-begin) / CLOCKS_PER_SEC;
	return 0;
}

