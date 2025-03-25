# Simulador de Movimentos de Peças de Xadrez

## Descrição
Este projeto é um programa em linguagem C que simula os movimentos das peças de xadrez Torre, Bispo e Rainha em um tabuleiro de 8x8. O usuário pode escolher a peça, definir a posição inicial e movimentá-la conforme as regras do jogo.

## Funcionalidades
- Exibição de um tabuleiro de xadrez vazio.
- Escolha da peça (Torre, Bispo ou Rainha) para movimentação.
- Definição da posição inicial da peça.
- Escolha da direção e número de casas para movimentação.
- Simulação do deslocamento da peça no tabuleiro.
- Possibilidade de continuar jogando após cada movimento.

## Como Executar
1. Certifique-se de ter um compilador C instalado (GCC recomendado).
2. Baixe o arquivo fonte `xadrez.c`.
3. Compile o programa com o seguinte comando:
   ```sh
   gcc -o xadrez xadrez.c -Wall
   ```
4. Execute o programa:
   ```sh
   ./xadrez
   ```

## Controles
- Para cada rodada, escolha uma peça digitando o número correspondente:
  - 1 - Torre
  - 2 - Bispo
  - 3 - Rainha
- Insira a posição inicial no formato `coluna(letra)linha(número)`, por exemplo, `b1`.
- Escolha a direção de movimento conforme as opções apresentadas.
- Insira o número de casas que deseja mover.
- Ao final de cada jogada, escolha `S` para continuar ou `N` para encerrar o jogo.

## Melhorias Futuras
- Implementação de todas as peças do xadrez.
- Validação de movimentos ilegais.
- Representação visual melhorada do tabuleiro.
- Interface gráfica para facilitar a interação.

## Autor
Desenvolvido por [Seu Nome].

