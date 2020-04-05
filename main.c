#include <stdio.h>
#include "display.h"
#include "predictor.h"

int main(void)
{
	struct predictor *p = predictor_create();
	char c;
	while((c = getchar()) != EOF) {
		predictor_update(p, c);
		printShrek(predictor_predict(p));
	}
	return 0;
}
