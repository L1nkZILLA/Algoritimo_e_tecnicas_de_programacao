/*Crie um programa que receba o cadastro de até 20 cidade, com os
seguintes dados: 
- Nome
- População 
- Renda media
- Estado
- Mostrar os totais de população e renda média*/
#include<iostream>
using namespace std;

int main(){
	string nome,estado;
	float renda_media, total_renda=0;
	int populacao, total_populacao=0, cont=1, quant=0;
	cout<<"Quantas cidades deseja cadastrar? (Maximo 20)";
	cin>>quant;
	if(quant>20){
		cout<<"Quantidade invalida!"<<endl;
	}
	else{
		cin.ignore();  //limpa a leitura de numeros para ler textos.
		while(cont<=quant){
			cout<<"Digite o nome: ";
			getline(cin,nome);
			cout<<"Digite a populacao: ";
			cin>>populacao;
			total_populacao = total_populacao + populacao;
			cout<<"Digite a renda media: ";
			cin>>renda_media;
			total_renda = total_renda + renda_media;
			cin.ignore();
			cout<<"Digite o Estado: ";
			getline(cin,estado);
			cont++;
		}
		cout<<"O somatorio das populacoes eh: "<<total_populacao<<endl;
		cout<<"O somatorio das rendas medias eh: "<<total_renda<<endl;
	}
}
