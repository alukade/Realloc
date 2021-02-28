#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int i, num;
	int count=0;
	int *ptr =NULL;//这里必须初始化为NULL

	do 
	{
		printf("请输入一个整数（输入-1表示结束)：");
		scanf_s("%d", &num);
		count++;

	    ptr = (int*)realloc(ptr, count * sizeof(int));//realloc中ptr值为NULL时相当于malloc,申请一块地址空间
		if (ptr == NULL)
		{
			exit(1);
		}
		ptr[count - 1] = num;
	} while (num != -1);

	printf("输入得整数分别是：");
	
	for (i = 0; i < count; i++)
	{
		printf(" %d", ptr[i]);
	}
	putchar('\n');
	free(ptr);

	return 0;
}