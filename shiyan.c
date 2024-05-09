#define _CRT_SECURE_NO_WARNINGS




//int main()
//{
//	char arr1[] = "shit";//末尾隐藏"\0"表示字符串结束；
//	printf("%s\n", arr1);
//	return 0;
//}
//

//int main()
//{
//	int len = strlen("shit");//求字符串长度；
//	printf("%d\n", len);//\n换行标志；\0字符串结束字符；
//	return 0;
//}
//
//int main()
//{
//	printf("%s\n", "(are you ok??)");//有的编译器会变成(are you ok]，但是\?\?转义字符现在基本用不上，太古老了；
//	return 0;
//}
//%d整型；%c字符；%s字符串；%f打印float一位精度浮点数；%lf打印double两位精度浮点数； %cu打印sizeof占字符的长度；
//打印一个字符'   printf("%c\n",'\'')不让编译器误会三个单引号的含义；\\两个\\打印出一个\防止后面的那个\和后面内容组合发生转义；
//
// c++语言风格
// /*  */c语言注释风格，不支持/*  /*   */   */  嵌套注释；
//int main()
//{
//	printf("%c\n", '\'');//输出一个';
//	printf("\a\n");//警告字符，系统蜂鸣会响一下；
//	printf("%c\n", '\131');//打印\后面八进制数（转换成10进制）对应的ASCII码字符，要三位数字；
//	printf("c:data\\text\\love\n");//两个\\防止\t变成水平转义字符；
//	printf("%c\n", '\x63'); //打印\后面十六进制数（转换成10进制）对应的ASCII码字符，两位数字就够了；
//	return 0;
//}
//int main()
//{
//	int input = 0;
//
//	printf("你得到了一次机会\n");
//	printf("你想不想抓住这次机会？（1/0）\n");
//	scanf("%d\n", &input);
//	 
//	if (input == 1) 
//	{
//		printf("恭喜你，有了一个逃离的机会。");
//
//	}
//	else
//	{
//		printf("那你就烂在这个地方吧。");
//	}
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("学习C语言");
//	
//	while (line < 20000)
//	{
//		printf("写有效代码行数%d;\n", line);
//		line++;//line = line + 1;
//	}
//	if (line >= 20000)
//	{
//		printf("恭喜你有所成就!");
//	}
//	else 
//	{
//		printf("继续努力，别死在这种地方了。");
//	}
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	 z = x + y;//直接return (x+y);也可以
//	return z;//定义加函数；
//}
//int main()
//{
//	int num1 = 0;//
//	int num2 = 0;//初始化变量，清零；
//	scanf("%d %d", &num1, &num2);//输入两个变量到num1，num2的地址；
//	//int sum = num1 + num2;//直接求和；
//	int sum = Add(num1, num2);//用函数来求和；
//	printf("%d\n", sum);//输出；
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//数组下标从左到右，从0到9增长；
//	int i = 0;
//	while (i < 10)//while语句;
//	{
//		printf("%d\t", arr[i]);//遍历arr里所有元素；
//		i++;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)//for语句;
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//字符组char  ch[5]={a,b,c,d,e};//浮点数组double  d[3]={0.9,3.1,14.0};
//int main()
////{
////	printf("     **\n     **\n************\n************\n    *  *\n    *  *");//输出小飞机图案；
////	return 0;
////}

//int main()
//
//{
//	printf("Name\tAge\tGender\n");
//	printf("---------------------\n");
//	printf("Jack\t18\tMale\n");
//	printf("I lost my cellphone!\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = {0,1};//可以不写[]里的大小；
//	int a = 40; 
//		;	int c = 212;
//	int ret = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", ret);
//	printf("%d\n", arr[1]);
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'b','i','t'};//\0和数字0都可以终止字符串，字符'0'不行，它的ASCII码是48；
//	printf("%d\n", strlen(arr));//输出随机数；
//	return 0;
//}


