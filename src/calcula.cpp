/**
* @file calcula.cpp
* @brief Programa que faz intermedio com o cliente solicitando as informações necessárias para cada forma geometrica.
* @author Israel Medeiros Fontes
* @since 09/08/2017
* @date 15/08/2017
*/
#include <iostream>
#include "calcula.hpp"

using std::cin;
using std::cout;
using std::endl;
using namespace geometria;

void triangale(void){
	float base;
	
	cout << "Digite o tamanho da base do triangulo: ";
	cin >> base;
	
	Triangulo triangulo;//(base);

	cout << "Area do triangulo: " << triangulo.area() << endl;
	cout << "Perimetro do triangulo: " << triangulo.perimetro() << endl;

}

void rectangale(void){
	float base, altura;

	cout << "Digite o tamanho da base do retangulo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do retangulo: ";
	cin >> altura;

	Retangulo retangulo(base, altura);

	cout << "Area do retangulo: " << retangulo.area() << endl;
	cout << "Perimetro do retangulo: " << retangulo.perimetro() << endl;

}

void quadrate(void){
	float base;

	cout << "Digite o tamanho do lado do quadrado: ";
	cin >> base;

	Quadrado quadrado(base);

	cout << "Area do quadrado: " << quadrado.area() << endl;
	cout << "Perimetro do quadrado: " << quadrado.perimetro() << endl;

}

void circle(void){
	float raio;

	cout << "Digite o tamanho do raio do circulo: ";
	cin >> raio;

	Circulo circulo(raio);

	cout << "Area do circulo: " << circulo.area() << endl;
	cout << "Perimetro do circulo: " << circulo.perimetro() << endl;

}

void pyramid(void){
	float base, altura;

	cout << "Digite o tamanho de um dos lados da piramide: ";
	cin >> base;
	cout << "Digite o tamanho da altura da piramide: ";
	cin >> altura;

	Piramide piramide(base,altura);

	cout << "Area da piramide: " << piramide.area() << endl;
	cout << "Volume da piramide: " << piramide.volume() << endl;

}

void cube(void){
	float base;

	cout << "Digite o tamanho da aresta do cubo: ";	
	cin >> base;

	Cubo cubo(base);

	cout << "Area do cubo: " << cubo.area() << endl;
	cout << "Volume do cubo: " << cubo.volume() << endl;

}

void parallelepiped(){
	float base, altura, tam_base;

	cout << "Digite os tres lados do paralelepipedo: ";
	cin >> base >> altura >> tam_base;

	Paralelepipedo paralelepipedo(base, altura, tam_base);

	cout << "Area do paralelepipedo: " << paralelepipedo.area() << endl;
	cout << "Volume do paralelepipedo: " << paralelepipedo.volume() << endl;
}

void ball(){
	float raio;

	cout << "Digite o raio da esfera: ";
	cin >> raio;

	Esfera esfera(raio);

	cout << "Area da esfera: " << esfera.area() << endl;
	cout << "Volume da esfera: " << esfera.volume() << endl;
}
