#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define maks 500

using namespace std;
class encryption {
	public:
		encryption();
		void enkripsi();
		void deskripsi();
		void output();
		void output2();
	
	private:
		char chipper[maks];
		int key;
		char plain[maks];
};

encryption::encryption() {
	cout<<"==============================="<<endl;
	cout<<"=                             ="<<endl;
	cout<<"=                             ="<<endl;
	cout<<"=    PROGRAM ENKRIPSI DATA    ="<<endl;
	cout<<"=        --Adhe Maul--        ="<<endl;
	cout<<"=                             ="<<endl;
	cout<<"=                             ="<<endl;
	cout<<"==============================="<<endl;
	cout<<"Insert field you want : ";
	cin.getline(chipper,sizeof(chipper));
	cout<<"Insert key you want : ";
	cin>>key;
	cout<<endl;
}

void encryption::enkripsi() {
	for(int i=0; i<strlen(chipper); i+=1) {
		cout<<chipper[i]<<"("<<int(chipper[i])<<")";
		chipper[i]=(chipper[i]+key)%126;
	}
}

void encryption::deskripsi() {
	for(int i=0; i<strlen(chipper); i+=1) {
		plain[i]=(chipper[i]-key)%126;
		chipper[i]=plain[i];
	}
}

void encryption::output() {
	for(int i=0; i<strlen(chipper); i+=1) {
		cout<<chipper[i];
	}
}

void encryption::output2() {
	for(int i=0; i<strlen(plain); i+=1) {
		cout<<plain[i];
	}
}

int main(int argc, char *argv[]) {
	encryption data;
	data.enkripsi();
	cout<<"\n\n Hasil data dari enckripsi adalah : ";
	data.output();

	data.deskripsi();
	cout<<"\n\n Hasil data dari deskripsi adalah : ";
	data.output2();
	cout<<endl;
//	return EXIT_SUCCESS;
}

