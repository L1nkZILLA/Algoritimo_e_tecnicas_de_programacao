/*Elabore um programa em C++ que receba o nome e a idade de uma pessoa e informe se ela pode
realizar os procedimentos para CNH*/
#include<iostream>
using namespace std;
int main(){
	string nome;
	int idade;
	cout<<"Digite seu nome: ";
	getline(cin,nome);
	cout<<"Digite a sua idade: ";
	cin>>idade;
	if(idade>=18){
		cout<<"Parabens, voce pode retirar a sua CNH! :)"<<endl;
	}
	else{
		cout<<"Volte daqui uns anos!"<<endl;
	}
}