//int main()
//{
//	double a = 0;
//	double b = 0;
//	scanf("%f %f", &a, &b);//以小数形式输入，不确定精度；
//	if (a > b)
//	{
//		printf("a>b");
//	}
//	 
//	else if(a < b)//多分支选择语句；
//	{
//		printf("a<b");
//	}
//	else if (a == b)
//	{
//		printf("a=b");
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0)
//	{
//		printf("y=-1");
//	}
//
//	else if (x < 0)//多分支选择语句；
//	{
//		printf("y=1");
//	}
//	else 
//	{
//		printf("y=0");
//	}
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//
//	printf("%d", y);//一次性输出就好了；
//	return 0;
//}




//int main()
//{
//	int a = 8;
//	a %= 5;//赋值，模等；
//	float b = a / 2.0;//除2就是整型，除2.0就是浮点型；
//	int c = a % 2;//取模，即求余数；
//	printf("%.1f\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//

 
//int main()
//{
//	int flag = 1;//0表示真，非0表示真；
//	if (!flag)//内容为假不运行下面指令；！为取反操作符，真变假，假变真；
//	{
//		printf("我在运行。");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//先让b=a,再让a++（即a=a+1）；
//	//printf("%d\n", a);//输出为11；
//	//printf("%d\n", b);//输出为10；
//	int b = ++a;//先让a++，再让b=a+1；
//	//printf("%d\n", a);//输出为11；
//    //printf("%d\n", b);//输出为11；
//	return 0;
//}


//int main()
//{
	//double a = 3.14;
	//printf("%.2f", a);
	//return 0;

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//求整个数组的字节长度；
	//printf("%d\n", sizeof(arr[0]));//求数组第一个元素的字节长度；

	//int a = 0;
	//int b = 2;
	////if (a && b);//与逻辑
	////{
	////	printf("ok!");
	////}//0&2为否定，程序不运行；

	//if (a || b) 
	//{
	//	printf("ok!\n");//0|2为肯定，程序运行；
	//}
	////三目操作符↓；
	//int ret = a > b ? a : b;   //?前为真输出：之前的，即a；?前为假输出：后面的，即b；
	//printf("%d\n", ret);//输出a与b的较大值，类似于if-else语句；

	//int a = 5;
	//int b = 36;
	//int c = -6;
	//int d = (c = a + b, b = 2*c * a, a = b - c);//d的值为所有等式按照从左到右顺序计算后最后一个等式的结果； 
	//printf("%d\n", d);
	//typedef unsigned int uint;//改变类型名称；自己把一个长难类型句变简单，重命名；
	//unsigned int a = 0;
	//uint b = 2;
	//printf("%d", a + b);

	//void test()
	//{
	//	int a = 1;
	//	a++;
	//	printf("%d", a);
	//
	//}

	//int main()
	//{
	//
	//	 int i = 0;
	//	while (i < 10)
	//	{
	//		test();
	//		i++;
	//	}
	//	
	//	return 0;
	//}
//int main()
//{
//	printf("123");
//}



//void test()
//{
//	static int a = 1;//static//变量创建在静态区，修饰局部常量只定义一次且出了作用域后不销毁；
//	a++;
//	printf("%d\n", a);//延长变量的生命周期到程序结束；
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//后面千万别加分号，不然会无限循环导致没有输出；
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int Add(int x, int y);//int Add前面加static把全局可调用函数变成仅当前文件可用；
////变成静态函数；
//int main()
//{
//	int a = 4;
//	int b = 32;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}

//#define pig = 0;
//#define Add(x,y) x+y//直接define定义函数(宏)或者常量；
//
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int c = Add(a, b);
//	register int num = 3;//建议将变量num的值存放在寄存器中方便调用，不方便时也会存在其他地方（高速缓存区cache，内存，硬盘中)；
//	printf("%d %d", num,c);//提高代码运行速度；
//	return 0;
//}

//#define V(x,y,z) ((x)+(y)*(z))
//int main()
//{
//	int a = 3; int b = 6; int c = 9;
//	printf("%d", V(a, b, c));
//	return 0;
//}

