# Batalha Naval 

#### Jogo de batalha naval desenvolvido em C


### *Instruções para compilar*
#### _OBS: é necessario ter o compilador GCC do linux instalado_

#### `gcc -o bn bn.c`

### *Instruções para jogar*

#### Preencha o tabuleiro com barcos digitando as informações solicitas.
#### Quando considerar que acabou de preencher digite 0 (ZERO), como tipo de barco.
#### O programa fará as tentativas e informará quantos tiros foram dados para destruiir todos os seus barcos.


## Enunciado completo do programa
Vocês vão jogar batalha naval contra o computador. Vocês devem fazer um programa
que crie uma matriz 8x8, que será o campo do jogo. Cada posição da matriz é uma posição do
tabuleiro do jogo de batalha naval. A entrada do programa é a posição de cada um dos barcos.
O usuário deve digitar o barco, as coordenadas do canto esquerdo superior e a orientação,
vertical ou horizontal. Vocês devem colocar os barcos no tabuleiro e mostrar o tabuleiro para o
usuário na tela. Cuidem para que dois navios não ocupem uma mesma posição do tabuleiro.
Caso isso ocorra, vocês devem reportar o erro para o usuário e solicitar a correção.
A representação na tela deve seguir o seguinte padrão:
• 0- agua
• 1- submarino (1 casa do tabuleiro)
• 2- cruzador (2 casas do tabuleiro)
• 3- encouraçado (3 casas do tabuleiro)
• 5- porta-aviões (5 casas do tabuleiro)
Depois de carregado o tabuleiro, o programa tentará afundar os navios. O programa
deve executar até afundar todos os navios, e deve contar quantos tiros foram dados para
conseguir afundá-los. Os tiros devem ser feitos sorteando aleatoriamente as duas coordenadas
do mapa. Para o sorteio aleatório vocês devem usar a função rand() que está na biblioteca
stdlib.h.
Quando todos os navios forem afundados vocês devem finalizar o programa e mostrar
para o usuário quantos tiros foram dados. 

