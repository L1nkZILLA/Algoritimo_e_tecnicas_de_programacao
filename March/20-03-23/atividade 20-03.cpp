#include<iostream>
using namespace std;
int main(){
	float a1, a2, a3, a4, n1, n2, n3,  resultado, opcao;
	cout<<"Qual operacao deseja executar: "<<endl;
	cout<<"1-Somar"<<endl;
	cout<<"2-Subtrair"<<endl;
	cout<<"3-Multiplicar"<<endl;
	cout<<"4-Dividir"<<endl;
	cin>>n3;
	if(n3==1){
		cout<<"Soma"<<endl;
		cout<<"Informe o primeiro numero: ";
		cin>>n1;
		cout<<"Informe o segundo numero: ";
		cin>>n2;
		resultado = n1+n2;
		cout<<"O resultado eh: "<<resultado<<endl;
	}
	if(n3==2){
		cout<<"Subtrair"<<endl;
		cout<<"Informe o primeiro numero: ";
		cin>>n1;
		cout<<"Informe o segundo numero: ";
		cin>>n2;
		resultado = n1-n2;
		cout<<"O resultado eh: "<<resultado<<endl;
		
	}
	if(n3==3){
		cout<<"Multiplicar"<<endl;
		cout<<"Informe o primeiro numero: ";
		cin>>n1;
		cout<<"Informe o segundo numero: ";
		cin>>n2;
		resultado = n1*n2;
		cout<<"O resultado eh: "<<resultado<<endl;
    }
    if(n3==4){
		cout<<"Dividir"<<endl;
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
do{
	cout<<"Digite um numero: (0 para sair)";
	cin>>opcao;
}
while(opcao!=0);
if(opcao>=1){
	
}
return 0;
}
