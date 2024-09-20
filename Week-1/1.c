#include <stdio.h>
int main() {
	int month;
	scanf("%d", &month);
	switch (month/3)
	{
	case 1:
	{
		puts("봄입니다.");
			break;
	}
	case 2:
	{
		puts("여름입니다.");
		break;
	}
	case 3:
		puts("가을입니다.");
	default:
		puts("겨울입니다.");
		break;
	}
return 0;
}
