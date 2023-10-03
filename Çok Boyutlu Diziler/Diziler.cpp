#include <iostream>

using namespace std;

int main() {

	int sayidizileri[4]{ 1 , 2 , 3 ,4 };

	//cout << sayidizileri[0];

	int dongudizi[10];


	for (int i = 1; i < 10; i++) //snei seviyorum cnmmmmm <3 başka 
	{
		
		dongudizi[i] = i;
		//cout << dongudizi[i] << endl;
		
	}

	int dizi1[3][3] = { {8,1,1},{4,3,3} , {5,5,6} };
	
	//cout << dizi1[0][0];
	
	for (int i = 0; i < 3; i++) {
		for (int u = 0; u < 3; u++) {
			 
			cout << dizi1 [i] [u] << "Dizi" <<" " << endl;

		}
	}


	
}