#include <complex>
#include "israel.hpp"

#define pi 3.14

using namespace geometria;

float Triangulo::area(){ 
	float altura = sqrt(pow(base,2) - pow((base/2),2));
	return (base*altura)/2;
}

float Retangulo::area(){
	return base*altura;
}

float Quadrado::area(){
	return base*base;
}

float Circulo::area(){
	return pi * pow(raio,2);
}

float Esfera::area(){
	return 4*pi*pow(raio,2);
}

float Cubo::area(){
	return 6*base*base;
}

float Piramide::area(){
	float hip = sqrt(pow((base/2),2) + altura*altura);
	float area_base = base*base;
	float area_lat = 4 *((hip+base)/2);

	return area_base + area_lat;
}

float Paralelepipedo::area(){
	return 2*((base*altura)+(base*tam_base)+(altura*tam_base));
}

float Cubo::volume(){
	return base*base*base;
}

float Esfera::volume(){
	return (4*pi*pow(raio,3))/3;
}

float Piramide::volume(){
	return (base*base*altura)/3;
}

float Paralelepipedo::volume(){
	return base*altura*tam_base;
}

float Triangulo::getBase(){ return base; }

float Retangulo::getBase(){ return base; }

float Retangulo::getAltura(){ return altura; }

float Circulo::getRaio(){ return raio; }

float Quadrado::getBase(){ return base; }

float Cubo::getBase(){ return base; }

float Piramide::getBase(){ return base; }

float Piramide::getAltura(){ return altura; }

float Paralelepipedo::getBase(){ return base; }

float Paralelepipedo::getAltura(){ return altura; }

float Paralelepipedo::getTamBase(){ return tam_base; }

void Triangulo::setBase(float _base){ base = _base; }

void Quadrado::setBase(float _base){ base = _base; }

void Circulo::setRaio(float _raio){ raio = _raio; }

void Retangulo::setBase(float _base){ base = _base; }

void Retangulo::setAltura(float _altura){ altura = _altura; }

void Esfera::setRaio(float _raio){ raio = _raio; }

void Cubo::setBase(float _base){ base = _base; }

void Piramide::setAltura(float _altura){ altura = _altura; }

void Piramide::setBase(float _base){ base = _base; }

void Paralelepipedo::setTamBase(float _t_base){ tam_base = _t_base; }

void Paralelepipedo::setAltura(float _altura){ altura = _altura; }

void Paralelepipedo::setBase(float _base){ base = _base; }