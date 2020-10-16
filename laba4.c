#include <stdio.h>

int main (){

	int step, N=5, count, i, j, ms [5]{ 3, 5, 4, 2, 7 };
	

	step = N / 2 + 1;

	while (step > 0) {

		for (i = 0; i < (N - step); i++) {
			j = i;
			while ((j >= 0) && (ms[j] > ms[j + step])) {

			count = ms[j];
			ms[j] = ms[j + step];
			ms[j + step] = count;
			j--;;
			}
		}
	step = step / 2;
	}

	for (i = 0; i < N; i++) {
		printf("%d\t", ms[i]);
	}
	return 0;
}
