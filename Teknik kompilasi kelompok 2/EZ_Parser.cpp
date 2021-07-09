#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
 
using namespace std;
 
int isKeyword(char buffer[]){
    char keywords[33][11] = {"gunakan","utama","tulis","baca","jika","lainnya",
								"ketika","ulangi","sistem","otomatis","konstanta",
								"pendek","panjang","istirahat","lanjut","beralih",
								"kasus","pergike","ukurandari","lalu","lakukan",
								"ekstern","kembali","statis","satuan","benar","salah",
								"include","namespace","std","enter","int", "berhenti"};
    int i, flag = 0;
    
    for(i = 0; i < 33; ++i){
        if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
        }
    }
    
    return flag;
}
 
int main(){
    char ch, buffer[15], operators[] = "+-*/%=", separators[] = "<>(){}[].,;";
	
	string nama_file;
		cout<<"Nama file : ";
		cin>>nama_file;	
    ifstream fin();
    int i,j=0;
    
    /*if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    else{
    	cout<<"Parsing...\n\n";
	}
    
    while(!fin.eof()){
           ch = fin.get();
           
        for(i = 0; i < 6; ++i){
               if(ch == operators[i])
                   cout<<"Token = [ "<<ch<<", operator ]\n";
           }
           
        for(i = 0; i < 11; ++i){
               if(ch == separators[i])
                   cout<<"Token = [ "<<ch<<", separator ]\n";
           }

           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   j = 0;
                                      
                   if(isKeyword(buffer) == 1)
                       cout<<"Token = [ "<<buffer<<", keyword ]\n";
                   else
                       cout<<"Token = [ "<<buffer<<", indentifier ]\n";
           }
    }
    
    fin.close();*/
    
    ifstream fin();
    i=0;
	j=0;
    
    cout<<"\n\n";
    cout<<"--------------------------------\n";
   
           
        for(i = 0; i < 6; ++i){
               if(ch == operators[i])
                   cout<<"{operator}";
           }
           
        for(i = 0; i < 11; ++i){
               if(ch == separators[i])
                   cout<<"{separator}";
           }

		
           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   j = 0;
                                      
                   if(isKeyword(buffer) == 1)
                       cout<<"{keyword}";
                   else
                       cout<<"{indentifier}";
           }
       	if(ch == ' '){
		   cout<<"{whitespace}";
		}
		if(ch == '\n'){
           cout<<"\n";
       	}
    }
    
