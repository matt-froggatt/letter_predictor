#ifndef PREDICTOR_H
#define PREDICTOR_H

struct predictor;


struct predictor *predictor_create();

void predictor_update(struct predictor *predictor, char typed);

char predictor_predict(struct predictor *predictor);


#endif