//0x 00 00 00 0a;十六进制内存储存方式；0x是十六进制标识符；
//int main()
//{
//	int a = 7;
//	char ch = 'x';
//	printf("%p\n", &a);
//	int* p = &a;//P是指针变量(pointer)；储存a的地址；
//	char* pc = &ch;
//	*p = 20;//解引符号，通过p里存放的地址找到a所在的地址并赋值；
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 67;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%zu\n", sizeof(int*));//64位系统所有地址都是占据8byte；
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char gender[10];
//	char tele[12];
//};//建立一个结构体模板；
//
//void print(struct stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).gender, (*ps).tele);//利用存放数据地址（*ps）找到值；
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->gender, ps->tele);//利用指针变量找到struct stu结构体里的值；
//}
//
//int main()
//{
//	struct stu s = { "chenxin",26,"male","17370138078" };//利用创建好的结构体模板创建一个多数据组合的变量s;
//	printf("%s %d %s %s\n", s.name, s.age, s.gender, s.tele);//写出s.后选择结构体变量里的子项；
//	//也可以用函数形式；
//	print(&s);
//
//	return 0;
//}



// 函数声明
//void add(double a, double b);
//void multiply(double a, double b);
//
//int main() {
//	// 变量声明
//	double num1, num2;
//	int choice;
//
//	// 用户输入
//	printf("请输入第一个数字：");
//	scanf("%lf", &num1);
//
//	printf("请输入第二个数字：");
//	scanf("%lf", &num2);
//
//	printf("请选择操作：\n");
//	printf("1. 加法\n");
//	printf("2. 乘法\n");
//	printf("输入您的选择：");
//	scanf("%d", &choice);
//
//	// 控制结构
//	switch (choice) {
//	case 1:
//		add(num1, num2); // 调用加法函数
//		break;
//	case 2:
//		multiply(num1, num2); // 调用乘法函数
//		break;
//	default:
//		printf("无效选择，请选择1或2。\n");
//	}
//
//	return 0; // 程序结束
//}
//
//// 定义加法函数
//void add(double a, double b) {
//	double result = a + b;
//	printf("结果：%.2f + %.2f = %.2f\n", a, b, result);
//}
//
//// 定义乘法函数
//void multiply(double a, double b) {
//	double result = a * b;
//	printf("结果：%.2f * %.2f = %.2f\n", a, b, result);
//}


//int main() 
//{
//	int a = 0; int b = 0;
//
//	printf("请输入被除数：");
//	scanf("%d", &a);
//
//	printf("请输入除数：");
//	scanf("%d", &b);
//
//	int x = a / b;
//
//	int y = a % b;
//
//	printf("商为：%d 余数为：%d", x, y);
//	
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	printf("请输入您的年龄：");
//	scanf("%d", &age);
//
//	if (age >= 18)
//		printf("成年");
//	else if (age > 0 && age<18)
//	{
//		printf("未成年\n");
//		printf("你不能喝酒\n");
//	}
//	else
//		printf("你不是人啊");
//	
//	return 0;
//} 

//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a == 0)
//	//{//如果加上大括号else回合括号外最近的if匹配；
//		if (b == 3)
//			printf("yes");
//	//}
//		else//else会自动匹配上面距离它最近的if；
//			printf("no");//所以第一个if为假，整个程序不执行；
//	return 0;
//}


//int main()
//{
//	char first_name[] = { "Tom"};
//	int a = 0;
//	return 0;
//}

//int test(int x)
//{
//	if (x == 3)
//		return 1;
//  //else//可以不要这个else，但是会影响阅读，造成误读；
//		return 0;
//}

