#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("好好学习(1/0)");
//	
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}


//int main()
//{
//	int  line = 0;
//	while (line <= 20000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	printf("好工作");
//	return  0;
//}

int Add(int x, int y)
{
	return x + y;
}

////函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//两个输入
//	printf("输入两个数字\n");
//	scanf("%d %d", &num1, &num2);
//	//相加
//	int sum = Add(num1,num2);
//	//输出
//	printf("sum=%d\n", sum);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10};
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i = i + 1;
	}
	return 0;
}