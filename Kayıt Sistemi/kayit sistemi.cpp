#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream file("Kullanicilar.txt");
	string id,password;
	
	cout << "Cikmak icin 00 tuslayiniz! " << endl;
	for(;;){
		
		cout << endl<<"Kullanici ID: ";
		cin >> id;
		if(id=="0" or id=="00"){
			break;
		}
		
		file << id << endl;
		
		cout << endl<<"Kullanici sifresi: ";
		cin >> password;
		
		file << password << endl << endl;
		
	}
	
	file.close();
	
	
	return 0;
}