//int main()
//{
//	int a = 4;
//	int ret = test(a);
//	printf("%d", ret);
//
//	int num = 5;
//	if (5 == num)//判断变量是否与一个数相等把变量写右边，便于编译器检查；
//		print("ok");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//别忘了&取地址操作符；
//
//	if (a%2 == 0)
//		printf("偶数");
//	else
//		printf("奇数");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;//提前知道了是奇数可以换成i+=2；
//
//	}//输出1-100的奇数；
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//变量一定要是整型；
//	{
//	case 1://移一定要有空格，也要是整型；
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;//这个break最好加上，方便以后添加其他case；
//	default:
//		printf("输入错误，请重新输入！");//加上default默认输出提醒用户输入有误；
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//break跳出整个循环，执行代码块下面一行代码；
//			continue;//跳过循环后面的代码，重新跳回while循环；
//		printf("%d\t", i);
//		i++;
//
//	}
	//printf("请输入一个字母：");
	//spot:
	//;
	//int ch = getchar();//把输入的字符的ASCII码存在ch里；输入错误时，getchar会返回EOF，end of file（-1），所以用整型定义；

	//getchar();//去除数据缓冲区输入回车形成的'\n'；

	//if (ch >= 65 && ch <= 90)

	//	printf("%c\n", ch + 32);

	//else if (ch >= 97 && ch <= 122)//转换字母的大小写；

	//	putchar(ch - 32);//两种都可以用来输出字符；

	//else
	//{
	//	printf("输入错误，请重新输入！\n");
	//	goto spot;//跳转到spot：处
	//}

//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	//printf("%c %c %c %c %c %c %c %c %c %c %c %c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);//打印数字对应ASCII的字符；
//	int i = 0;
//	int S = (sizeof(arr) / sizeof(arr[0]));
//	while (i < S)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int birth_day = 0;
//	printf("请输入八位生日（如：19980124）：");
//	scanf("%d", &birth_day);
//	int year = birth_day / 10000;
//	int month = (birth_day % 10000 ) / 100;
//	int day = birth_day % 100;
//	printf("year=%d\n", year);
//	printf("month=%d\n", month);
//	printf("day=%d\n", day);
//
//	return 0;
//}

//int main()
//{
//	int a = 0,b = 0,c = 0,d = 0;
//
//	int max = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//
//	if (a >= b)
//		max = a;
//	else
//		max = b;
//	if (max < c)
//		max = c;
//	if (max < d)
//		max = d;
//	printf("最大值为：%d", max);
//	return 0;
//
//}


//int main()
//{
//	int i = 1;
//	int j = 1;
//	int ret1 = 0;
//	int ret2 = 1;
//	for (j=1;j<=3;j++)
//	{
//		//ret2 = 1;
//		//for (i = 1; i <= j; i++)
//		//{
//
//		//	ret2 = ret2 * i;//累乘求阶乘；
//		//}
//		//ret1 = ret1 + ret2;
//		ret2 = ret2 * j;
//		ret1 = ret1 + ret2;//直接给前一个阶乘循环乘一个当前的j值就可以了；
//	}
//	printf("%d\n", ret1);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int L = 0; int R = 9;
//	int k = 9; int i = -1;
//	
//	{
//		for (i; arr[i] < k; i = (L + R) / 2)
//			L = i + 1;
//		for (i; arr[i] > k; i = (L + R) / 2)
//			R = i - 1;
//	}
//	printf("找到了，你要找的数下标是%d", i);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int L = 0; 
//	int R = sz - 1;
//	int k = 0;
//
//	int ret ;
//
//
//	// 继续循环，直到输入成功
//	while (1)
//	{
//		printf("请输入一个整数：");
//		scanf("%d", &k);
//		ret = scanf("%d", &k);
//
//		if (ret == 1)
//		{
//			break;
//		}
//		// 清空输入缓冲区
//		else
//		{
//			while(getchar() != '\n'); // 丢弃缓冲区中的错误输入
//
//			printf("输入无效，请输入一个整数：\n");
//		}
//		
//	}
//	printf("成功读取整数：%d\n", k);
//
//	while (L <= R)
//	{
//		int i = (L + R) / 2;//换成L+(R-L)/2防止溢出；
//		if (arr[i] < k)
//			L = i + 1;//缩小左边界；
//		else if (arr[i] > k)
//			R = i - 1;//缩小右边界；
//		else
//		{
//			printf("找到了，这个数的下标是%d\n", i);
//			break;
//		}
//	}
//	if (L > R)
//		printf("抱歉，没有找到这个数字.\n");
//
//	return 0;
//
//}


