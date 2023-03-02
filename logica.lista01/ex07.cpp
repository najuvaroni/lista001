#include <iostream>

using namespace std;

main(){
setlocale(LC_ALL, "Portuguese");
	float salario, aumento;
	string name;
	cout << "Informe seu nome:";
	cin >> name;

	cout << "informe o seu salário: ";
	cin >> salario;
	
	if(salario <= 1500 ){
		cout << "Salário era: "<< salario << "Passou a ser: "<< aumento;
		aumento = salario * 1.10;
	} 
	else if(salario > 1500){
		aumento = salario * 1.5;
		cout<< "Salário era " << salario << " e passou a ser " << aumento;
	}	
}
	
	
