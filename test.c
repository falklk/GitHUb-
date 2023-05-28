#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch =getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/n):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		//printf("No\n");
//	}
//	return 0;
//
//
//}

#include<stdio.h>

//int main()
//{
	/*int  age = 10;
	if (age > 18) {
		printf("成年\n");
		printf("不能饮酒\n");
	}
	else {
		printf("未成年\n");
	}*/
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("青少年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 40)
	//	printf("中年");
	//else if (age > 40 && age < 60)
	//	printf("壮年\n");
	//else if (age >= 60 && age<=100)
	//	printf("老年\n");
	//else
	//	printf("老寿星\n");
	/*
	int age = 0;
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");
	printf("打游戏\n");*/
	
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//
//		if (b == 2)
//			printf("hehe\n");
//
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}

//1.变量的命名（有意义，规范）
//2.空格，空行，换行

//int main()
//{
	//char firstname[20] = {20};
	//char first_name[20] = { 20 };
	//char FirstName[20] = { 20 };

//	int a = 10;
//	int b = 20;
//
//	return 0；
//
//}

//int test()
//{
//	int a = 3;
//
//	if (a == 3)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i<100)
//	{
//		if (1 == i % 2) 
//			printf("%d \t", i);
//		
//		i++;
//
//	}
//	return 0;
//}


//int  main()
//{
//	int day = 4;
//	switch (day)
//	{
//	case 1:
//		printf("星期一 \n");
//		break;
//
//	case 2:
//		printf("星期一 \n");
//		break;
//
//	case 3:
//		printf("星期一 \n");
//		break;
//	
//	case 4:
//		printf("星期四\n");
//		break;

//#include <stdio.h>
//
//int main() {
//	char ch = '\n';
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'A':
//	case 'O':
//	case 'I':
//	case 'U':
//	case 'E':
//		printf("元音");
//		break;
//	default:
//		printf("辅音");
//
//	}
//}


//int main()
//{
//	int n = 1;
//	int m = 2;    //3
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;        //2
//		case 2:m++; n++;   //5   3
//			/*break;*/
//		}
//
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//
//	}
//	printf("m =%d,n=%d\n", m, n);
//	return 0;
//}



//#include <stdio.h>
//
//int main() {
//	char ch = '\n';
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'A' | 'a':
//	case 'O' | 'o':
//	case 'I' | 'i':
//	case 'U' | 'u':
//	case 'E' | 'e':
//		printf("元音");
//		break;
//	default:
//		printf("辅音");
//
//	}
//}


//while循环中的
//break是用于永久的终止循环
//continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//		return 0;
//}

//int main()
//{
	/*int ch = getchar();
	printf("%c\n", ch);
	putchar(ch);
	return 0;*/
	
	/*int ch = 0;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);

	}*/


	//举一个例子
	/*char password[20] = { 0 };
	printf("请输入一个密码");
	scanf("%s", password);*/
	//getchar();  //读取了\n
	/*int ch = 0;
	while ((ch =getchar())!='\n')
	{
		;
	}
	
	printf("请确认密码:(Y/N)");
	int ret=getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}*/

//	char ch = '\0';
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	//只打印数字字符
//
//	return 0;
//}


//#include <stdio.h>
//
//	int main()
//	{
//		char ch = 'ch';
//		scanf("%c", &ch);
//		int j = 0;
//		while (j<3)
//		{
//			int i = 0;
//			while (i < 3)
//			{
//				printf("%c", ch);
//				i++;
//			}
//			printf("\n");
//			j++;
//		}
//		return 0;
//	}

#include <stdio.h>
int main()
{
	float num = 0;
	scanf("%.2f", &num);
	printf("%.2f", num);
}



















