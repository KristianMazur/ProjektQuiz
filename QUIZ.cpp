//Kristian Mazur 2AI

#include <iostream> 
#include <string>
using namespace std;


char guess; 
int total; 
string x;


			
class Question {
public:
	void setValues(string, string, string, string, string, char, int);
	void askQuestion();

private:
	string Question_Text;
	string answer_1;
	string answer_2;
	string answer_3;
	string answer_4;

	char spravnaOdpoved;
	int skore;
};

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
	cout << "                                                                    " << endl;
	cout << " 1. Zacat quiz " << endl;
	cout << " 2. Navod " << endl;
	cout << " 3. Ukoncit Quiz " << endl;
	cin >> x;

	if (x == "1")
	{
		cout << endl;
		cout << "       ";
		cin.get();
	}
	if (x == "2") {
		cout << " Quiz obsahuje 10 otazok zo sveta " << endl;
		cout << " Pri kazdej otazke mas 4 rozne odpovede " << endl;
		cout << " Za kazdu spravnu odpoved dostanes 10 bodov " << endl;
		cout << " Aby si bol uspesny musis mat aspon 70 bodov " << endl;
		cout << " Maximalny pocet bodov je 100 " << endl;
		cout << " Vela stastia " << endl;
		cout << "       ";
		cin.get();
		cout << endl;
		
	}
	if (x == "3")
	{
		return 0;
	}
	

	string meno;
	int vek;
	cout << "Press enter to start...\n";
	cin.get();
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

		 
		Question q1;
		Question q2;
		Question q3;
		Question q4;
		Question q5;
		Question q6;
		Question q7;
		Question q8;
		Question q9;
		Question q10;


		
		q1.setValues("1. Ktory ocean je najvacsi? ",
			"Indicky",
			"Atlanticky",
			"Severny Ladovy",
			"Tichy",
			'd',
			10);

		q2.setValues("2. Kolko na svete existuje krajin?",
			"195",
			"94",
			"235",
			"4",
			'a',
			10);

		q3.setValues("3. Najvacsi kontinent na svete je?",
			"Polsko",
			"Afrika",
			"Antarktida",
			"Azia",
			'd',
			10);

		q4.setValues("4. Aka je najvacsia krajina v Europe??",
			"Velka Britania",
			"Francuzsko",
			"Rusko",
			"Indonezia",
			'c',
			10);

		q5.setValues("5. Ktora rieka preteka cez Peru?",
			"Dunaj",
			"Amazonka",
			"Nil",
			"Varsava",
			'b',
			10);

		q6.setValues("6. Najvacsi ostrov na svete je?",
			"Madagaskar",
			"Gronsko",
			"Velka Britania",
			"Borneo",
			'b',
			10);

		q7.setValues("7. Najvacsi ostrov v Stredozemnom mori je?",
			"Sicilia",
			"Korzika",
			"Uzbekistan",
			"Cyprus",
			'a',
			10);

		q8.setValues("8. Aka je najvacsia krajina v Afrike podla poctu obyvatelov?",
			"Egzpt",
			"Nigeria",
			"Malta",
			"Etiopia",
			'b',
			10);

		q9.setValues("9. Gibraltarsky prieliv deli Maroko od?",
			"Slovenska",
			"Portugalska",
			"Spanielska",
			"Bulharska",
			'c',
			10);

		q10.setValues("10. Hlavne mesto Slovenska?",
			"Kosice",
			"Zakopcie",
			"Zilina",
			"Bratislava",
			'd',
			10);



		
		q1.askQuestion();
		q2.askQuestion();
		q3.askQuestion();
		q4.askQuestion();
		q5.askQuestion();
		q6.askQuestion();
		q7.askQuestion();
		q8.askQuestion();
		q9.askQuestion();
		q10.askQuestion();


		
		cout << "Tvoje skore je " << total << " zo 100\n";
		cout << "\n";

		
		if (total > 70) {
			cout << "Zvladol si to!" << endl;
			cout << "\n";
			cin.get();
			cin.ignore();
			return 0;
		}
		else
		{
			cout << "Nezvladol si to... Skus to nabuduce.\n";
			cout << "\n";
		}
		cin.get();
		cin.ignore();
		return 0;
	}

	
	void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
		{
		Question_Text = q;
		answer_1 = a1;
		answer_2 = a2;
		answer_3 = a3;
		answer_4 = a4;
		spravnaOdpoved = ca;
		skore = pa;
		}
	
	void Question::askQuestion()
	{
		cout << "\n";
		cout << Question_Text << "\n";
		cout << "a. " << answer_1 << "\n";
		cout << "b. " << answer_2 << "\n";
		cout << "c. " << answer_3 << "\n";
		cout << "d. " << answer_4 << "\n";
		cout << "\n";

		
		cout << "Aka je tvoja odpoved?" << "\n";
		cin >> guess;
		
		if (guess == spravnaOdpoved) {
			cout << "\n";
			cout << "Spravna odpoved" << "\n" << endl;
			total = total + skore;
			cout << "\n";
			cout << "Stlacte Enter pre pokracovanie" << "\n";
			cin.get();
			cin.ignore();
		}
		else 
			 
		{
			cout << "\n";
			cout << "Odpovedal si zle" << "\n";
			cout << "Spravna odpoved je " << spravnaOdpoved << "." << "\n";
			cout << "\n";
			cout << "Stlacte Enter pre pokracovanie" << "\n";
			cin.get();
			cin.ignore();
		}
	}


	
