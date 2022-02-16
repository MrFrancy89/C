//Esercizio 41 Fato da Annunziata Francesco 3C_INF
#include <stdio.h>
#define MAX_TEXT 30

//Semplice struttura
typedef struct Alunno{
	char nome[MAX_TEXT];
	char cognome[MAX_TEXT];
	int eta;
	char materia[MAX_TEXT];
	float voto;
}alunno;

int main(){
	int n,i;
	printf("Inserire numero di alunni: ");
	scanf("%d",&n);
	
	alunno Alunni[MAX_TEXT];
	//Metto i dati dello studente (si ripete per il loro numero).
	for(i=0;i<n;i++){
		printf("\nMetti il nome: ");
		scanf("%s",&Alunni[i].nome);
		
		printf("Metti il cognome: ");
		scanf("%s",&Alunni[i].cognome);
		
		printf("Metti l'eta: ");
		scanf("%d",&Alunni[i].eta);
		
		printf("Metti la materia: ");
		scanf("%s",&Alunni[i].materia);
		
		printf("Metti il voto: ");
		scanf("%f",&Alunni[i].voto);
	}
	
	//Grz a Felcie Napolitano per il consiglio riguardo l'index
	
	//Calcolo etaMax
	int max;
	int index;
	
	for(i=0,max=-1;i<n;i++){
		if(max<Alunni[i].eta){
			index=i;	
			max=Alunni[i].eta;
			
		}
	}
	printf("il ragazzo piu grande \x82 %s %s con %d anni!\n",Alunni[index].nome,Alunni[index].cognome,max);
	
	//calcolo votoMax
	float max1;
	for(i=0,max=-1,index=0;i<n;i++){
		if(max<Alunni[i].eta){
			index=i;
			max1=Alunni[i].voto;
		}
	}
	printf("\nIl ragazzo piu intelligente \x82 %s %s %.2f: ",Alunni[index].nome,Alunni[index].cognome,max1);
	
	return 0;
}