//#include <string.h>//strlen函数；
//#include <windows.h>//sleep函数；
//#include <stdlib.h>//system函数；

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;//
//	int right = strlen(arr2) - 1;
//	//printf("%s\n", arr2);
//
//	while (left <= right)
//	{
//		
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//延时函数；单位是ms；
//		system("cls");//system系统库函数，调用系统命令，cls清空当前屏幕；clear screen;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//补上这个被cls清空的最后输出；输出
//	return 0;
//}

//int main()
//{
//	char pass_word[] = "cx980520";
//	char input[] = { 0 };
//	int j = 0;
//	int sz = strlen(pass_word);
//
//	while (j < sz)
//	{
//		printf("请输入密码：");
//		scanf("%s", input);
//		
//			if (strcmp(pass_word, input) == 0)//应该用strcmp来比较两个数组是否相等；
//			{
//				printf("密码正确，解锁成功！\n");
//				return 0;
//			}
//			else
//			{
//				j++;
//				if (j == 3)
//					break;
//				printf("密码错误！你还有 %d 次机会!\n", 3 - j);
//			}
//			//if ( == )
//			//	printf("已解锁");
//			//else
//			//	printf("未解锁");
//	}
//	return 0;
//}

#include <time.h> //rand()函数

//void menu()
//{
//	printf("*************************\n");
//	printf("******** 1.play *********\n");
//	printf("******** 0.exit *********\n");
//	printf("*************************\n");
//
//}
//
//void game()
//{
//	int a = 0; int i = 0;
//	//int ret = rand();//0-32367之间的随机数；
//	int ret = (rand() % 100) + 1;//生成1-100的随机数；
//	while (a != ret)
//	{
//		printf("请输入一个1-100的整数：");
//		scanf("%d", &a);
//		i++;
//
//		if (a < ret)
//		{
//			printf("数字小了\n");
//		}
//
//		if(a > ret)
//		{
//			printf("数字大了\n");
//		}
//	}
//	printf("恭喜你猜对了！结果是%d，你一共猜了%d次\n",ret,i);
//}//游戏运行的主体函数；
//  
//
//int main()
//{
//	srand((unsigned int)time(NULL));//根据系统时钟来生成随机数；
//	int input = 0;
//	do
//	{
//		menu();//菜单函数；
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//		
//	} while (input != 0);
//
//	return 0;
//
//}

//shutdown -s -t 60;系统在60s内关机；-s设置关机  -t设置时间倒计时关机 60关机倒计时；
//shutdoen -a 取消关机；

//int main()
//{
//	char arr[50] = {0};
//	system("shutdown -s -t 60");
//
//	printf("注意！你的电脑将在60S内关机，输入\"我是猪\"三个字可取消关机-_-\n");
//
//	while (1)
//	{
//		scanf("%s", arr);
//
//		if (strcmp( arr, "我是猪") == 0)//比较两个字符串，相同返回0；
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("这也能输错?你真是猪吧?扣你5秒！\n");
//			Sleep(5000);//扣5秒钟；
//		}
//	}
//	return 0;
//}

