/*	Vitor Nagata RA178499
*	Programa que simula scheduler em tempo 
*	real para ciclos de temporização
*/
#include <stdio.h>

int main() {
  int a[5];
  int n;
  char vazio =0;	//caso não haja nenhuma tarefa no ciclo

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<n+1; i++) {	// Ciclos de iteração
	  
    for (int j=0; j<5; j++){	// Varredura pelas tarefas
		if(!(i%a[j])){
			printf("%d", j);
			vazio = 1;
		}
	}
	
	if(!(vazio)){		// Não há tarefas nesse ciclo
		putchar('-');
	}
	
	putchar('\n');

	vazio = 0;
		
  }

  return 0;
}
