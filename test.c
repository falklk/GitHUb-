#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch =getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/n):>");
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
		printf("����\n");
		printf("��������\n");
	}
	else {
		printf("δ����\n");
	}*/
	//int age = 0;
	//scanf("%d", &age);
	//if (age < 18)
	//	printf("������\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 40)
	//	printf("����");
	//else if (age > 40 && age < 60)
	//	printf("׳��\n");
	//else if (age >= 60 && age<=100)
	//	printf("����\n");
	//else
	//	printf("������\n");
	/*
	int age = 0;
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");
	printf("����Ϸ\n");*/
	
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

//1.�����������������壬�淶��
//2.�ո񣬿��У�����

//int main()
//{
	//char firstname[20] = {20};
	//char first_name[20] = { 20 };
	//char FirstName[20] = { 20 };

//	int a = 10;
//	int b = 20;
//
//	return 0��
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
//		printf("����һ \n");
//		break;
//
//	case 2:
//		printf("����һ \n");
//		break;
//
//	case 3:
//		printf("����һ \n");
//		break;
//	
//	case 4:
//		printf("������\n");
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
//		printf("Ԫ��");
//		break;
//	default:
//		printf("����");
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
//		printf("Ԫ��");
//		break;
//	default:
//		printf("����");
//
//	}
//}


//whileѭ���е�
//break���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
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


	//��һ������
	/*char password[20] = { 0 };
	printf("������һ������");
	scanf("%s", password);*/
	//getchar();  //��ȡ��\n
	/*int ch = 0;
	while ((ch =getchar())!='\n')
	{
		;
	}
	
	printf("��ȷ������:(Y/N)");
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
//	//ֻ��ӡ�����ַ�
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



















