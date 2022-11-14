
#include "ControlPersoana.h"

int main()
{
	ControlPersoana a;

	Persoana x=a.returnPersoanaByNume("ana");

	cout << x.descriere();
}

