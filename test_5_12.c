#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	for (A = 0; A < 2; A++)
//	{
//		for (B = 0; B < 2; B++)
//		{
//			for (C = 0; C < 2; C++)
//			{
//				for (D = 0; D < 2; D++)
//				{
//					if (((A != 1) + (C == 1) + (D == 1) + (D != 1)) == 3)
//					{
//						if((A+B+C+D)==1)
//						printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>

void left_rotate(char* str, size_t num)
{
	assert(str);
	char* p_start = str;
	while (*str)
		str++;
	char* p_end = str;
	str = p_start;
	size_t i = num;
	while (i--)
	{
		*p_end = *str;
		*str = *(str + num);
		*(str + num) = *p_end;
		str++;
	}
}

int main()
{
	char arr[] = "abcdef";
	int input = 0;
	scanf("%d", &input);
	left_rotate(arr, input);
	printf("%s\n", arr);
	return 0;
}