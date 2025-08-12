#include <iostream>
#include "Concurso.h";


using namespace std;

int main(void)
{
	
	
	
	asteristicos();
	tracos();

	int numeroPart = numeroParticipante();
	int numeroQuest = numeroQuestoes();

	participantes* vetorParticipantes = new participantes[numeroPart];

	cadastroQuestoes(numeroPart, numeroQuest, vetorParticipantes);



	delete[] vetorParticipantes;
	return 0;
}