//void swap( int x, int y);//形式参数，有自己的存储空间，只是实参num1，num2的临时备份，这样运算结果无法关联num1，和num2；
//void swap(int* px, int* py)//接收两个指针
//{
//	int z = 0;
//	z = * px;//把* x指向的内容（也就是主函数里&num1所在地址的值num1）赋值给z；
//	* px =* py;
//	* py = z;
//}//这样就自定义了一个函数；
//
// int add(int x,int y)//不改变实参就不需要取实参的地址；
// {
// int z = 0;
// z = x + y;
// return z;
// }
//int main()
//{
//	int num1 = 30;
//	int num2 = 17;
//	swap(&num1, &num2);//把变量的地址传递给函数，这样可以让函数的运算结果和变量关联；
//	printf("交换后num1=%d，num2=%d\n", num1, num2);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("你好，请输入两个整数，第一个数要大于第二个数\n");
//	scanf("%d %d", &a, &b);
//	if (a <= b)
//	{
//		printf("错误\n");
//		return 1;
//	}
//	printf("正确\n");
//
//	return 0;
//
//}

//#include <math.h>//数学库函数：sqrt()取平方根函数；

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//用所有2~i-1之间的数去除以i;一个数的因子一定有一个小于等于这个数的平方根；
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n素数个数为：%d个\n", count);
//
//		return 0;
//}

//int is_prime(int x)//定义一个is_prime是质数函数；直接调用就能判断是否是质数；可以写成bool类型 bool is_prime(int x),返回的是true 和 false；
//{
//		int j = 0;
//		for (j = 2; j <= sqrt(x); j++)//用所有2~i-1之间的数去除以i;一个数的因子一定有一个小于等于这个数的平方根；
//		{
//			if (x % j == 0)
//			{
//				 return 0;
//			}
//		}
//		return 1;//是质数返回1，不是质数返回0；
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n质数个数为:%d\n", count);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n一共有%d个闰年。\n",count);
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入年份:");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d年是闰年。\n", year);
//		return 0;
//	}
//		printf("%d年不是闰年。\n", year);
//	return 1;
//}

//int binaru_search(int num[], int size, int target)//形参和实参名字可以相同；
//{
//	int L = 0;
//	int R = size-1;
//	while (L <= R)
//	{
//		int mid = L + (R - L) / 2;
//		
//			if (num[mid] < target)
//				L = mid + 1;
//			else if (num[mid] > target)
//				R = mid - 1;
//			else
//				return mid;
//	}
//			return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binaru_search(arr,sz,k);
//	if (ret == -1)
//	{
//		printf("没找到该数字！\n");
//	}
//	else
//	{
//		printf("找到该数字了，它的下标是%d\n", ret);
//	}
//	return 0;
//}

//int Add(int x, int y,int limit)//函数不写返回类型时默认返回类型是int整型；
//{
//	int z = x + y;
//	if (z > limit)
//		return z;
//	else
//		return Add(z, y, limit);//自己调用自己叫做递归；
//}//定义必须在调用之前，声明库函数也是这样；或者调用之前声明后面的函数；
// 
// int Add(int,int);
//int main()
//{
//	int a = 7, b = 2, limit = 10000;
//	int ret = Add(a, b,limit);
//	printf("%d\n", ret);
//	return 0;
//}

//#include "shiyan.h"
//int main()
//{
//
//	return 0;
//}

//void test(int num)
//{
//	if (num>9)
//	{
//		test(num/10);
//	}
//	printf("%d",num%10);
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	test(num);
//	return 0;
//}
//
//int getstrlen(char* str)
//{
//	if (*str != '\0')//终止条件，从递变成归的条件；
//	{
//		return 1 + getstrlen(str + 1);//每深入一层要让变量更接近终止条件一些，不然就会死递归；
//	}
//	return 0;
//}
//
//int main()
//{
//	char str[] = "Hello world!";
//	int len = getstrlen(str);
//	printf("字符串长度为：%d ", len);
//	return 0;
//}

//int factorial(int x)
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= x; i++)//用循环的方式求阶乘；
//	{
//		result = result * i;
//	}
//	return result;
//}

//int factorial(int x)
//{
//	if (x > 1)
//		return x * factorial(x - 1);
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入一个正整数:");
//	scanf("%d", &input);
//	int ret = factorial(input);
//	printf("%d的阶乘为%d ", input, ret);
//	return 0;
//}

