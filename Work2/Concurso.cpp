#include "Concurso.h"
#include <iostream>
#include <iomanip>

using namespace std;

void teste()
{
	cout << "Hello World";
}

int numeroParticipante()
{
	int p = 0;
	cout << "Quantos participantes? ";
	cin >> p;

	return p;
}

int numeroQuestoes()
{
	int q = 0;
	cout << "Quantas questoes? ";
	cin >> q;
	cout << "\n";

	return q;
}

void cadastroQuestoes(int numeroParticipantes, int numeroQuestoes, participantes* ptr)
{

	char letra = 'A';

	for (int i = 0; i < numeroParticipantes; i++)
	{
		tracos();
		cout << "Digite o nome do " << i + 1 << " participante: ";
		cin >> ptr[i].nome;
		tracos();
		cout << "\n";

		//criar delete para esse new
		ptr[i].questoesEn = new questoes[numeroQuestoes];

		for (int j = 0; j < numeroQuestoes; j++)
		{
			/*char(letra + j)*/
			cout << "Questao " << letra++ << endl;

			int difi;
			cout << "Dificuldade: (1=MF, 2=F, 3=M, 4=D, 5=MD) ";
			cin >> difi;
			ptr[i].questoesEn[j].dificuldadeQuestao = dificuldade(difi);

			cout << "Hora de inicio: (HH:MM) ";
			cin >> ptr[i].questoesEn[j].horaInicio.hora;
			cin.ignore();
			cin >> ptr[i].questoesEn[j].horaInicio.minuto;
			
			cout << "Hora de fim: (HH:MM) ";
			cin >> ptr[i].questoesEn[j].horaFim.hora;
			cin.ignore();
			cin >> ptr[i].questoesEn[j].horaFim.minuto;

			cout << "\n";
		}

		letra = 'A';
		tracos();
		cout << "\n";
		
	}

}

void resumoParticipantes(int numeroParticipante,int numeroQuestoes,participantes* ptrParticipantes)
{
	char letra = 'A';

	tracos();
	cout << "Resumo por participante: \n";
	tracos();

	for (int i = 0; i < numeroParticipante; i++)
	{
		cout << ptrParticipantes[i].nome << ": \n";

		for (int y = 0; y < numeroQuestoes; y++) 
		{
			cout << "\t" << letra++ << " (" << ptrParticipantes[i].questoesEn[y].dificuldadeQuestao << ") " << setfill('0') << setw(2) <<
				ptrParticipantes[i].questoesEn[y].horaInicio.hora << ":" << setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[y].horaInicio.minuto <<
				" as " << setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[y].horaFim.hora << ":" << setfill('0') << setw(2) <<
				ptrParticipantes[i].questoesEn[y].horaFim.minuto << " (" << calcHoras(ptrParticipantes[i].questoesEn[y].horaInicio, ptrParticipantes[i].questoesEn[y].horaFim) << " min)\n";  //"  (  calculo   )\n";

		}

		letra = 'A';

	}

	tracos();

}

void resumoQuestoes(int numeroPart,int numeroQuest,participantes* ptrParticipantes)
{
	char letra = 'A';

	tracos();
	cout << "Resumo por questao: \n";
	tracos();

	for (int j = 0; j < numeroQuest; j++)
	{
		cout << "Questao " << letra++ << ": \n";

		for (int i = 0; i < numeroPart; i++)
		{
			cout <<"\t"<< ptrParticipantes[i].nome << " (" << ptrParticipantes[i].questoesEn[j].dificuldadeQuestao << ") " <<
			setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[j].horaInicio.hora << ":" << setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[j].horaInicio.minuto << " as " <<
			setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[i].horaFim.hora << ":" << setfill('0') << setw(2) << ptrParticipantes[i].questoesEn[j].horaFim.minuto << " (" <<
			calcHoras(ptrParticipantes[i].questoesEn[j].horaInicio, ptrParticipantes[i].questoesEn[j].horaFim) << " min)\n ";

		}

	}

}


int calcHoras(horario inicio, horario fim)
{
	const int conversor = 60;
	
	int horaFim = (fim.hora * conversor) + fim.minuto;
	int horaInicio = (inicio.hora * conversor) + inicio.minuto;

	int horaFinal = horaFim - horaInicio;
	

	return horaFinal;


}

void tracos()
{
	for (int i = 1; i <=20; i++)
	{
		cout << '-';
	}
	cout << "\n";
}

void asteristicos()
{
	for (int i = 1; i <= 50; i++)
	{
		cout << '*';
	}
	cout << "\n";
}