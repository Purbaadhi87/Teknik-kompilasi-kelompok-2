#include <iostream>
#include "ez.h"

int x;

int utama(){
	tulis "masukkan bilangan : ";
	baca x;
	jika (x mod 2 == 0){
		tulis "genap";
	}
	lainnya{
		tulis "ganjil";
	}
	
	berhenti;
}
