//program kalkulator
#include <iostream>
#include "ez.h"

int utama(){
	int pil, a, b, hasil;
	char operasi[] = {'+','-','*','/'};
	tulis "1. Penjumlahan\n";
	tulis "2. Pengurangan\n";
	tulis "3. Perkalian\n";
	tulis "4. Pembagian\n";
	tulis "---------------------\n";
	tulis "Masukkan bilangan pertama : ";
	baca a;
	tulis "Masukkan bilangan kedua : ";
	baca b;
	tulis "Masukkan pilihan jenis operasi (1-4) : ";
	baca pil;
			
	jika (pil == 1){
		hasil = a + b;
	}
	lainnya jika (pil == 2){
		hasil = a - b;
	}
	lainnya jika (pil == 3){
		hasil = a * b;
	}
	lainnya jika (pil == 4){
		hasil = a / b;
	}
	lainnya{
		tulis "Input yang Anda masukkan salah";
	}
	
	jika (pil > 0 && pil <5){
		tulis a lalu " " lalu operasi[pil-1] lalu " " lalu b lalu " = " lalu hasil;
	}
	
	berhenti;
}
