#include <stdio.h>
// stdin  std 标准 输入流
// stdout 输出流
// stderr 错误流
int main()
{
	//printf("please input the value a:\n");
	fprintf(stdout, "please input the value a:\n");
	//printf("hello world!\n");
	int a;
	//scanf("%d", &a);
	fscanf(stdin,"%d", &a);
	if(a<0) {
		fprintf(stderr, "the value must > 0\n");
		return 1;
	}
	//printf("input value is :%d\n", a);
	return 0;
}

