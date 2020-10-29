# incluye < stdio.h >

int  main ( int n, char ** args) {
	printf ( " Round Robin " );
	int np = 11 , procesos [ 10 ], quantum = 0 , nq = 0 ;
	doble tp = 0 ; // tiempo promedio.
	int finalizado = 0 ;
	while (np> 10 || np <= 0 ) {
		printf ( " \ n Numero de procesos ( % d ): " , np);
		scanf ( " % d " , & np);
	}
	// para i = 0, mientras i <np, hacer: ...
	// pedimos el tamaño de cada proceso.
	para ( int i = 0 ; i <np; i ++) {
		printf ( " \ n Inserte el proceso % d : " , i + 1 );
		scanf ( " % d " , & procesos [i]);
	}
	while (cuanto <= 0 ) {
		printf ( " Tamaño de quantum: " );
		scanf ( " % d " , & quantum);
	}
	// Algoritmo RR
	while (finalizado == 0 ) {
		finalizado = 1 ; // Sí finalizado
		para ( int i = 0 ; i <np; i ++) {
			si (procesos [i]> 0 ) {
				procesos [i] - = cuántico;
				nq ++;
				printf ( " \ n Quantum [ % d ] proceso % d " , nq, i + 1 );
				si (procesos [i]> 0 ) {
					finalizado = 0 ; // No finalizado
				} más {
					tp + = nq * cuanto;
				}
			}
		}
	}
	tp = tp / np;
	printf ( " \ n Tiempo promedio RR % f : " , tp);
	return  0 ;