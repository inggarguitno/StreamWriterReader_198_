#include <iostream>
#include <exception>
//untuk obyek exeption yang akan digunakan
#include <array>
//untuk obyek array yang akan digunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:....
	try {
		array<int, 3 > data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan obyek exeption
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya
		memiliki 3 elemen*/
	}
	cout << "baris Program Yang terakhir" << endl;
	/*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}
