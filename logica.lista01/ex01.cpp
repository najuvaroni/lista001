#include <iostream>

using namespace std;

	float soma(float a, float b){
	return a + b;
}
	float sub(float a, float b){
	return a - b;
}
	float mult(float a, float b){
	return a * b;
}
	float div(float a, float b){
	return a / b;
}
	
main(){
	setlocale(LC_ALL,"Portuguese");
	float numero, numero2;
	int funcao;
	
	do{
		cout<< "Informe o primeiro valor:";
		cin>> numero;
		
		cout<< "Informe o segundo n�mero:";
		cin>> numero2;
		
		cout<< "1-Adi��o\n";
		cout<< "2-Subtra��o\n";
		cout<< "3-Multiplica��o\n";
		cout<< "4-Divis�o\n";
		cout<< "5-Sair\n";
		cin >> funcao;
		
		switch(funcao){
				case 1:cout<< soma(numero,numero2)<<endl;
			break;
				case 2:cout<< sub(numero,numero2)<<endl;
			break;
				case 3:cout<< mult(numero,numero2)<<endl;
			break;
				case 4:cout<< div(numero, numero2)<<endl;
			break;
				case 5:cout<< "sair";
			break;
			default: cout <<"item ";
		}
	}while (funcao != 5);
}
