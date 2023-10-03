#include<iostream>
using namespace std;
int main (){
    string profilTC1 , profil1pw;
string MetinErcanProfil = "TC Kimlik No :";

cout<< "Lutfen TC Kimlik No Giriniz : ";

cin >> profilTC1;

if(profilTC1 == "12345678910"){
cout << "Sifre Giriniz";
cin >> profil1pw;
metin();
}
else {

    cout << "yanlis ya da eksik tc no ";
}

//cout << MetinErcanProfil << " " << profilTC1 <<endl;

}