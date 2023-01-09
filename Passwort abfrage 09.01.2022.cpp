#include <iostream>
#include <string>

using namespace std;

int main()
{	
	int trys = 3;
	string password;
	bool stoppen = false;

    

	while (trys >= 1 && stoppen == false)
	{
		cout << endl <<"Bitte geben sie ein Passwort ein: " ;

		cin >> password;

	if (password == "Nixdorf")
	{
		cout << endl << "Passwort Richtig" << endl;
		stoppen = true;
	} 
	else {
		cout << endl << "Passwort Ungueltig" << endl;
		trys = trys - 1;
	}
	if (trys <= 0)
	{
		cout << endl << "Zu viele Fehlgeschalgene Versuche" << endl;
	}
	}

}

