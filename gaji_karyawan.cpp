#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

garis(){
	int max, i;
	string pilih = "-";
	max = 80;
	
	for(i=1; i <= max; i++){
		cout << pilih;
	}
	cout << endl;
}

int main(){
	struct {
		char nama[35];
		int gol,nim,jam,lembur,lembur1;
		int total;
		int tunbat;
	} pegawai[20];
	
	int x,y;
	cout << "=== \t PROGRAM GAJI KARYAWAN \t ===" << endl;
	cout << "====================================" << endl;
	cout << "Masukkan Jumlah Karyawan : "; cin >> y;
	
	for(x = 1; x <= y; x++){
		cout << "Karyawan Ke - " << x << endl;
		cout << "Nama Karyawan : "; cin >> pegawai[x].nama;
		cout << "Nim : "; cin >> pegawai[x].nim;
		cout << "Golongan : "; cin >> pegawai[x].gol;
		cout << "Jumlah Jam Kerja : "; cin >> pegawai[x].jam;
		cout <<  endl;
		
		if(pegawai[x].gol == 1){
			pegawai[x].tunbat = 2000000;
		}else if(pegawai[x].gol == 2){
			pegawai[x].tunbat=1750000;
		}else if(pegawai[x].gol == 3){
			pegawai[x].tunbat=1500000;
		}else{
			pegawai[x].tunbat = 0;
			system("exit");
			return 0;
		}
		
		if(pegawai[x].lembur > 48){
			pegawai[x].lembur = pegawai[x].jam - 48;			
		}else if(pegawai[x].lembur < 48){
			pegawai[x].lembur1=0;
		}
		
	}
	cout << " ============= \t\t\t\t PROGRAM GAJI KARYAWAN \t\t\t\t ===========" <<  endl;
	cout << "==========================================================================================================" << endl;
	cout << "No \t nim \t Nama \t\t Gaji Bersih \t\t Jumlah Jam \t\t Honor Lembur \t\t Total \t\t" << endl;
	cout << "==========================================================================================================" << endl;
	for(x = 1; x <= y; x++){
		cout << setw(8) << x;
		cout << left << setw(13) << pegawai[x].nama;
		cout << right << setw(12) << pegawai[x].nim;
		cout << setw(16) << pegawai[x].tunbat;
		cout << setw(17) << pegawai[x].jam;
		pegawai[x].lembur1=pegawai[x].lembur*30000;
		cout << setw(9) << pegawai[x].lembur1;
		pegawai[x].total=pegawai[x].tunbat+pegawai[x].lembur1;
		cout << setw(12) << pegawai[x].total;
		cout << endl;
	}
	garis();
	return 0;
}
