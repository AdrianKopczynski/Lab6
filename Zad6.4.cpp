#include <iostream>
#include <string>
using namespace std;

int main()
{
	int loop;
	string word,add;
	cout << "Podaj wyraz: ";
	cin >> word;
	cout << "Ile razy chcesz go konkatenowac: ";
	cin >> loop;
	for(int i = 0; i<loop;i++){
		cout << "Podaj wyraz: ";
		cin >> add;
		word += add;
		cout << "Po konkatenacji: " << word << endl;
	}
	return 0;
}
