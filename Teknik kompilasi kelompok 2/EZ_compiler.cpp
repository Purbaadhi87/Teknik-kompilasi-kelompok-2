#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "EZ_Token.h"

string _tulis = "tulis"; char output;
string _berhenti = "berhenti";
int count;

int main(){
	int pos1, pos2;
	pos1 = 0; pos2 = 0;
	string nama_file, isi_file, baris;
	string getvars;
	char ch;
	bool ketemu;
	map<string, int> numbers;
	string myvar;
	//numbers[myvar] = 7;
	//cout << numbers[myvar];
	
		cout<<"Nama file : ";
		cin>>nama_file;	
		system("cls");
		
	/*fstream fin();
	while(!fin.eof()){
        getline(fin, baris);
		isi_file += baris+"\n"; 
	}
	fin.close();*/
	
	for(int i=0; i<isi_file.length()-7; i++){
		
		
		if(isi_file.at(i) == 'i' && isi_file.at(i+1) == 'n' && isi_file.at(i+2) == 't'){
			count = i+4;
			while(count < isi_file.length()-5 && isi_file.at(count) != ' ' || isi_file.at(count) != ',' || isi_file.at(count) != ';' ){
				myvar +=  isi_file.at(count);
				count = count + 1;
			}
			numbers[myvar] = 0;
			count = 0;
		}
	
		//keyword tulis
		if(isi_file.at(i) == _tulis.at(0) && isi_file.at(i+1) == _tulis.at(1) && 
				isi_file.at(i+2) == _tulis.at(2) && isi_file.at(i+3) == _tulis.at(3) && 
				isi_file.at(i+4) == _tulis.at(4)) {
					count = i+7;
					output = isi_file.at(count);
				
				//tulis "string"	
				if(isi_file.at(count-1) == '"'){
					while(output != '"'){
						if(isi_file.at(count) == '\\' && isi_file.at(count+1) == 'n'){
							cout<<"\n";
							count = count + 1;
							output = isi_file.at(count);
						}
						else if(isi_file.at(count) == 'n' && isi_file.at(count-1) == '\\'){
							count = count + 1;
							output = isi_file.at(count);
						}
						else{
							cout << output;
							count = count + 1;
							output = isi_file.at(count);
						}
					}
					count = 0;
				}
			}
		
		//keyword berhenti
		if(i<isi_file.length()-10){
			count = 0;
			while(count < 8 && isi_file.at(i+count) == _berhenti.at(count)){
				count = count + 1;
			}
			if(count == 8){
				system("pause");
			}
			else{
				count = 0;
			}
		}
	}
}
