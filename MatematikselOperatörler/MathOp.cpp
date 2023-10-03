#include<iostream>
using namespace std;

int main() {

	int sonuc;
	int allysinavsonuc = 95;
	int mehmetsinavsonuc = 100;

	if (allysinavsonuc > mehmetsinavsonuc) {
		cout << "ali sinavda birinci olmustur";
	}
	else {
		cout << "Mehmet sinavda birinci olmustur";
	}
	sonuc = allysinavsonuc + mehmetsinavsonuc;
	cout << endl << "ali ile mehmetin sinav sonuclarý toplami : " << sonuc;
	
}