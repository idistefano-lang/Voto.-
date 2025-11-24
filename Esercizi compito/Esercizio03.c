#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct studente{
		int matricola;
		int voto;
		int cfu;
	};
	
	int inserisci_studente(struct Studente v[], int n);
	void stampa_studenti(struct Studente v[], int n);
	float media_voti(struct Studente v[], int n);
	int cerca_per_matricola(struct Studente v[], int n, int matricola);
	int indice_voto_massimo(struct Studente v[], int n);

int main(){
	struct Studente studenti[50];
    int n = 0;
    int scelta;
}

do {
        printf("\n--- MENU ---\n");
        printf("1) Inserisci un nuovo studente\n");
        printf("2) Stampa tutti gli studenti\n");
        printf("3) Calcola e stampa la media dei voti\n");
        printf("4) Cerca studente per matricola\n");
        printf("5) Trova e stampa lo studente con il voto massimo\n");
        printf("0) Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                n = inserisci_studente(studenti, n);
                break;
            case 2:
                stampa_studenti(studenti, n);
                break;
            case 3:
                if (n == 0)
                    printf("Nessuno studente presente.\n");
                else
                    printf("Media voti: %.2f\n", media_voti(studenti, n));
                break;
            case 4: {
                if (n == 0) {
                    printf("Nessuno studente presente.\n");
                    break;
                }

}
	
