#define _CRT_SECURE_NO_WARNINGS


//#include "shiyan.h"
//
////��ӡ�˵�������
//void menu()
//{
//	printf("*******************************\n");
//	printf("********** 1.play *************\n");
//	printf("********** 0.exit *************\n");
//	printf("*******************************\n");
//}
//
//
//void choose()
//{
//	int input = 0;
//
//	do
//	{
//		printf("��ѡ������ 1 �� 0 ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//			{
//				printf("��Ϸ��ʼ��\n");
//				game();
//				break;
//			}
//			case 0:
//			{
//				printf("�˳���Ϸ��\n");
//				break;
//			}
//			default:
//			{
//				printf("ѡ��������������룡\n");
//				break;
//			}
//		}
//	} while (input);
//}
//
//
////��Ϸ�������壻
//void game()
//{
//	char arr[ROW][COL];
//	reset_arr(arr,ROW,COL);
//	print_board(arr, ROW, COL);
//	do
//	{
//
//		player_move(arr, ROW, COL);//�������
//		print_board(arr, ROW, COL);//��ӡ������������̣�
//		judgement(arr, ROW, COL);//�ж���Ӯ��
//		int ret = judgement(arr, ROW, COL);
//		if (ret == 1)
//		{
//			printf("��ϲ�㣬��Ӯ�ˣ�\n");
//			break;
//		}
//		else if (ret == 0)
//		{
//			printf("������ϷΪƽ��\n");
//			break;
//		}
//		else
//		{
//			printf("��Ϸ����\n");
//		}
//		computer_move(arr, ROW, COL);//�������壻
//		print_board(arr, ROW, COL);//��ӡ��������������
//		judgement(arr, ROW, COL);//�ж���Ӯ��
//		ret = judgement(arr, ROW, COL);
//		if (ret == 1)
//		{
//			printf("���ź��������ˡ�\n");
//			break;
//		}
//		if (ret == 0)
//		{
//			printf("������ϷΪƽ�֡�\n");
//			break;
//		}
//	} while (1);
//}
//
//
//
//void print_board(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col-1; j++)
//		{
//			printf(" %c |", arr[i][j]);
//		}
//		printf(" %c \n", arr[i][j]);//��ӡ���������У�
//
//		if (i < row-1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				if (j < col-1)
//					printf("---|");
//				else
//					printf("---");
//			}
//			printf("\n");
//		}
//
//	}//forѭ��Ƕ�״�ӡ���������̣�
//}
//
//
//void reset_arr(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//			arr[i][j] = ' ';
//	}//��λ���̣��Ѷ�ά�����������Ԫ����Ϊ�ո�' '��
//}
//
//
//void player_move(char arr[ROW][COL], int row, int col)
//{
//	int a = 1;
//	int b = 1;
//	while (1)
//	{
//		printf("��������Ҫ���ӵ����꣺");
//		scanf("%d %d", &a, &b);
//		if ((arr[a - 1][b - 1] == ' ') && a > 0 && a < row + 1 && b > 0 && b < col + 1)
//		{
//			arr[a - 1][b - 1] = '*';
//			break;
//		}
//		else
//			printf("�Ƿ����꣬���������룡\n");
//	}
//}
//
//
//void computer_move(char arr[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int a = rand() % 3;
//		int b = rand() % 3;
//		if (arr[a][b] == ' ')
//		{
//
//			arr[a][b] = '#';
//			printf("�������壺\n");
//			break;
//		}
//	}
//}
//
//
//int judgement(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) &&( arr[i][1] != ' '))
//			return 1;
//	}	//��������Ƿ�����������ͬ���ӣ�
//
//	for (j = 0; j < col; j++)
//	{
//		if ((arr[0][j] == arr[1][j]) && (arr[1][j] == arr[2][j]) && (arr[1][j] != ' '))
//			return 1;
//	}//��������Ƿ�����������ͬ���ӣ�
//
//	if (((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[1][1] != ' ')) || ((arr[0][0]) == (arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[1][1] != ' ')))
//		return 1;//���Խ������Ƿ�����������ͬ���ӣ�
//
//	int count = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				break;//�������п�λ����ѭ��
//			count++;
//		}
//		if (arr[i][j] == ' ')
//			break;//�������п�λ����ѭ��
//
//	}//���������������Ƿ������ˣ�
//
//	if (count == 9)//����������̶�û�п�λ��Ҳû�зֳ�ʤ��Ϊƽ�֣�
//		return 0;
//	else
//	    return 2;
//}
