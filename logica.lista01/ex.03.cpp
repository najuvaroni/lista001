#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	bool n_primo = true;
	
	cout << "Digite um número inteiro:";
	cin >> num;
	
	if (num<= 1){n_primo = false;} else {
		for(int i = 2; i = (num); i++){
			if (num % i == 0){
				n_primo = false;
				break;
			}
		}
	} if (n_primo == true){
		cout << "O número é primo" << endl;
	} else{
		cout << "não é";
	}
}
	
