#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

 C语言 内存

 1 常量
 2 静态变量
 3 堆
 4 栈

 */

int main() {


	char * a = "123";	// 其中 "123" 是常量，在同一个可执行文件／动态库中地址是相同的
						// a 栈指针变量 , 指向 "123" 常量的地址
	
	char b[] = "123";	// b 栈char数组，长度4，内容 123\0

	printf("a == \"123\" ? %s \n", a == "123" ? "true" : "false" );
	
	printf("a == b ? %s \n", a == b ? "true" : "false" );

	printf("b == \"123\" ? %s \n", b == "123" ? "true" : "false" );

	printf("a 的地址 0x%x\n", a);
	printf("\"123\" 的地址 0x%x\n", "123");
	printf("b 的地址 0x%x\n", b);

	{
		char * m = (char *) malloc(128);

		strcpy(m,"123");

		printf("m == \"123\" ? %s \n", m == "123" ? "true" : "false" );

		free(m);

	}

	return 0;
}