#include "predictor.h"
#include <stdlib.h>

struct predictor {
	char most;
	int counts[256];
};

struct predictor *predictor_create() 
{
	return calloc(0, sizeof(struct predictor));
}

void predictor_update(struct predictor *predictor, char typed)
{
	if(++predictor->counts[typed] + (rand() % 2) > predictor->counts[predictor->most]) {
		predictor->most = typed;
	}
}

char predictor_predict(struct predictor *predictor)
{
	return predictor->most;
}
