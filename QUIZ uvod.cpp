#include <iostream>
#include <string>

using namespace std;

int main()
{

	cout << "                                                                    " << endl;
	cout << "     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "     *                                                             *" << endl;
	cout << "     *                 * WELCOME TO THE QUIZ *                     *" << endl;
	cout << "     *                                                             *" << endl;
	cout << "     *                                                             *" << endl;
	cout << "     *            ====================================             *" << endl;
	cout << "     *                Developed By Kristian Mazur                  *" << endl;
	cout << "     *            ====================================             *" << endl;
	cout << "     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "                                                                    " << endl;
	

	cout << "Zmackni Enter pre start .. " << endl;
	cin.get();

	string meno;
	int vek;

	cout << "Ake je vase meno?" << endl;
	cin >> meno;
	cout << endl;
	cout << "Kolko mate rokov?" << endl;
	cin >> vek;
	cout << endl;
	string odpoved;
	cout << "Ste pripraveny na Quiz " << meno << "? ano/nie" << endl;
	cin >> odpoved;
	if (odpoved == "ano")
	{
		cout << endl;
		cout << "Prajem vam vela stastia" << endl;
	}
	else {
		cout << "Dobre dovidenia" << endl;
		return 0;
	}
}




	