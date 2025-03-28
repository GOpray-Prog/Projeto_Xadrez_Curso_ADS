#include <stdio.h>
#include <string.h>

char coluna_inicial;  // Coluna inicial da peça
int linha_inicial;    // Linha inicial da peça
char direcao;
int casas = 0;
int opcao = 0;

// Movimentaçao do Cavalo com estrutura de repetiçao e multiplas variaveis
void moverCavalo(){

if (direcao == 'f' || direcao == 'F')
{
    for (int i = 1, j = 1; i <= casas; i++, j++)
            {
                    printf("Cavalo pulou para Frente.\n");
            
                if (j == 2)
                {
                    printf("Cavalo pulou para Direita!\n");
                }               
            }
} else if (direcao == 't' || direcao =='T')
{
    for (int i = 1, j = 1; i <= casas; i++, j++)
            {
                    printf("Cavalo pulou para Frente.\n");
            
                if (j == 2)
                {
                    printf("Cavalo pulou para Esquerda!\n");
                }               
            }
} else if (direcao == 'd' || direcao == 'D')
{
    for (int i = 1, j = 1; i <= casas; i++, j++)
            {
                    printf("Cavalo pulou para Tras.\n");
            
                if (j == 2)
                {
                    printf("Cavalo pulou para Direita!\n");
                }               
            }
} else if (direcao == 'e' || direcao == 'E')
{
    for (int i = 1, j = 1; i <= casas; i++, j++)
            {
                    printf("Cavalo pulou para Tras.\n");
            
                if (j == 2)
                {
                    printf("Cavalo pulou para Esquerda!\n");
                }               
            }
}

}
// Movimento do Bispo com estrutura de repetição recursiva aninhada
void moverBispo(int interno){
if (interno > 0)
{
    moverBispo(interno - 1);

    if (direcao == 'l' || direcao == 'L')
    {
        printf("O Bispo pulou %d casa para Frente.\n", interno);
    } else if (direcao == 'o' || direcao == 'O')
    {
        printf("O Bispo pulou %d casa para Frente.\n", interno);
    } else if (direcao == 'h' || direcao == 'H')
    {
        printf("O Bispo pulou %d casa para Tras.\n", interno);
    } else if (direcao == 'j' || direcao =='J')
    {
        printf("O Bispo pulou %d casa para Tras.\n", interno);
    }       
}
} // Movimento do Bispo com estrutura de repetição recursiva aninhada
void externoBispo(int externo){
    if (externo > 0)
    {
      moverBispo(1);
      externoBispo(externo - 1);

      if (direcao == 'l' || direcao == 'L')
      {
        printf("O Bispo pulou %d casa para Direita.\n", externo);
      }else if (direcao == 'o' || direcao == 'O')
      {
        printf("O Bispo pulou %d casa para Esquerda.\n", externo);
      } else if (direcao == 'h' || direcao == 'H')
      {
        printf("O Bispo pulou %d casa para Direita.\n", externo);
      } else if (direcao == 'j' || direcao == 'J')
      {
        printf("O Bispo pulou %d casa para Esquerda.\n", externo);
      }     
}            
}

// Estrutura de repetiçao Recursiva para o movimento da torre
void moverTorre(int n){

    if (n > 0)
    {
        moverTorre(n - 1);

        if (direcao == 'f' || direcao == 'F')
        {
            printf("A Torre pulou %d casa para Frente.\n", n);
        } else if (direcao == 't' || direcao == 'T')
        {
            printf("A Torre pulou %d casa para Tras.\n", n);
        } else if (direcao == 'd' || direcao == 'D')
        {
            printf("A Torre pulou %d casa para Direita.\n", n);
        } else if (direcao == 'e' || direcao == 'E')
        {
            printf("A Torre pulou %d casa para Esquerda.\n", n);
        }
    }
    }

