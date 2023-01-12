#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> studentsNames(6);
	int marksTable[6][4];
	string names[4] = {"informatyki","matematyki","biologii","jezyka polskiego"};
	for(int i = 0; i<6;i++){
		cout << "Podaj imie ucznia nr " << i+1 <<": ";
		cin >> studentsNames[i];
		
		cout << "Podaj ocene z informatyki: " ;
		do{
			cin >> marksTable[i][0];
			if(marksTable[i][0]<1 || marksTable[i][0]>6){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(marksTable[i][0]<=0 || marksTable[i][0]>6);
		cout << "Podaj ocene z matematyki: " ;
		do{
			cin >> marksTable[i][1];
			if(marksTable[i][1]<1 || marksTable[i][1]>6){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(marksTable[i][1]<=0 || marksTable[i][1]>6);
		cout << "Podaj ocene z biologii: " ;
		do{
			cin >> marksTable[i][2];
			if(marksTable[i][2]<1 || marksTable[i][2]>6){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(marksTable[i][2]<=0 || marksTable[i][2]>6);
		cout << "Podaj ocene z jezyka polskiego: " ;
		do{
			cin >> marksTable[i][3];
			if(marksTable[i][3]<1 || marksTable[i][3]>6){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(marksTable[i][3]<=0 || marksTable[i][3]>6);
		cout << endl;
	}
	cout << "Podaj liczbe zapytan: ";
	int loop;
	cin >> loop;
	int student,classes;
	for(int i = 0; i<loop;i++){
		cout << "Podaj nr ucznia [1...6]: ";
		do{
			cin >> student;
			if(student<1 || student>6){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(student<1 || student>6);
		cout << "Poodaj nr przedmiotu [1..4]: ";
		do{
			cin >> classes;
			if(classes<1 || classes>4){
				cout << "Podaj prawidlowe dane! : " ;
			}
		}while(classes<1 || classes>4);
		cout << "Uczen: " << studentsNames[student-1] << ", ocena z " << names[classes-1] <<": " <<marksTable[student-1][classes-1] << endl;
	}
	return 0;
}
