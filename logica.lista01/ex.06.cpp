#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	int num, soma = 0 ;
	cout << "Digite um número inteiro de três digitos: ";
	cin >>num;
	
	 if (num >= 100 && num <= 999) {
	 	soma += num/100;
	 	num %= 100;
	 	soma += num / 10;
	 	num %= 10;
	 	soma += num;
		cout << " A soma dos digitos é: " << soma << endl;
	}
	else{
		cout << "Número inválido" << endl;
	}
	return 0;
}
