#include "header.h"
int main() {
	int databaru;
	head baru;
	//baru->data = databaru;
	int choose;
	do {
		//Tampilan menu
		cout << "--------------------------------\n"
		     << "OPERASI PADA DOUBLE LINKED LIST\n"
		     << "--------------------------------\n"
		     << "[1] Tambah data dari depan \n"
		     << "[2] Tambah data dari belakang \n"
		     << "[3] Hapus data dari depan \n"
		     << "[4] Hapus data dari belakang \n"
		     << "[5] Cetak Data\n"
		     << "[6] Clear\n"
		     << "[7] Tampil Berurut Dari Belakang node\n"
			 << "[8] Hitung Jumlah Node\n"
		     << "[0] Keluar \n\n"
		     << "--------------------------------\n"
		     << "Masukkan pilihan: ";
		cin >> choose;
		switch (choose) {
			case 1:
				cout<<"Penyisipan Simpul Di Depan"<<endl<<endl;
				cout<<"Masukkan angka :";
				cin>>databaru;
				insertDepan (baru, databaru);
				cout<<endl;
				tampil(baru);
				break;
			case 2:
				cout<<"Penyisipan Simpul Di Belakang"<<endl<<endl;
				cout<<"Masukkan angka";
				cin>>databaru;
				insertBelakang (baru, databaru);
				cout<<endl;
				tampil (baru);
				break;
			case 3:
				hapusDepan (baru);
				tampil (baru);
				break;
			case 4:
				hapusBelakang (baru);
				tampil(baru);
				break;
			case 5:
				tampil(baru);
				break;
			case 6:
				clear (baru);
				break;
			case 7:
				tampilBelakang (baru);
				cout<<endl; 
				break;
			case 8:
				cout<<"Jumlah nodes: " << jumlahNode(baru);
				cout<<endl;
				break;
			default:
				cout << "Pilihan tidak tersedia";
				break;
		}
	} while (choose !=0);
	return 0;
}
