#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

	int exercicio;

	do{	
		printf("\nEscolha um dos exercicios abaixo para executa-lo\n");
		printf("\n1- Exercicio 1\n");
		printf("\n2- Exercicio 2\n");
		printf("\n4- Exercicio 4\n");
		printf("\n5- Exercicio 5\n");
		printf("\nDigite o numero do exercicio escolhido: ");
		scanf("%d",&exercicio);

		if (exercicio > 5 || exercicio == 3) { //acrescentei o 3 também aqui para voltar no menu
			printf("Opcao invalida...");
			system("pause");
			system("cls");
		}
			
	

	if (exercicio==1){

    int l, a, c; 
    float z;

    printf("Entre com valor de L: ");
    scanf("%i", &l);

    printf("Entre com valor de A: ");
    scanf("%i", &a);

    printf("Entre com valor de C: ");
    scanf("%i", &c);

    z = (l+a * 2.3) / c;

    printf("O valor de Z = %0.3f", z);

    
}
		if(exercicio==2){
			float altura, peso_i;
		char sexo;

			printf("Qual seu sexo? F para feminino, M para masculino: ");
			sexo=getche(); //scanf("%c", &sexo);

			printf("\n\nDigite a sua altura: ");
			scanf("%f", &altura);


				switch (sexo) {

					 case 'M': {
            		peso_i = (450.7 * altura) / 10;
            		printf("\n\nSeu peso ideal e: %.2f", peso_i);
            		break;            
        }
        			case 'm': {
            		 peso_i = (450.7 * altura) / 10;
            		 printf("\n\nSeu peso ideal e: %.2f", peso_i);
            		break;  
        }
        			case 'F': {
            		 peso_i = (400.7 * altura) / 10;
            		 printf("\n\nSeu peso ideal e: %.2f", peso_i);
            		 break;
        }
        			case 'f': {
            		 peso_i = (400.7 * altura) / 10;
            		 printf("\n\nSeu peso ideal e: %.2f", peso_i);
            		 break;
        }

				}
				
		}

						if (exercicio==4){
							int conta; //tirei a variavel numero_de_soma,
							float y, resultado;

							conta=1;
							resultado=0;

							  while (conta<=20){ //coloquei a variavel conta aqui 

							  	printf("\ndigite o valor do numero:\n");
							  	scanf("%f" , &y);

							  	resultado= resultado+y;
							  	conta++;
							  }
							  printf("\n O resultado é: %5f:", resultado);
							  system("pause");
							  

						}else{printf("\nSistema encerrado\n\n");}

	} while (exercicio != 5); 					
	return(0);
	}
