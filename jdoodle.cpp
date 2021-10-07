#include <iostream>

using namespace std;

int main() {
		
cout << "##  Program Menghitung Gaji Karyawan  ##" << endl;
	cout << "========================================" << endl;
	cout << endl;

	string nama;
	char golongan;
	int jam_kerja, gol1, gol2, gol3, gol4, gol5, total_upah;
int gaj1, gaj2, gaj3, gaj4, gaj5;
gaj1 = 1000000, gaj2 = 2000000, gaj3 = 3000000, gaj4 = 4000000, gaj5 = 5000000;

	// proses input
	cout << "Nama Karyawan: "; cin >> nama;

	cout << "Golongan: ";
	cin >> golongan;

	cout << "Jumlah jam kerja: ";
	cin >> jam_kerja;

	// tentukan jumlah upah per jam berdasarkan golongan
	switch (golongan) {
	case 'A':
		gol1 = 10000;
		total_upah = jam_kerja * gol1;
		if ((jam_kerja - 150) > 0) {
			total_upah = total_upah + gaj1 +((jam_kerja - 150) + gol1);
		}
		break;
	case 'B':
		gol2 = 20000;
		total_upah = jam_kerja * gol2;
		if ((jam_kerja - 150) > 0) {
			total_upah = total_upah + gaj2 +((jam_kerja - 150) +gol2);
		}
		break;
	case 'C':
		gol3 = 30000;
		total_upah = jam_kerja * gol3;
		if ((jam_kerja - 150) > 0) {
			total_upah = total_upah + gaj3 + ((jam_kerja - 150) +gol3);
		}
		break;
	case 'D':
		gol4 = 40000;
		total_upah = jam_kerja * gol4;
		if ((jam_kerja - 150) > 0) {
			total_upah = total_upah + gaj4 + ((jam_kerja - 150) +gol4);
		}
		break;
	case 'E':
		gol5 = 50000;
		total_upah = jam_kerja * gol5;
		if ((jam_kerja - 150) > 0) {
			total_upah = total_upah + gaj5 + ((jam_kerja - 150) + gol5);
		}
		break;

	}

	cout << endl;
	cout << nama << " menerima gaji lembur Rp." << total_upah << "dalam waktu lebih dari seratus lima puluh jam";
	cout << endl;

	return 0;

}