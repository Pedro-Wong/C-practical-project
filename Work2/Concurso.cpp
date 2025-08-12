#include "Concurso.h"
#include <iostream>

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

	return q;


}

void cadastroQuestoes(int numeroParticipantes, int numeroQuestoes, participantes* ptr)
{


	
	int letra = 'A';


	for (int i = 0; i < numeroParticipantes; i++)
	{
		tracos();
		cout << "Digite o nome do " << i + 1 << " participante: ";
		cin >> ptr[i].nome;
		tracos();
		cout << "\n\n";

		ptr[i].questoesEn = new questoes[numeroQuestoes];

		for (int j = 0; j < numeroQuestoes; j++)
		{

			cout << "Questao " << char(letra+j) << endl;

			int difi;
			cout << "Dificuldade: (1=MF, 2=F, 3=M, 4=D, 5=MD)";
			cin >> difi;
			ptr[i].questoesEn[j].dificuldadeQuestao = dificuldade(difi);

			cout << endl;
		
			cout << "Hora de inicio: (HH:MM)";
			cin >> ptr[i].questoesEn[j].horaInicio.hora;
			cin.ignore();
			cin >> ptr[i].questoesEn[j].horaInicio.minuto;
			cout << endl;

			cout << "Hora de fim: (HH:MM)";
			cin >> ptr[i].questoesEn[j].horaFim.hora;
			cin.ignore();
			cin >> ptr[i].questoesEn[j].horaFim.minuto;

		}


		

	}





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