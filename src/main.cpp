#include <iostream>
#include "calcula.hpp"

using std::cin;
using std::cout;
using std::endl;

int menu(void){
	int option;

	cout << "Calculadora de Geometrica Plana e Espacial" << endl;
	cout << "(1) Triangulo equilatero" << endl;
	cout << "(2) Retangulo" << endl;
	cout << "(3) Quadrado" << endl;
	cout << "(4) Circulo" << endl;
	cout << "(5) Piramide com base quadrangular" << endl;
	cout << "(6) Cubo" << endl;
	cout << "(7) Paralelepipedo" << endl;
	cout << "(8) Esfera" << endl;
	cout << "(0) Sair" << endl << endl;
	cout << "Digite a sua opcao: ";
	cin >> option;

	
	if(option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6 && option != 7 && option != 8 && option != 0 ){
		cout << "Nenhuma opcao valida digitade. Por favor, tente novamente." << endl;
		return menu();
	}

	return option;
}


int main(void){

	int option = menu();

	switch(option){
		case 0:
			return 0;
		break;

		case 1:
			triangale();
		break;

		case 2:
			rectangale();
		break;

		case 3:
			quadrate();
		break;

		case 4:
			circle();
		break;

		case 5:
			pyramid();
		break;

		case 6:
			cube();
		break;

		case 7:
			parallelepiped();
		break;

		case 8:
			ball();
		break;

		default:
			cout << "Erro inesperado." << endl;
			return 0;			

	}
	
	return 0;
}