#include <iostream>
using namespace std;

int main() {

	int ckprice = 30;
	string fiyatacilis = "Urunlerimizdeki fiyatlandirma su sekildedir :";
	char turklirasi = '₺'; //çalışmıyor soru işareti gösteriyor
	cout << fiyatacilis << ckprice << turklirasi;
	return 0;

}