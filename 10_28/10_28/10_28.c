#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


// 十六进制转十进制  
//int main()
//{
//	char ch[20];
//	scanf("%s\n", ch);//%s是字符串的，用""   %c是单个字符的,用''
//	int len = strlen(ch);//求字符串的长度
//	int i = 0;
//	int j = 0;
//	int sum = 0;//存放十进制数总和   如果数字较大 int字节太小  可以用 long long
//	for (i = len - 1; i >= 0; i--)
//	{
//		//计算0-9十六进制转十进制 
//		if ((ch[i] >= '0') && (ch[i] <= '9'))//字符一定要加单引号
//		{
//			sum += (ch[i] - '0') * (int)pow(16, j);//pow函数是double类型，强制类型转换成int  用到pow函数得引头文件#include <math.h>   
//			j++;
//		}
//		//计算10-15十六进制转十进制 A-F分别对应10 11 12 13 14 15 
//		else if (ch[i] >= 'A' && ch[i] <= 'F')//ASCII码表了解一下
//
//		{
//			sum += (ch[i] - 'A' + 10) * (int)pow(16, j);
//			j++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	if (src > dest)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;		
//			++(char*)dest;					
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char* str1 = "shiqiang";
//	char* str2 = "is super";
//	//my_memcpy(str1, str2, 2);
//	//printf("%s ", my_memmove(str1, str2, 4));
//	printf("%s ", my_memcpy(str1, str2, 4));
//	//my_memmove(arr + 2, arr + 5, 8);
//	return 0;
//}

//十进制转十六进制
//int main()
//{
//	int n = 0;//十进制数
//	int i = 0;
//	int j = 0;
//	int arr[20];//存放十六进制
//	scanf("%d\n", &n);//输入30
//	while (n)
//	{
//		arr[i] = n % 16;// 30%16=14
//		n /= 16;// 30/16=1 
//		i++;
//	}
//	for (j = i - 1; j >= 0; j--)// 这时候arr[100]={14,1}; 然后得倒着输出十六进制
//	{
//		if (arr[j] > 9) //>9   A-F
//		{
//			arr[j] += '7';
//			printf("%c", arr[j]);
//		}
//		printf("%d", arr[j]);
//
//	}
//	return 0;
//}


//
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}
//int main()
//{
//	char ch[] = "1234";
//	printf("%o\n", ch);
//	printf("%x\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char str[] = "Hello world!";
//	printf("%d", printf("%s\n", str));
//	return 0;
//
//int main()
//{
//	int n = 1234;
//	printf("%#o %#X\n", n, n);
//	return 0;
//}

 //    1
 //   1 1
 //  1 1 1
 // 1 1 1 1
 //1 1 1 1 1
//int main()
//{
//	char n = 0;
//	int i = 0;
//	scanf("%c\n", &n);
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 4 - i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		//打印1
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", n);
//		}
//		printf("\n");
//	}
//	return 0;
//

//malloc   calloc
//int main()
//{
//	int* p = calloc(5,sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			p[i] = i + 1;
//		}
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}*/
//	int* ptr = (int*)realloc(p, 10*sizeof(int));//申请内存
//	if (ptr == NULL)  
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//文件读写
//int main()
//{
//	FILE* pf = fopen("shiqiang.txt.", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	fputc('A', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//

//int main()
//{
//	int w, h;
//	scanf("%d%d", &w, &h);
//	double BMI = w / pow((h / 100), 2);
//	printf("%0.2f", BMI);
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)//循环8次
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void printf_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)//遍历数组元素
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组大小
//	bubble_sort(arr, sz); //排序函数
//	printf_arr(arr, sz);//打印函数
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//求数组大小
//	int i = 0;
//	int temp = 0;
//	//排序
//	for (i = 0; i < sz - 1; i++)//循环8次
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]<arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	//遍历数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////变种水仙花数
//int main()
//{
//	int i, j, j1, j2;
//	int ret = 10;
//	for (i = 10000; i < 100000; i++)
//	{
//		int sum = 0;
//		for (j = 1; j < 5; j++)
//		{
//			j1 = i / (int)pow(ret, j);
//			j2 = i % (int)pow(ret, j);
//			sum += j1*j2;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//
//编写一个函数找出这两个只出现一次的数字
//int main()
//{
//	int arr[] = { 1, 3, 1, 2, 3 };
//	int i = 0;
//	int num = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		num ^= arr[i];
//	}
//	printf("%d ", num);
//	return 0;
//}

