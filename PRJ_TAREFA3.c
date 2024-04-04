#include <stdio.h>
#include <stdlib.h>

/*3) Escreva um algoritmo que leia a idade de um candidato e a altura (em
cm) e sexo (Feminino=1 e Masculino=2). Em seguida, validar a situação da
pessoa:
- Se a altura for maior ou igual a 180 cm e a idade for superior a 16 anos e
sexo for igual a 1 (Feminino) imprimir a mensagem: apto a jogar no time
Feminino Juvenil de Basquete.
- Se a altura for maior ou igual a 180 cm e a idade for superior a 16 anos e
sexo for igual a 2 (Masculino) imprimir a mensagem: apto a jogar no time
Masculino Juvenil de Basquete.
- Outros casos imprimir: Não apto.
*/
int main(){
   int idade, altura, sexo;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite sua altura em cm: ");
    scanf("%d", &altura);
    printf("\nDigite 1 para FEMININO e 2 para MASCULINO: ");
    scanf("%d", &sexo);

    if(altura >= 180 && idade > 16 && sexo == 1){
        printf("\nApto a jogar no time FEMININO JUVENIL DE BASQUETE.");
    }
    else if(altura >= 180 && idade > 16 && sexo == 2){
        printf("\nApto a jogar no time MASCULINO JUVENIL DE BASQUETE.");
    }
    else{
        printf("\nNao apto.");
    }
    /*1) Escreva um programa em C para obter o resultado das eleições para o
2º turno. O programa deve solicitar e registrar o voto de um número
indeterminado de pessoas. Para isso será exibido um menu com as
seguintes opções:
1 – Voto Candidato A
2 – Voto Candidato B
3 – Apurar Resultado
4 - Sair
Conforme a escolha de cada eleitor, o programa deve contabilizar os
votos que cada candidato recebe. Ao ser escolhida a opção “Apurar
Resultado”, será mostrado o resultado do candidato vencedor,
considerando um esquema de votação simples, ou seja, quem tiver o
maior número de fotos é o ganhador.

*/
#include <stdio.h>
#include <stdlib.h>

int main (){
int op = 0;
int contA = 0;
int contB = 0;

    printf("\nInicio do Programa:\n");
    do{
        printf("1-Voto Candidato A \n2-Voto Candidato B \n3-Apurar Resultado \n4-Sair\n");
        scanf("%d", &op);
        if(op == 1){
            contA++;
        } 
        else if(op == 2){
            contB++;
        }
        else if(op == 4){
            printf("\nPrograma encerrado");
        }
        else {
            if(contA > contB){
                printf("\nO candidato A venceu. \nNumero de votos: %d x %d\n\n", contA, contB);
            }
            else if(contA<contB){
                printf("\nO candidato B venceu. \nNumero de votos: %d x %d\n\n", contA, contB);
            }
            else if(op>4){
                printf("\nSelecione uma opcao valida.");
            }
            else {
                printf("\nO resultado ficou empatado.\n");
            }
        }
    }
    while (op != 4);{
    }

return 0;
    }