//int Fibonacci(int x)
//{
//	if (x > 2)
//		return (Fibonacci(x - 1) + Fibonacci(x - 2));//递归求第n个斐波那契数；
//	else
//		return 1;
//
//}

//int Fibonacci(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)//用迭代的方法求斐波那契数列；
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &input);
//	int ret = Fibonacci(input);
//	printf("第 %d 个斐波那契数是 %d ", input, ret);
//	return 0;
//}

//int psbl(int x)
//{
//	if (x >= 3)
//		return psbl(x - 1) + psbl(x - 2);//青蛙跳台阶问题
//	else if (x == 2)
//		return 2;
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = psbl(n);
//	printf("有%d种可能性", ret);
//	return 0;
//}

//int Hanoi(int arr1[], int sz)
//{
//	int arr2[] = { 0 };
//	if
//	arr2[sz]
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Hanoi(arr,sz);
//	printf("最少需要移动 %d 次", ret);
//	return 0;
//}

//int MAX(int a, int b, int c)
//{
//	int max = 0;
//	if (a > b || a > c)
//		return a;
//	else if (b > c)
//		return b;
//	else
//		return c;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int max = MAX(a, b, c);
//	scanf("%d %d %d", &a, &b, &c);
//
//	printf("%d %d %d",)
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数:");
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int max = a > b ? a : b;//可以不判断两个数的大小；
//	while (max % min != 0)//用辗转相除法求两个数的最大公约数；
//	{
//		int c = 0;
//		c = min;
//		min = max % min;
//		max = c;
//	}
//	printf("这两个整数的最大公约数为：%d ", min);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			num++;
//		if (i / 10 == 9)
//			num++;
//	}
//	printf("1-100所有数字中含有9个数为：%d 个", num);
//	return 0;
//}

//int main()
//{
//	float sum1 = 0;
//	float sum2 = 0;
//	float i = 0;
//	for (i = 1; i <= 100; i += 2)
//		sum1 = sum1 + (1 / i);
//	for (i = 2; i <= 100; i += 2)
//		sum2 = sum2 + (1 / i);
//	//或者用这种方法：  int flag = 1; sum = sum + flag*(1/i); flag = -flag; 每计算一次变一次符号；
//	//
//	printf("result = %lf\n", sum1 - sum2);
//	return 0;
//}

//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	 int arr[]={0};
//	 int k = 0;
//	 for (k = 0; k <= 9; k++)
//		 scanf("%d", &arr[k]);//把数字一个一个输入进数组对应下标数字的地址中；
//	int i = 0 , j = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			j = i;
//		}
//
//	}
//	printf("最大数为 %d ,其下标为： %d", max, j);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d * %d = %d  ",i,j, i * j);//打印乘法口诀表；
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, j * i);//真正规范的乘法口诀表；%2d,打印两位整数，只有一位会用左空格填充；%-2d则会用右空格填充；
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,3,4,5,6,5,6,7,8 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%d ", arr[i][j]);//打印二维数组；
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	if (sz >= 2)
//	{
//		int j = 0;
//		for (j = 1; j <= sz - 1; j++)
//		{
//			int i = 0;
//			for (i = 0; i < sz - j; i++)
//			{
//				if (arr[i] > arr[i + 1])
//				{
//					int temp = arr[i + 1];
//					arr[i + 1] = arr[i];
//					arr[i] = temp;//冒泡排序；
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int k = 0;
//	for (k = 0; k < 10; k++)
//		scanf("%d", &arr[k]);//输入10个整数进入数组arr[]待排序；
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}
//&arr是整个数组的地址，&arr+1直接跳过一整个数组的字节长度，arr[10]就跳过40个字节，
// arr和&arr[0]基本等价，都是数组首元素地址，arr+1和&arr[0]+1只跳过一个元素即4个字节大小；前提int整型元素;
//例外：sizeof（）中的arr表示整个数组的字节大小()包含结尾的\0，sizeof（arr[10]）=40；前提int整型数组；


