//Elabore um programa em C++ que utilizando laço de repetição enquanto receba 5 nomes do usuário.
#include<iostream>
using namespace std;

int main(){
	string nome; //variavel que vai receber os nomes
	int cont = 1; //variavel de controle de loop
	while(cont<=5){
		cout<<"Digite um nome: ";
		getline(cin,nome);
		cont++;
	}
}
