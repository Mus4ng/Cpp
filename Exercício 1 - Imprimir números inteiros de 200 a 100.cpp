#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese"); // Corre��o da codifica��o de caracteres para o portugu�s

int input;

//IN�CIO 
do{
cout << "Digite 1 para iniciar..." << endl;
cin >> input;
}while(input != 1);

//IMPRESS�O DOS N�MEROS
for(int i = 200; i >= 100; i--){
	cout << i << endl;
}

}
