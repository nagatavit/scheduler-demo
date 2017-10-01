#include <stdio.h>

int main() {
  int a[5];
  int n;
  char vazio =0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<n+1; i++) {
	  
    for (int j=0; j<5; j++){
		if(!(i%a[j])){
			printf("%d", j);
			vazio = 1;
		}
	}
	
	if(!(vazio)){
		putchar('-');
	}
	
	putchar('\n');

	vazio = 0;
		
  }

  return 0;
}
