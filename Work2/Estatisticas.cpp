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

	//cadastro de participantes
	cadastroQuestoes(numeroPart, numeroQuest, vetorParticipantes);


	//resumo participantes
	resumoParticipantes(numeroPart,numeroQuest,vetorParticipantes);

	//resumo questoes
	resumoQuestoes(numeroPart,numeroQuest, vetorParticipantes);

	//estatistica final
	estatisticas(numeroPart, numeroQuest, vetorParticipantes);

	//deletar memoria do vetor de participantes 

	deletarMemoriaQuestoes(vetorParticipantes, numeroPart, numeroQuest);


	delete[] vetorParticipantes;
	return 0;
}