#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int* p1 = (int*)((int)arr + 1);
//	printf("%x\n", *p1);
//	return 0;
//}

//int main()
//{
//	int arr[5][5];
//	int(*p)[4];
//	p = arr;
//	printf("%p %d\n", &p[4][2] - &arr[4][2], &p[4][2] - &arr[4][2]);//ȡp�ĵ�4*4+2=18��Ԫ�صĵ�ַ��arr��4*5+2=22��Ԫ�ص�ַ�Ƚϣ�������4��p���������͵�λ��
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT;
//	printf("%s\n", *-- * ++cpp + 3);//'ER';����++��--����ı�ָ���ֵ��cpp=cpp+1,����cpp�����¸�ֵ�����øı��ˣ�
//	printf("%s\n", *cpp[-2] + 3);//'ST';
//	printf("%s\n", cpp[-1][-1] + 1);//"EW"�����в�����ֵ�����˲���ı��Լ���ֵ��a=3;b=a-3;a����3��
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//char* my_strcpy(char* destination, const char* source)
//{
//	assert(destination);
//	assert(source);
//	char* start = destination;
//	while (*destination++ = *source++);
//	return start;//����Ŀ���������Ԫ�ص�ַ�����������ʽ���ʣ�
//}
//
//char* my_strcat(char* destination, const char* source)
//{//string concatenation�ַ����ϲ���
//	assert(destination);
//	assert(source);
//	char* start = destination;
//	while (*destination)
//		destination++;//�ҵ�Ŀ������ĵ�һ��'\0';
//	my_strcpy(destination, source);//��Դ���鸴�Ƶ�Ŀ����������һ����Ч�ַ����棻
//	return start;
//}

//int main()
//{
//	//size_t len = strlen(arr);//����ֵ��size_t���޷������ͣ�
//	//size_t len2 = my_strlen(arr);
//	//printf("%u\n", len2);
//	//char arr1[] = "abcdef";//Ŀ�ı����ǿ����޸ĵ����飬�����ǳ����ַ���char* p="abcdef";��ü�const����  const char* p;
//	//char arr2[20] = { 0 };
//	//my_strcpy(arr2,arr1);
//	////strcpy(arr2, arr1);�⺯���ַ������ƣ�
//	//printf("%s\n", arr2);
//	char arr1[20] = "hello ";
//	char arr2[] = "world!";
//	//strcat(arr1, arr2);//��Դ�ַ���׷�ӵ�Ŀ���ַ������һ���ǡ�/0���ַ����棻
//	my_strcat(arr1, arr2);//�ַ���׷�ӹ��ܣ���������׷�ӣ�
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while ((*str1) && (*str1 == *str2))
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}//�����������ǳ��Ȳ����޵��ַ�����غ�������

//int main()
//{
//	char* arr1 =  "abcdef";
//	char* arr2 =  "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("arr1 = arr2\n");
//	}
//	else if(ret < 0)
//	{
//		printf("arr1 < arr2\n");
//	}
//	else
//	{
//		printf("arr1 > arr2\n");
//	}
//	return 0;
//}

//char* my_strncpy(char* destination,const char* source,size_t num)
//{
//	assert(destination);
//	assert(source);
//	char* start = destination;
//	while (*destination++ = *source++)
//	{
//		num--;
//		if (num == 0)
//		{
//			*destination = '\0';
//			break;
//		}
//	}
//	return start;
//}
//
//char* my_strncat(char* destination,const char* source,size_t num)
//{
//	assert(destination);
//	assert(source);
//	char* start = destination;
//	while (*destination)
//		destination++;
//	my_strncpy(destination, source, num);
//	return start;
//}

//int main()
//{
//	char arr1[20] = "abcdef\0xxxxxxxx";
//	char arr2[] = "Hello";
//	size_t num = 0;
//	scanf("%zu", &num);
//	//my_strncpy(arr1,arr2,num);
//	my_strncat(arr1, arr2, num);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strncmp(const char* str1,const char* str2,size_t num)
//{
//	while (*str1 && (*str1 == *str2))
//	{
//		num--;
//		if (num == 0)
//			break;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcdef";
//	size_t num = 0;
//	printf("��������Ҫ�Ƚϵ��ַ�����:");
//	scanf("%zu", &num);
//	int ret = my_strncmp(arr1, arr2, num);
//	if (ret == 0)
//		printf("arr1 = arr2\n");
//	else if (ret < 0)
//		printf("arr1 < arr2\n");
//	else
//		printf("arr1 > arr2\n");
//	return 0;
//}

//char* my_strstr(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	while (*str1)
//	{
//		if(my_strcmp(str1, str2) == 0)
//		return str1;
//		str1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "xxabcdefxx";
//	char arr2[] = "abcdef";
//	//char* p = my_strstr(arr1, arr2);
//	char* p = strstr(arr1, arr2);
//	printf("%s\n", p);
//	return 0;
//}

