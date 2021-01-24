# Batalha Naval 

#### Jogo de batalha naval desenvolvido em C


### *Instruções para compilar*
#### _OBS: é necessario ter o compilador GCC do linux instalado_

#### `gcc -o bn bn.c`

### *Instruções para jogar*

#### Preencha o tabuleiro com barcos digitando as informações solicitas.
#### Quando considerar que acabou de preencher digite 0 (ZERO), como tipo de barco.
#### O programa fará as tentativas e informará quantos tiros foram dados para destruir todos os seus barcos.


## Enunciado completo do programa
<p class="has-line-data" data-line-start="0" data-line-end="20">Vocês vão jogar batalha naval contra o computador. Vocês devem fazer um programa<br>
que crie uma matriz 8x8, que será o campo do jogo. Cada posição da matriz é uma posição do<br>
tabuleiro do jogo de batalha naval. A entrada do programa é a posição de cada um dos barcos.<br>
O usuário deve digitar o barco, as coordenadas do canto esquerdo superior e a orientação,<br>
vertical ou horizontal. Vocês devem colocar os barcos no tabuleiro e mostrar o tabuleiro para o<br>
usuário na tela. Cuidem para que dois navios não ocupem uma mesma posição do tabuleiro.<br>
Caso isso ocorra, vocês devem reportar o erro para o usuário e solicitar a correção.<br>
A representação na tela deve seguir o seguinte padrão:<br>
• 0- agua<br>
• 1- submarino (1 casa do tabuleiro)<br>
• 2- cruzador (2 casas do tabuleiro)<br>
• 3- encouraçado (3 casas do tabuleiro)<br>
• 5- porta-aviões (5 casas do tabuleiro)<br>
Depois de carregado o tabuleiro, o programa tentará afundar os navios. O programa<br>
deve executar até afundar todos os navios, e deve contar quantos tiros foram dados para<br>
conseguir afundá-los. Os tiros devem ser feitos sorteando aleatoriamente as duas coordenadas<br>
do mapa. Para o sorteio aleatório vocês devem usar a função rand() que está na biblioteca<br>
stdlib.h.<br>
Quando todos os navios forem afundados vocês devem finalizar o programa e mostrar<br>
para o usuário quantos tiros foram dados.</p>

