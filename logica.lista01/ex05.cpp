#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	 float nota1, nota2, result;
	 
	 cout << "informe a primeira nota:";
	 cin >> nota1;
	 
	 cout << "Informe a segunda nota:";
	 cin >> nota2;
	 
	 result= (nota1 + nota2) / 2;
	 
	 cout << "você foi: \n\n\n\n" << result;
	 
	 if(result >= 7){
	 	cout << "aprovado";
	 	
	
	 } else if( result >5 and result <6.9){
	 	cout << "para a recuperação";
	 	
	 } else if (result < 5){
	 	cout << "reprovado";
	 }
}
