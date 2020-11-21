#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese"); //Corre��o da codifica��o de caracteres para o portugu�s
	
	int n; //Quantidade de termos
	int a; //Auxiliador na contagem de algarismos 
	int num1 = 1;
	int num2 = 3;
	
	cout << "Informe a quantidade de N termos que deseja para iniciar a sequ�ncia: ";
	cin >> n;
	
	int sequel[n]; //Vetor com a sequ�ncia num�rica


	while(true){
		sequel[a] = num1;
		a++;
		num1++;
		if(a == n){break;}
		
		sequel[a] = num2;
		a++;
		if(a == n){break;}
		
		sequel[a] = num2;
		a++;
		num2 = num1 + 3;
		if(a == n){break;}
	}
	
	//Impress�o da sequ�ncia
	for(int i = 0; i < n; i++){
		if(i == 0){
			cout << sequel[i];
		} 
		else{
			cout <<  ", " << sequel[i];
		}
	}
}