//void test(char arr[],int sz)
//{
//	int L = 0;
//	int R = sz - 1;
//	while (L < R)
//	{
//
//		int temp = arr[L];
//		arr[L] = arr[R];
//		arr[R] = temp;
//		L++;
//		R--;//用迭代的方式将一个字符数组逆序排列；
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdeffhvfoiafj";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	test(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%c ", arr[i]);
//	return 0;
//}

//void reverse(char arr[], int sz)
//{
//	int L = 0;
//	int R = sz - 1;//函数中可以使用strlen不能使用sizeof
//
//	if (L < R)
//	{
//		reverse(arr + 1, sz - 2);//递归调用reverse字符串倒序函数；
//		int temp = arr[L];
//		arr[L] = arr[R];
//		arr[R] = temp;
//		
//	}
//
//	return;
//}
//int main()
//{
//	char arr[] = "abcdefnfowrie";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//""表示的字符串字节大小包含结尾的\0;
//	reverse(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%c ", arr[i]);
//	return 0;
//}
//双参数算法；
 
//int my_strlen(char* str)
//{
//	if(*str != '\0')
//	return 1 + my_strlen(str + 1);
//	return 0;
//}
//
//void reverse(char* arr)
//{
//	int temp = *arr;
//	int sz = my_strlen(arr);
//	*arr = *(arr + sz - 1);
//	*(arr + sz - 1) = '\0';
//	if (sz >= 2)
//	reverse(arr + 1);
//	*(arr + sz - 1) = temp;
//}//单参数递归求字符数组逆序；
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int i = 0;
//	int sz = my_strlen(arr);
//	reverse(arr);
//	for (i = 0; i < sz; i++)
//		printf("%c ", arr[i]);
//	return 0;
//}

//int DigitSum(int num)
//{
//	if (num / 10 != 0)//即num >= 10;
//		return (num % 10) + DigitSum(num / 10);//递归求一个数的每一位之和；
//	return num;
//}
//
//int main()
//{
//	unsigned int input = 0;
//	scanf("%u", &input);
//	int ret = DigitSum(input);
//	printf("%d\n", ret);
//	return 0;
//}

//int test(int x,int y)
//{
//	if (y >= 1)
//		return x * test(x, y - 1);
//	return 1;
//}
//
//int main()
//{
//	int n = 1;
//	int k = 1;
//	printf("请依次输入底数和指数：");
//	scanf("%d %d", &n, &k);
//	int ret = test(n,k);
//	printf("%d\n", ret);
//	return 0;
//}递归求n的k次方；
//sizeof(arr)=sizeof(int [10])   int arr[10]中arr的类型就是int [10];
//sizeof（）是操作符，求的内存大小，多少字节，\0也占一个字节；strlen（）是函数，求的是字符元素个数，不含\0

//void Swap(int* arr1, int* arr2,int sz)
//{
//	int temp = 0;
//	if (sz>0)
//	{
//		temp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = temp;
//		Swap(arr1 + 1, arr2 + 1, sz-1);//递归交换两个等长数组的每个元素；
//	}
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5 };
//	int arr2[] = { 10,11,12,13,14,15 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1,arr2,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr1[i]);
//	printf("\n");
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr2[i]);
//	return 0;
//}

//void init(int arr[],int sz)//数组初始化函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//
//void reverse(int arr[], int sz)//数组倒序排列函数；
//{
//	int temp = 0;
//	if (sz > 1)
//	{
//		temp = arr[0];
//		arr[0] = arr[sz - 1];
//		arr[sz - 1] = temp;
//		reverse(arr + 1, sz - 2);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%2d ", arr[i]);
//	}
//	printf("\n");
//
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%2d ", arr[i]);
//	}
//	printf("\n");
//
//	init(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%2d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//#include "shiyan.h"
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	menu();
//	choose();
//	return 0;
//}
#include <stdio.h>

void test(int* a)
{
	printf("%d\n", *(a + 9));
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 1;
	test(arr);
	return 0;
}