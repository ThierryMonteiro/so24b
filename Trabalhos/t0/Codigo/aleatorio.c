//
// Created by thierry on 9/26/24.
//

#include "aleatorio.h"
#include <stdlib.h>

struct aleatorio_t {
  unsigned int seed;
 } typedef aleatorio_t;

aleatorio_t *genrand(unsigned int seed) {

  aleatorio_t *self;
  self = malloc(sizeof(*self));
  self->seed = seed;
  srand(seed);

  return self;

 }

void freerand(aleatorio_t *self) {
   free(self);
 }

err_t aleatorio_leitura(void *disp, int id, int *pvalor) {
   err_t err = ERR_OK;
   switch (id) {
     case 0:
       *pvalor = rand();
       break;
     default:
       err = ERR_END_INV;
   }
   return err;
 }