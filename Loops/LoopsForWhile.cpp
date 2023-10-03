#include<iostream>
using namespace std;
int main() {
	int number = 25 , number2 = 50;
	while (number == 25) {

		cout << number << endl;
		number++;
	}
	

		do {
			cout << number2 << endl;
			number2-- ;
		} while (number2 > 35);
	
	



	for (int i = 0; i < 10; i++) {
		cout << "hi" << endl;
	}
	
	int girilensayi,faktoriyel = 1;
	cout << "Faktoriyeli alinmasini istedigin sayiyi yaz" << endl;
	cin >> girilensayi;
	for (int i = 1; i <= girilensayi; i++)
	{
		faktoriyel = faktoriyel* i;
	}
	cout << faktoriyel;

}