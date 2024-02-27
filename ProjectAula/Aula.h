#pragma once
class Aula
{
//Encapsulamiento
protected:
	int numerosillas;
	int numeromesas;
	int numeropizarras;
private:
	int data;
public:
	int codigoAula;
	int sillas;
	int mesas;
	int pizarras;
	Aula();
	void mostrarAula();
};

