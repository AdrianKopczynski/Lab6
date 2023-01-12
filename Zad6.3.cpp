#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct data{
	int indeks;
	string imie,nazwisko;
};


int main()
{
	int studentNum;
	cout << "Podaj ilosc uczniow: ";
	cin >> studentNum;
	vector <data> studenci(studentNum);
	for(int i = 0; i<studentNum;i++){
		cout << "Podaj imie " << i+1 << " studenta: " ;
		cin >> studenci[i].imie;
		cout << "Podaj nazwisko: " << i+1 << " studenta: " ;
		cin >> studenci[i].nazwisko;
		cout << "Podaj nr indeksu: " << i+1 << " studenta: " ;
		cin >> studenci[i].indeks;
		cout << endl;
	}
	cout <<endl<< "Wektor przed posortowaniem: " << endl<<endl;
	for(int i = 0;i<studentNum;i++){
		cout << studenci[i].indeks << " " << studenci[i].imie << " " << studenci[i].nazwisko << endl;
	}
	for(int i = 0;i<studentNum;i++){
		for(int j = 1;j<studentNum;j++){
			if(studenci[j-1].indeks>studenci[j].indeks){
				swap(studenci[j-1], studenci[j]);
			}
		}
	}
	cout << endl << endl << "Wektor po sortowaniu: " << endl << endl;
	for(int i = 0;i<studentNum;i++){
		cout << studenci[i].indeks << " " << studenci[i].imie << " " << studenci[i].nazwisko << endl;
	}
	return 0;
}
