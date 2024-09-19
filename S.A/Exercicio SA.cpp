#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	double VH,SB,SL,IR,Inss,FGTS;
	
	int HorasTrabalhadas;
	
	//Solitar ao usuario o valor das horas e a quantidade de horas Trabalhadas 
	cout << "Digite o valor da sua hora:";
	cin >> VH;
	cout << "Digite a quantidade de horas Trabalhadas por mês:";
	cin >> HorasTrabalhadas;
	
	//Calcular o salario Bruto 
	SB = VH * HorasTrabalhadas;
	
	//Calcular o Desconto IR
	if(SB <= 900){
		IR = 0;
	}else if (SB <=1500){
		IR = SB * 0.05;
	}else if (SB <=2500){
		IR = SB * 0.10;
	}else {
		IR = SB * 0.20;
	}

	//Calcular o desconto INSS
	Inss = SB * 0.10;
	
	//Calcular o FGTS(não descontando do salario)
	FGTS = SB * 0.11;
	
	//Calcular o salario liquido
	SL = SB - IR - Inss;
	
	//Exibir as informacoes na tela
	cout << fixed << setprecision(2);
	
	cout << "Salario  Bruto: ("<< VH << "*"<< HorasTrabalhadas <<") : R$" << SB << endl;
	
	cout << "(-) IR (" << (IR / SB )*100 << "%) : R$" << IR << endl;
	
	cout << "(-)INSS (10%) : R$" << Inss << endl;
	
	cout << "FGTS (11%) : R$" << FGTS << endl;
	
	cout << "Total de desconto : R$" <<(IR + Inss) << endl;
	
	cout << "Salario Liquio : R$" << SL << endl;
	
	return 0;
	}
	
 
