/*programa que recebe um numero ate o usuario digitar 0*/
#include <iostream>
using namespace std;
int opcao;
int main(){ 
do{
	cout<<"Digite um numero: (0 para sair)";
	cin>>opcao;
}
while(opcao!=0);
}
