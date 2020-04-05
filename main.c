#include <stdio.h>
#include <ctype.h>
#include "display.h"
#include "predictor.h"

int main(void)
{
	struct predictor *p = predictor_create();
	char c;
	while((c = getchar()) != EOF) {
		if(!isspace(c)) {
			predictor_update(p, c);
			printShrek(predictor_predict(p));
		}
	}
	return 0;
}
