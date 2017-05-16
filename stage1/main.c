#include <stdio.h>
#include "max.h"
#include "min.h"

int main()
{
	int a = 1;
	int b = 2;
	int maxNumber = max(a,b);
	int minNumber = min(a,b);
	printf("%d和%d最大数为:%d\n", a, b, maxNumber);
	printf("%d和%d最小数为:%d\n", a, b, minNumber);
	return 0;
}
