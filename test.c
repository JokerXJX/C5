#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<string.h>
//int main()
//{
//	char a[100], b[100], c[100],*p;
//	int i = 0, j = 0, k = 0;
//	printf("string a:\n");
//	scanf("%s", &a);
//	printf("string b:\n");
//	scanf("%s", &b);
//	while (a[i] != '\0' && b[j] != '\0')
//	{
//		if (a[i] < b[j])
//		{
//			c[k] = a[i];
//			i++;
//		}
//		else
//		{
//			c[k] = b[j];
//			j++;
//		}
//		k++;
//	}
//	c[k] = '\0';
//	if (a[i] == '\0')
//		p = b + j;
//	else
//		p = a + i;
//	strcat(c, p);
//	puts(c);
//	return 0;
//}


//#include<string.h>
//#include<windows.h>
//char* insert(char s[], char t[], int i)
//{
//	char str[100];
//	if (i<0 || i>(int)strlen(s))
//	{
//		printf("error\n");
//		exit(1);//�������˳�
//	}
//	if (strlen(s)==0)
//	{
//		strcpy(s, t);
//	}
//	else if (strlen(t) != 0)
//	{
//		strncpy(str, s, i);//��s��ǰi������str��
//		str[i] = '\0';//���ƺ�ӽ�����
//		strcat(str, t);//��t���ַ������ӵ�str
//		strcat(str, (s + i));//��s��ʣ���ַ������ӵ�str
//		strcpy(s, str);//��str�ַ������Ƶ�s
//		return s;
//	}
//}
//int main()
//{
//	char a[100], b[100], c[100], * p;
//	int k = 0;
//	printf("str1:%s\n");
//	gets(a);
//	printf("str2:%s\n");
//	gets(b);
//	printf("position\n");
//	scanf("%d", &k);
//	insert(a, b, k);
//	puts(a);
//	return 0;
//}

//int main()
//{
//	float arr[100] = { 0 };
//	int i = 0;
//	int n = 0;
//	float sum = 0;
//	printf("ѧ������Ϊ��\n");
//	scanf("%d", &n);
//	printf("������ѧ����ߣ�\n");
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum += arr[i];
//	}
//	printf("ƽ�����Ϊ��%.2f", sum / n);
//	return 0;
//}

#define swap(a,b) {int c;c=a;a=b;b=c;}
int main()
{
	int a[10], b[10], i, j;
	printf("input a:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("input b:\n");
	for (j = 0; j < 10; j++)
		scanf("%d", &b[j]);
	printf("a is:\n");
	for (i = 0; i < 10; i++)
		printf("%d,",a[i]);
	printf("\nb is:\n");
	for (j = 0; j < 10; j++)
		printf("%d,",b[j]);
	for (i = 0; i < 10; i++)
		swap(a[i], b[j]);
	printf("\nnow a is:\n");
	for (i = 0; i < 10; i++)
		printf("%d,",a[i]); 
	printf("\nnow b is:\n");
	for (j = 0; j < 10; j++)
		printf("%d,",b[j]);
	return 0;
}