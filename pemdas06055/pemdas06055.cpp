#include <iostream>

class pelajar;
class manusia
{
public:
	void showNilaipelajar(pelajar& x);
};

class pelajar
{
private:
	int nilai;
public:
	pelajar() { nilai = 100; }
	friend void manusia::showNilaipelajar(pelajar& x);
};

void manusia::showNilaipelajar(pelajar &x)
int main()
{
   
}


