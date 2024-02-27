#pragma once
#include"Aula.h"
class AulaLaboratorio : public Aula
{
	//Herencia
	public:
		AulaLaboratorio();
	private:
		int codigoMesa;
		int codigoSilla;
};

