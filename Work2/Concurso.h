#pragma once
#ifndef CONCURSO.H


//enum

enum dificuldade {MF = 1, F, M, D, MD};

//structs
struct horario 
{
	int hora;
	int minuto;
};

struct questoes 
{
	dificuldade dificuldadeQuestao;
	horario horaInicio;
	horario horaFim;
};

struct media 
{
	dificuldade grauDifi;
	horario tempo;

};

struct participantes
{
	char nome[50];
	questoes* questoesEn;


};



//functions
void teste();
int numeroParticipante();
int numeroQuestoes();
void cadastroQuestoes(int, int, participantes*);

void resumoParticipantes(int,int,participantes*);
void resumoQuestoes(int, int, participantes*);

int calcHoras(horario, horario);

void tracos();
void asteristicos();


#endif // !CONCURSO.H

