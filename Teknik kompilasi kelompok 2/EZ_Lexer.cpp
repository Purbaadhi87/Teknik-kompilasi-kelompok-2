#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
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
	bool find_comment;
		cout<<"Nama file : ";
		cin>>nama_file;	
    ifstream fin();
    int i,j=0;
    
   /* if(!fin.is_open()){
        cout<<"error while opening the file\n";
        exit(0);
    }
    else{
    	cout<<"Lexical Analyzer for "<<nama_file<<" :\n\n";
	}
    
    find_comment = false;
    while(!fin.eof()){
           ch = fin.get();
           
        for(i = 0; i < 6; ++i){
               if(ch == operators[i])
                   cout<<ch<<" adalah operator\n";
           }
           
        for(i = 0; i < 11; ++i){
               if(ch == separators[i])
                   cout<<ch<<" adalah separator\n";
           }

           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   j = 0;
                                      
                   if(isKeyword(buffer) == 1)
                       cout<<buffer<<" adalah keyword\n";
                   else
                       cout<<buffer<<" adalah indentifier\n";
           }
    }
    
    fin.close();*/
    return 0;
    system("Pause");
}
