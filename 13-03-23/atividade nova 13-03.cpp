#include<iostream>
using namespace std;
int main(){
	float n1,n2,resultado;
	cout<<"Informe o primeiro numero: ";
	cin>>n1;
	cout<<"Informe o segundo numero: ";
	cin>>n2;
	if(n2!=0){
		resultado = n1/n2;
		cout<<"O resultado eh: "<<resultado<<endl;
	}
	else{
	cout<<"Erro de divisao por zero";
	}
}
