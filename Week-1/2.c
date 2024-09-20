#include <stdio.h>
int main() {
	int ipt, sum = 0, len = 0;
	while (1) {
		scanf("%d", &ipt);
		if (ipt < 0)
			break;
		if (ipt > 100)
			continue;
		sum += ipt;
		len++;
	}
	printf("합: %d, 평균: %f, 갯수: %d\n", sum, (float)sum / len, len);
	return 0;
}
