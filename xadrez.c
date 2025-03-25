#include <stdio.h>
#include <string.h>

char coluna_inicial;  // Coluna inicial da peça
int linha_inicial;    // Linha inicial da peça
int final = 0;
char peca;
char direcao;
int casas = 0;
int contador = 1;
int opcao = 0;

void ponto_inicial(){

    printf("\nConforme seu tabuleiro, digite o ponto inicial (ex: b1):\n");
    scanf(" %c%d", &coluna_inicial, &linha_inicial); 
    getchar(); 
}

void ponto_final(){

    
    if (opcao == 1) {  // Movimentação da Torre
        printf("\nConforme seu tabuleiro, para onde deseja mover sua Torre?\n");
        printf("F para Frente?\n");
        printf("T para Trás?\n");
        printf("D para Direita?\n");
        printf("E para Esquerda?\n");
        scanf(" %c", &direcao);


        printf("\nQuantas casas deseja se mover?\n");
        scanf("%d", &casas);
        getchar();

        switch (direcao) {
        case 'F':
        case 'f':

        while (contador <= casas){ 
            printf("A Torre pulou %d casa para Frente.\n", contador);
            contador++;
            }
            linha_inicial += casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'T':
        case 't':

        while (contador <= casas){ 
            printf("A Torre pulou %d casa para Tras.\n", contador);
            contador++;
            }
            linha_inicial -= casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'D':
        case 'd':      

        while (contador <= casas){ 
            printf("A Torre pulou %d casa para Direita.\n", contador);
            contador++;
            }
            coluna_inicial += casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'E':
        case 'e':
     
        while (contador <= casas){ 
            printf("A Torre pulou %d casa para Esquerda.\n", contador);
            contador++;
            }
            coluna_inicial -= casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        default:
            printf("Movimento inválido!\n");
            break;
        }

    } else if (opcao == 2) {  // Movimentação do Bispo
        printf("\nConforme seu Tabuleiro, para onde deseja mover seu Bispo?\n");
        printf("L para Frente Diagonal Direita?\n");
        printf("O para Frente Diagonal Esquerda?\n");
        printf("H para Trás Diagonal Direita?\n");
        printf("J para Trás Diagonal Esquerda?\n");
        scanf(" %c", &direcao);

        

        printf("\nQuantas casas deseja se mover?\n");
        scanf("%d", &casas);
       

        switch (direcao) {
        case 'L':
        case 'l':
        do
        {
          printf("O Bispo pulou %d casa para Frente_Diagonal_Direita.\n", contador);
          contador++;
        } while (contador <= casas);

            coluna_inicial += casas;
            linha_inicial += casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'O':
        case 'o':
            do
      {
        printf("O Bispo pulou %d casa para Frente_Diagonal_Esquerda.\n", contador);
        contador++;
      } while (contador <= casas);

            coluna_inicial -= casas;
            linha_inicial += casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'H':
        case 'h':
           do
      {
        printf("O Bispo pulou %d casa para Tras Diagonal Direita.\n", contador);
        contador++;
      } while (contador <= casas);

            coluna_inicial += casas;
            linha_inicial -= casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'J':
        case 'j':
        do
        {
          printf("O Bispo pulou %d casa para Tras Diagonal Esquerda.\n", contador);
          contador++;
        } while (contador <= casas);

            coluna_inicial -= casas;
            linha_inicial -= casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        default:
            printf("Movimento inválido!\n");
            break;
        }

    } else if (opcao == 3) {  // Movimentação da Rainha
        printf("\nConforme seu tabuleiro, para onde deseja mover sua Rainha?\n");
        printf("F para Frente?\n");
        printf("T para Trás?\n");
        printf("D para Direita?\n");
        printf("E para Esquerda?\n");
        printf("L para Frente Diagonal Direita?\n");
        printf("O para Frente Diagonal Esquerda?\n");
        printf("H para Trás Diagonal Direita?\n");
        printf("J para Trás Diagonal Esquerda?\n");
        scanf(" %c", &direcao);


        printf("\nQuantas casas deseja se mover?\n");
        scanf("%d", &casas);
        getchar();

        switch (direcao) {
        case 'F':
        case 'f':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Frente.\n", contador);
            }
            linha_inicial += casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'T':
        case 't':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Tras.\n", contador);
            }
            linha_inicial -= casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'D':
        case 'd':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Direita.\n", contador);
            }
            coluna_inicial += casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'E':
        case 'e':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Esquerda.\n", contador);
            }
            coluna_inicial -= casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'L':
        case 'l':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Frente Diagonal Direita.\n", contador);
            }
            coluna_inicial += casas;
            linha_inicial += casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'O':
        case 'o':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Frente Diagonal Esquerda.\n", contador);
            }
            coluna_inicial -= casas;
            linha_inicial += casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'H':
        case 'h':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Tras Diagonal Direita.\n", contador);
            }
            coluna_inicial += casas;
            linha_inicial -= casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'J':
        case 'j':
        
            for (contador; contador <= casas ; contador++)
            {
                printf("A Rainha pulou %d casa para Tras Diagonal Esquerda.\n", contador);
            }
            coluna_inicial -= casas;
            linha_inicial -= casas;
            printf("A Rainha agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        default:
            printf("Movimento inválido!\n");
            break;
        }
    }
}

int main() 
{

    char continua[2]; 
    
    printf("\nEste é seu Tabuleiro\n");
    printf("   a b c d e f g h  \n");
    for (int linha = 8; linha >= 1; linha--)
    {
       printf("%d  ", linha);
       for (int coluna = 0; coluna < 8; coluna++)
       {
        printf(". ");
       }
       printf(" %d\n", linha);
    }
    
    printf("   a b c d e f g h  \n");

   
    

    do
    {
    
    printf("\nEscolha a peça Sua Peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    scanf("%d", &opcao);

    ponto_inicial();
    ponto_final(); 

    printf("\nDeseja Continuar Jogando? (S / N)\n");
    scanf("%s", &continua[0]);

    if (continua[0] == 'n' || continua[0] == 'N')
    {
        printf("Fim de Jogo");
    }
    
    } while (continua[0] == 's' || continua[0] == 'S');


    return 0;
}
