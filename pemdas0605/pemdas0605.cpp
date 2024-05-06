#include <iostream>
using namespace std;

class mahasiswa {
	public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};

int main()
{
	mahasiswa mhs{ 1 }; //obkect mhs
	mhs.showNim(); //member Acces operator

	mahasiswa& refmhs = mhs; //pointer reference refmhs
	refmhs.nim = 2; //member access operator
	mhs.showNim();

	mahasiswa* pmhs = &mhs;
	pmhs->nim = 3;
	mhs.showNim();
	return 0;

}

