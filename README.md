# theGameOfVelha
Jogo da velha clássico, mas com trapaças

## Códigos

> [!NOTE]
> Os códigos não implementados realizam o mesmo efeito do ```pass-or-repass```, cheat 4.

| Está implementado? | Código               | O que faz?                                                                                                                                                                                                                                                            |
| :----------------: | :------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|        :white_check_mark:         | ```bit-flip```       | Troca ```X``` por ```O``` e vice-versa                                                                                                                                                                                                                                |
|        :x:         | ```trixie```         | Pede ao usuário um número de ```1``` a ```6```, se esse número for igual ao número aleatório gerado pelo computador, então o jogador ganha a partida instantaneamente, caso contrário, é passada a vez para o outro jogador jogar normalmente ou trapacear também. |
|        :x:         | ```random```         | Limpa o tabuleiro e posiciona um ```X``` e um ```O``` nele                                                                                                                                                                                                            |
|        :white_check_mark:         | ```pass-or-repass``` | Passa a vez para o outro jogador                                                                                                                                                                                                                                      |
|        :x:         | ```mines```          | Planta uma bomba em uma posicao, se alguém jogar nela, perde instantaneamente                                                                                                                                                                                         |
|        :x:         | ```ai```             | Deixa o computador jogar em uma posição aleatória pelo jogador atual                                                                                                                                                                                                  |

## Setup
1. Clone o repositório:
   ```bash
   git clone https://github.com/gean-martins/theGameOfVelha.git
   cd theGameOfVelha
   ```
2. Compile e execute:
   ```bash
   gcc *.c -o theGameOfVelha
   ./theGameOfVelha
   ```
