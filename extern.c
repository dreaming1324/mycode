#define _CRT_SECURE_NO_WARNINGS


//#include "shiyan.h"
//
////打印菜单函数；
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
//		printf("请选择数字 1 或 0 ：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//			{
//				printf("游戏开始！\n");
//				game();
//				break;
//			}
//			case 0:
//			{
//				printf("退出游戏。\n");
//				break;
//			}
//			default:
//			{
//				printf("选择错误，请重新输入！\n");
//				break;
//			}
//		}
//	} while (input);
//}
//
//
////游戏主函数体；
//void game()
//{
//	char arr[ROW][COL];
//	reset_arr(arr,ROW,COL);
//	print_board(arr, ROW, COL);
//	do
//	{
//
//		player_move(arr, ROW, COL);//玩家下棋
//		print_board(arr, ROW, COL);//打印玩家下棋后的棋盘；
//		judgement(arr, ROW, COL);//判断输赢；
//		int ret = judgement(arr, ROW, COL);
//		if (ret == 1)
//		{
//			printf("恭喜你，你赢了！\n");
//			break;
//		}
//		else if (ret == 0)
//		{
//			printf("本场游戏为平局\n");
//			break;
//		}
//		else
//		{
//			printf("游戏继续\n");
//		}
//		computer_move(arr, ROW, COL);//电脑下棋；
//		print_board(arr, ROW, COL);//打印电脑下棋后的棋盘
//		judgement(arr, ROW, COL);//判断输赢；
//		ret = judgement(arr, ROW, COL);
//		if (ret == 1)
//		{
//			printf("很遗憾，你输了。\n");
//			break;
//		}
//		if (ret == 0)
//		{
//			printf("本场游戏为平局。\n");
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
//		printf(" %c \n", arr[i][j]);//打印数组所在行；
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
//	}//for循环嵌套打印井字棋棋盘；
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
//	}//复位棋盘；把二维数组里的所有元素置为空格' '；
//}
//
//
//void player_move(char arr[ROW][COL], int row, int col)
//{
//	int a = 1;
//	int b = 1;
//	while (1)
//	{
//		printf("请输入你要落子的坐标：");
//		scanf("%d %d", &a, &b);
//		if ((arr[a - 1][b - 1] == ' ') && a > 0 && a < row + 1 && b > 0 && b < col + 1)
//		{
//			arr[a - 1][b - 1] = '*';
//			break;
//		}
//		else
//			printf("非法坐标，请重新输入！\n");
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
//			printf("电脑下棋：\n");
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
//	}	//检查行上是否连成三颗相同棋子；
//
//	for (j = 0; j < col; j++)
//	{
//		if ((arr[0][j] == arr[1][j]) && (arr[1][j] == arr[2][j]) && (arr[1][j] != ' '))
//			return 1;
//	}//检查列上是否连成三颗相同棋子；
//
//	if (((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[1][1] != ' ')) || ((arr[0][0]) == (arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[1][1] != ' ')))
//		return 1;//检查对角线上是否连成三颗相同棋子；
//
//	int count = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				break;//棋盘上有空位跳出循环
//			count++;
//		}
//		if (arr[i][j] == ' ')
//			break;//棋盘上有空位跳出循环
//
//	}//遍历数组检查棋盘是否被填满了；
//
//	if (count == 9)//如果遍历棋盘都没有空位，也没有分出胜负为平局；
//		return 0;
//	else
//	    return 2;
//}