// Estrutura de repetiçao Recursiva para o movimento da Rainha
void moverRainha(int n){

    if (n > 0)
    {
        moverRainha(n - 1);
        
        if (direcao == 'f' || direcao == 'F')
        {
            printf("A Rainha pulou %d casa para Frente.\n", n);
        } else if (direcao == 't' || direcao == 'T')
        {
            printf("A Rainha pulou %d casa para Tras.\n", n);
        } else if (direcao == 'd' || direcao == 'D')
        {
            printf("A Rainha pulou %d casa para Direita.\n", n);
        } else if (direcao == 'e' || direcao == 'E')
        {
            printf("A Rainha pulou %d casa para Esquerda.\n", n);
        }else if (direcao == 'l' || direcao == 'L')
        {
            printf("A Rainha pulou %d casa para Frente Diagonal Direita.\n", n);
        } else if (direcao == 'o' || direcao == 'O')
        {
            printf("A Rainha pulou %d casa para Frente Diagonal Esquerda.\n", n);
        } else if (direcao == 'h' || direcao == 'H')
        {
            printf("A Rainha pulou %d casa para Tras Diagonal Direita.\n", n);
        }else if (direcao == 'j' || direcao == 'J')
        {
            printf("A Rainha pulou %d casa para Tras Diagonal Esquerda.\n", n);
        }
    }
    }

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
            moverTorre(casas);
            linha_inicial += casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'T':
        case 't':
            moverTorre(casas);
            linha_inicial -= casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'D':
        case 'd':      
            moverTorre(casas);
            coluna_inicial += casas;
            printf("A Torre agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'E':
        case 'e':
            moverTorre(casas);  
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
            externoBispo(casas);
            coluna_inicial += casas;
            linha_inicial += casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'O':
        case 'o':
            externoBispo(casas);
            coluna_inicial -= casas;
            linha_inicial += casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'H':
        case 'h':
            externoBispo(casas);
            coluna_inicial += casas;
            linha_inicial -= casas;
            printf("O Bispo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'J':
        case 'j':
            externoBispo(casas);
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
        printf("T para Tras?\n");
        printf("D para Direita?\n");
        printf("E para Esquerda?\n");
        printf("L para Frente Diagonal Direita?\n");
        printf("O para Frente Diagonal Esquerda?\n");
        printf("H para Tras Diagonal Direita?\n");
        printf("J para Tras Diagonal Esquerda?\n");
        scanf(" %c", &direcao);

        printf("\nQuantas casas deseja se mover?\n");
        scanf("%d", &casas);
        getchar();

        switch (direcao) {
        case 'F':
        case 'f':
            moverRainha(casas);
            linha_inicial += casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'T':
        case 't':
            moverRainha(casas);
            linha_inicial -= casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'D':
        case 'd':
            moverRainha(casas);    
            coluna_inicial += casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'E':
        case 'e':
            moverRainha(casas);
            coluna_inicial -= casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'L':
        case 'l':
            moverRainha(casas);
            coluna_inicial += casas;
            linha_inicial += casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'O':
        case 'o':
            moverRainha(casas);
            coluna_inicial -= casas;
            linha_inicial += casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'H':
        case 'h':
            moverRainha(casas);
            coluna_inicial += casas;
            linha_inicial -= casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'J':
        case 'j':
            moverRainha(casas);
            coluna_inicial -= casas;
            linha_inicial -= casas;
            printf("A Rainha agora esta na posicao %c%d\n", coluna_inicial, linha_inicial);
            break;

        default:
            printf("Movimento inválido!\n");
            break;
        }

    }else if (opcao == 4) {  // Movimentação do Cavalo
        printf("Conforme o seu tabuleiro, para onde desaja mover o Cavalo?\n");
        printf("F para Frente Frente Direita?\n");
        printf("T para Frente Frente Esquerda?\n");
        printf("D para Tras Tras Direita?\n");
        printf("E para Tras Tras Esquerda?\n");
        scanf(" %c", &direcao);

        casas = 2;

        switch (direcao) {
        case 'F':
        case 'f':
            moverCavalo();
            coluna_inicial += casas - 1;
            linha_inicial += casas;
            printf("O Cavalo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
            break;

        case 'T':
        case 't':
           moverCavalo();
           coluna_inicial -= casas -1 ;
           linha_inicial += casas;
           printf("O Cavalo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
           break;

        case 'D':
        case 'd':
           moverCavalo();
           coluna_inicial += casas - 1;
           linha_inicial -= casas;
           printf("O Cavalo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
           break;

        case 'E':
        case 'e':
           moverCavalo();
           coluna_inicial -= casas - 1;
           linha_inicial -= casas;
           printf("O Cavalo agora está na posição %c%d\n", coluna_inicial, linha_inicial);
           break;

        }
    }
    
}

int main() 
{

    char continua[2]; 
    
    // Exemplo de um tabuleiro de xadrez
    printf("Este é seu Tabuleiro\n");
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
    printf("\nEscolha sua Peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &opcao);

    ponto_inicial();
    ponto_final(); 

    printf("\nDeseja Continuar Jogando? (S / N)\n");
    scanf("%s", &continua[0]);

    if (continua[0] == 'n' || continua[0] == 'N')
    {
        printf("Fim de Jogo");
    }
    
    } while (continua[0] == 's' || continua[0] == 'S'); // Estrutura de repetiçao para um jogo contiuo ou encerramento.


    return 0;
}
