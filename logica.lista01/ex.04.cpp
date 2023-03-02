#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "Portuguese");
	string name;
	int idade;
	cout << "Digite o nome da pessoa: ";
	getline (cin,name);
	
	cout << "Digite a idade da pessoa: ";
	cin >> idade;
	
	if(idade < 18) {
		cout << name << " , você é menor de idade " <<endl;
		
	}
	else if (idade >= 18 && idade <= 65){
		cout << name << " , você é adulto"<<endl;
	}
   else {
   	cout << name << " , voc~e é idoso" << endl;
   }	
   
   return 0;
}


