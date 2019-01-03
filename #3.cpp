#include <iostream>
using namespace std;

int main (){
	
	char center;
	char a, b;
	
	cout << "\nEnter a letter : ";
	cin >> a;
	cout << "\nEnter another letter : ";
	cin >> b;
	
	for (char center = a; center <= b; center++){
		cout <<center <<" ";
	}
	
	return 0;
}
