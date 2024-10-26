#include <stdio.h>

	
   void imprimir_tablero (char tablero[3][3]){
		int i,j;
			for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			tablero[i][j]=' ';
			printf("[%c]", tablero[i][j]);
		}
		printf("\n");
	}
		
		
		
	}
	int main(){
	
	char tablero[3][3], opc;
	int i,j;
	
	printf("\nBienvenido al juego del gato...\n");
	printf("Al jugador 1 se le asigna 'x', al jugador 2 '0'...\n");
	printf("Usted digitara en que posicion desea que se escriba su turno, empezando del 0 al 2 dadas en filas y columnas...");
	printf("\n Suerte...\n");
	
	
	printf("\n\nPresione J para jugar / S para salir: ");
	scanf("%c", &opc);
	
	int fila, col, ganador=0, turno=1;
	
	if(opc == 'J' || opc == 'j'){
		
		system("cls");
		
	imprimir_tablero (tablero);// llamada a funcion imprimir tablero
		do{
			if(turno%2==1){
				do{
					printf("\nJugador 1: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
					
					if(tablero[fila][col] == 'x' || tablero[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				}while(tablero[fila][col] == 'x' || tablero[fila][col] == 'o' || fila > 2 || col > 2);
				
				tablero[fila][col]='x';
				
				system("cls");//resetea lo que aparece en pantalla
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", tablero[i][j]);
					}
					printf("\n");
				}
				turno++;
			} else if(turno%2==0){
				do{
					printf("\nJugador 2: \n");
					printf("Digite fila: ");
					scanf("%d", &fila);
					printf("Digite columna: ");
					scanf("%d", &col);
					
					if(tablero[fila][col] == 'x' || tablero[fila][col] == 'o' || fila > 2 || col > 2){
						printf("\nCoordenadas no validas, pruebe otra vez.\n");
					}
				} while(tablero[fila][col] == 'x' || tablero[fila][col] == 'o' || fila > 2 || col > 2);
				
				tablero[fila][col]='o';
				
				system("cls");
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", tablero[i][j]);
					}
					printf("\n");
				}
				turno++;
			}
			
			if(tablero[0][0] == 'x' && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]
			|| tablero[1][0] == 'x' && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2]
			|| tablero[2][0] == 'x' && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2]
			
			|| tablero[0][0] == 'x' && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]
			|| tablero[0][1] == 'x' && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1]
			|| tablero[0][2] == 'x' && tablero[0][2] == tablero[1][2] && tablero[0][2] == tablero[2][2]
			
			|| tablero[0][0] == 'x' && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2]
			|| tablero[0][2] == 'x' && tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0]){
				ganador=1;
				printf("\nHA GANADO EL JUGADOR 1!\n");
			}
			
			if(tablero[0][0] == 'o' && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2]
			|| tablero[1][0] == 'o' && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2]
			|| tablero[2][0] == 'o' && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2]
			
			|| tablero[0][0] == 'o' && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0]
			|| tablero[0][1] == 'o' && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1]
			|| tablero[0][2] == 'o' && tablero[0][2] == tablero[1][2] && tablero[0][2] == tablero[2][2]
			
			|| tablero[0][0] == 'o' && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2]
			|| tablero[0][2] == 'o' && tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0]){
				ganador=1;
				printf("\nHA GANADO EL JUGADOR EL 2!\n");
			}
			
		} while(ganador != 1);
	} else {
		system("cls");//resetea las opciones mostradas
		printf("\nHa salido del juego...\n");
	}
	
	return 0;
}
	

