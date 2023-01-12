#include <iostream>
using namespace std;

int main()
{
	int numbers=0,usrInput;
	cout << "Podaj liczbe: " ;
	cin >> usrInput;
	for(int i = 0; i<=usrInput; i++){
		if(i%5==0 && i%3!=0){
			numbers++;
		}
	}
	cout << "Liczb naturalnych nie wiekszych niz " << usrInput << " podzielnych przez 5 ale nie podzielnych przez 3 jest: " << numbers << ".";
	return 0;
}
