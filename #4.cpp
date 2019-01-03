#include <iostream>
using namespace std;

int a=20, b=20, c=10, d=15;
 int line(int a ){
 	
 	for (int i=0; i<a; i++)
	 {
	 	cout << "*";
	 }
	 cout << endl; 
 }
 int line (int a, int b){
 	for (int i=0; i<b; i++)
	 {
 		cout << "@";
	 }
	 cout << endl;
}
 int line (int a, int b, int c){
 	for (int i=0; i<c; i++)
	 {
 		cout << "*";
	 }
	 cout << endl;
 }
 int line (int a, int b, int c, int d){
 	for (int i=0; i<d; i++)
 	{
 		cout << "#";
	 }
 	cout << endl;
}
 int main (){
 	line (a);
 	line (a, b);
 	line (a, b, c);
 	line (a, b, c, d);
 	
 	
 }


