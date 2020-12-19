# include <stdio.h>

void Tempo (int v []){

printf(" Tempo percorrido na rota: 97 min.\n\n");
}

void Posicoes (int v []){

printf(" Posicoes percorridas na matriz: Posicao inicial 3,3; Percorrendo -> 2,4; 1,4; 1,5; 1,6; 1,7; 1,8; 2,8; 3,8;\n 4,7 - Posicao A = Comercio de Municao;"
       " 4,8; 4,9; 4,10; 4,11; 4,12; 3,12; 2,12; 1,12; 1,13; 1,14; 1,15; 2,15;\n 3,15; 4,15; 5,15; 5,16; 5,17; 5,18; 6,18 - Posicao F = Comercio de Alimentos; 5,19; 5,20; 6,20; 7,20; 8,20;"
       "\n 9,20; 10,20; 11,20; 12,20; 13,20; 14,20; 15,20; 16,20; 17,20; 17,19 - Posicao G = Comercio de Armas; 18,20;\n 19,20; 20,20; 20,19; 20,18;"
       " 20,17; 20,16; 20,15; 20,14; 20,13; 20,12; 20,11; 20,10; 20,9; 20,8; 20,7; 19,7;\n 18,7; 17,7; 17,8 - Posicao W = Comercio de Agua; 16,7;"
       " 15,7; 15,6; 15,5; 15,4; 14,4; 13,4; 12,4; 11,4; 10,4;\n 9,4; 8,4; 7,4; 6,4; 5,4; 4,4; 3,4 e 3,3.\n\n ");
}

void SignificadoLetras (int v[]){

printf(" Significado da Letras W-> Comercio de Agua, F-> Comercio de Alimentos,\n G -> Comercio de Armas, A -> Comercio de Municao.\n\n");
}

void Representacao (int v []){

printf(" A estrutura dessa matriz 20 X 20.\n\n");
}

void Corrida (int v []){

printf(" A corrida comeca e termina na posicao (3,3).\n\n");
}

void Nivel (int v []){

printf(" Niveis de Congestionamento: Nivel - 1 -> Tempo Gasto: +3 min, Nivel - 2 -> Tempo Gasto: +8 min,\n"
       " Nivel - 3 -> Tempo Gasto: +14 min, Nivel - 4 -> Tempo Gasto: +20 min, Nivel - 5 -> Tempo Gasto: +30 min.\n\n");
}

void Movimento (int v []){

printf(" O robo nao pode andar na diagonal somente na Vertical e na Horizontal.\n\n");
}

void Matriz (int v[]){

printf(" Definicao: 0 -> Ruas, 1 -> Caminho percorrido, 2 -> Estruturas.\n\n");
printf(" Significado da Letras W-> Comercio de Agua, F-> Comercio de Alimentos,\n"
       " G -> Comercio de Armas, A -> Comercio de Municao e Simbolo :) onde esta o robo.\n\n");

printf(" Matriz 20 Largura e 20 Altura.\n\n");
printf(".     1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20\n");
printf(". 1   0  0  0  1  1  1  1  1  0  0   0   1   1   1   1   0   0   0   0   0\n ");
printf(" 2   0  2  2  1  2  2  2  1  2  2   2   1   2   2   1   2   2   2   2   0\n ");
printf(" 3   0  2  :) 1  2  2  2  1  2  2   2   1   2   2   1   2   2   2   2   0\n ");
printf(" 4   0  2  2  1  2  2  A  1  1  1   1   1   2   2   1   2   2   2   2   0\n ");
printf(" 5   0  2  2  1  2  2  2  0  2  2   2   0   2   2   1   1   1   1   1   1\n ");
printf(" 6   0  2  2  1  2  2  2  0  2  2   2   0   2   2   0   2   2   F   2   1\n ");
printf(" 7   0  0  0  1  0  0  0  0  0  0   0   0   2   2   0   2   2   2   2   1\n ");
printf(" 8   0  2  2  1  2  2  0  2  2  2   2   0   0   0   0   0   0   0   0   1\n ");
printf(" 9   0  2  2  1  2  2  0  2  2  2   2   0   2   2   2   2   0   2   2   1\n ");
printf(" 10  0  2  2  1  2  2  0  2  2  2   2   0   2   2   2   2   0   2   2   1\n ");
printf(" 11  0  0  0  1  0  0  0  0  0  0   0   0   0   0   0   0   0   2   2   1\n ");
printf(" 12  0  2  2  1  2  2  2  2  0  2   2   0   2   2   2   2   0   2   2   1\n ");
printf(" 13  0  2  2  1  2  2  2  2  0  2   2   0   2   2   2   2   0   2   2   1\n ");
printf(" 14  0  2  2  1  2  2  2  2  0  2   2   0   2   2   2   2   0   0   0   1\n ");
printf(" 15  0  2  2  1  1  1  1  0  0  0   0   0   0   0   0   0   0   2   2   1\n ");
printf(" 16  0  2  2  0  2  2  1  2  2  2   0   2   2   0   2   2   0   2   2   1\n ");
printf(" 17  0  0  0  0  2  2  1  W  2  2   0   2   2   0   2   2   0   2   G   1\n ");
printf(" 18  0  2  2  0  2  2  1  2  2  2   0   2   2   0   2   2   0   2   2   1\n ");
printf(" 19  0  2  2  0  2  2  1  2  2  2   0   2   2   0   2   2   0   2   2   1\n ");
printf(" 20  0  0  0  0  0  0  1  1  1  1   1   1   1   1   1   1   1   1   1   1\n ");
printf("\n");
}

main (){

int v [8], i, opcao;

do{

printf(" Trabalho de Inteligencia Artificial sobre Algoritmos de Busca.\n\n");
printf(" 1- Tempo percorrido na Rota.\n");
printf(" 2- Posicao percorridas na Matriz.\n");
printf(" 3- Significado das Letras.\n");
printf(" 4- A Estrutura dessa Matriz.\n");
printf(" 5- Posicao Inicio e Final.\n");
printf(" 6- Nivel de Congestionamento.\n");
printf(" 7- Movimento do Robo.\n");
printf(" 8- Matriz.\n");
printf(" 9- Sair.\n");

scanf("%d", &opcao);
switch(opcao){

case 1:
Tempo(v);
break;

case 2:
Posicoes(v);
break;

case 3:
SignificadoLetras(v);
break;

case 4:
Representacao(v);
break;

case 5:
Corrida (v);
break;

case 6:
Nivel(v);
break;

case 7:
Movimento(v);
break;

case 8:
Matriz (v);
break;
}

}while (opcao != 9);
}
