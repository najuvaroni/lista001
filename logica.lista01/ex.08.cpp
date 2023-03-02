#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, cigarros;
	
	cout << "Idade: ";
	cin >> idade;
	cout << "Cigarros p/dia: ";
	cin >> cigarros;
	
	int minutos_perdidos = cigarros * 10 * 365 * (100 - idade);
	int dias_perdidos = minutos_perdidos / (24 * 60);
	
	 cout << "Essa pessoa perdeu aproximadamente " << dias_perdidos << " dias de vida devido ao hábito de fumar." << endl;
	return 0;
}


