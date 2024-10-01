//
// Created by thierry on 9/26/24.
//

#ifndef ALEATORIO_H
#define ALEATORIO_H
#include "es.h"
//Header file for aleatorio.c


// estrutura para definir um dispositivo

typedef struct aleatorio_t aleatorio_t;

// cria um gerador de números aleatórios com a semente seed
aleatorio_t *genrand(unsigned int seed);

// destroi o gerador de números aleatórios
void freerand(aleatorio_t *self);

//verificador de erro
err_t aleatorio_leitura(void *disp, int id, int *pvalor);



#endif //ALEATORIO_H
