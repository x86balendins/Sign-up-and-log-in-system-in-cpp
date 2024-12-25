#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	ifstream file("Kullanicilar.txt");
	
	string id,id1,password,pass1,satiratla;
	bool flag1=false,flag2=false;
	
		cout << endl << "ID: ";
		cin >> id;
	
		cout << endl << "Sifre: ";
		cin >> password;
		
	while(getline(file,id1)){
		if(id1==id){
			flag1=true;
		}
		
	//	cout << id1 << endl; ID Kontrol
		
		getline(file,pass1);
		
	//	cout << pass1 << endl; Sifre Kontrol
		
		if(pass1==password){
			flag2=true;
		}

		if(flag1!=false and flag2!=false){
			
			break;
		}
		
		getline(file,satiratla);
		
		flag1 = false;
		flag2 = false;
	
	}
	
	file.close();
	
	if(flag1!=false and flag2!=false){
		cout <<endl << "Basarili giris!";
	}
	else{
		cout <<endl << "Hatali giris!";
	}
	
	return 0;
}
