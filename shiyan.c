#define _CRT_SECURE_NO_WARNINGS




//int main()
//{
//	char arr1[] = "shit";//ĩβ����"\0"��ʾ�ַ���������
//	printf("%s\n", arr1);
//	return 0;
//}
//

//int main()
//{
//	int len = strlen("shit");//���ַ������ȣ�
//	printf("%d\n", len);//\n���б�־��\0�ַ��������ַ���
//	return 0;
//}
//
//int main()
//{
//	printf("%s\n", "(are you ok??)");//�еı���������(are you ok]������\?\?ת���ַ����ڻ����ò��ϣ�̫�����ˣ�
//	return 0;
//}
//%d���ͣ�%c�ַ���%s�ַ�����%f��ӡfloatһλ���ȸ�������%lf��ӡdouble��λ���ȸ������� %cu��ӡsizeofռ�ַ��ĳ��ȣ�
//��ӡһ���ַ�'   printf("%c\n",'\'')���ñ�����������������ŵĺ��壻\\����\\��ӡ��һ��\��ֹ������Ǹ�\�ͺ���������Ϸ���ת�壻
//
// c++���Է��
// /*  */c����ע�ͷ�񣬲�֧��/*  /*   */   */  Ƕ��ע�ͣ�
//int main()
//{
//	printf("%c\n", '\'');//���һ��';
//	printf("\a\n");//�����ַ���ϵͳ��������һ�£�
//	printf("%c\n", '\131');//��ӡ\����˽�������ת����10���ƣ���Ӧ��ASCII���ַ���Ҫ��λ���֣�
//	printf("c:data\\text\\love\n");//����\\��ֹ\t���ˮƽת���ַ���
//	printf("%c\n", '\x63'); //��ӡ\����ʮ����������ת����10���ƣ���Ӧ��ASCII���ַ�����λ���־͹��ˣ�
//	return 0;
//}
//int main()
//{
//	int input = 0;
//
//	printf("��õ���һ�λ���\n");
//	printf("���벻��ץס��λ��᣿��1/0��\n");
//	scanf("%d\n", &input);
//	 
//	if (input == 1) 
//	{
//		printf("��ϲ�㣬����һ������Ļ��ᡣ");
//
//	}
//	else
//	{
//		printf("�������������ط��ɡ�");
//	}
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("ѧϰC����");
//	
//	while (line < 20000)
//	{
//		printf("д��Ч��������%d;\n", line);
//		line++;//line = line + 1;
//	}
//	if (line >= 20000)
//	{
//		printf("��ϲ�������ɾ�!");
//	}
//	else 
//	{
//		printf("����Ŭ�������������ֵط��ˡ�");
//	}
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	 z = x + y;//ֱ��return (x+y);Ҳ����
//	return z;//����Ӻ�����
//}
//int main()
//{
//	int num1 = 0;//
//	int num2 = 0;//��ʼ�����������㣻
//	scanf("%d %d", &num1, &num2);//��������������num1��num2�ĵ�ַ��
//	//int sum = num1 + num2;//ֱ����ͣ�
//	int sum = Add(num1, num2);//�ú�������ͣ�
//	printf("%d\n", sum);//�����
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//�����±�����ң���0��9������
//	int i = 0;
//	while (i < 10)//while���;
//	{
//		printf("%d\t", arr[i]);//����arr������Ԫ�أ�
//		i++;
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)//for���;
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//�ַ���char  ch[5]={a,b,c,d,e};//��������double  d[3]={0.9,3.1,14.0};
//int main()
////{
////	printf("     **\n     **\n************\n************\n    *  *\n    *  *");//���С�ɻ�ͼ����
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
//	int arr[] = {0,1};//���Բ�д[]��Ĵ�С��
//	int a = 40; 
//		;	int c = 212;
//	int ret = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n", ret);
//	printf("%d\n", arr[1]);
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'b','i','t'};//\0������0��������ֹ�ַ������ַ�'0'���У�����ASCII����48��
//	printf("%d\n", strlen(arr));//����������
//	return 0;
//}


//int main()
//{
//	double a = 0;
//	double b = 0;
//	scanf("%f %f", &a, &b);//��С����ʽ���룬��ȷ�����ȣ�
//	if (a > b)
//	{
//		printf("a>b");
//	}
//	 
//	else if(a < b)//���֧ѡ����䣻
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
//	else if (x < 0)//���֧ѡ����䣻
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
//	printf("%d", y);//һ��������ͺ��ˣ�
//	return 0;
//}




//int main()
//{
//	int a = 8;
//	a %= 5;//��ֵ��ģ�ȣ�
//	float b = a / 2.0;//��2�������ͣ���2.0���Ǹ����ͣ�
//	int c = a % 2;//ȡģ������������
//	printf("%.1f\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//

 
//int main()
//{
//	int flag = 1;//0��ʾ�棬��0��ʾ�棻
//	if (!flag)//����Ϊ�ٲ���������ָ���Ϊȡ�������������٣��ٱ��棻
//	{
//		printf("�������С�");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����b=a,����a++����a=a+1����
//	//printf("%d\n", a);//���Ϊ11��
//	//printf("%d\n", b);//���Ϊ10��
//	int b = ++a;//����a++������b=a+1��
//	//printf("%d\n", a);//���Ϊ11��
//    //printf("%d\n", b);//���Ϊ11��
//	return 0;
//}


//int main()
//{
	//double a = 3.14;
	//printf("%.2f", a);
	//return 0;

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//������������ֽڳ��ȣ�
	//printf("%d\n", sizeof(arr[0]));//�������һ��Ԫ�ص��ֽڳ��ȣ�

	//int a = 0;
	//int b = 2;
	////if (a && b);//���߼�
	////{
	////	printf("ok!");
	////}//0&2Ϊ�񶨣��������У�

	//if (a || b) 
	//{
	//	printf("ok!\n");//0|2Ϊ�϶����������У�
	//}
	////��Ŀ����������
	//int ret = a > b ? a : b;   //?ǰΪ�������֮ǰ�ģ���a��?ǰΪ�����������ģ���b��
	//printf("%d\n", ret);//���a��b�Ľϴ�ֵ��������if-else��䣻

	//int a = 5;
	//int b = 36;
	//int c = -6;
	//int d = (c = a + b, b = 2*c * a, a = b - c);//d��ֵΪ���е�ʽ���մ�����˳���������һ����ʽ�Ľ���� 
	//printf("%d\n", d);
	//typedef unsigned int uint;//�ı��������ƣ��Լ���һ���������;��򵥣���������
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
//	static int a = 1;//static//���������ھ�̬�������ξֲ�����ֻ����һ���ҳ�������������٣�
//	a++;
//	printf("%d\n", a);//�ӳ��������������ڵ����������
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)//����ǧ���ӷֺţ���Ȼ������ѭ������û�������
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int Add(int x, int y);//int Addǰ���static��ȫ�ֿɵ��ú�����ɽ���ǰ�ļ����ã�
////��ɾ�̬������
//int main()
//{
//	int a = 4;
//	int b = 32;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}

//#define pig = 0;
//#define Add(x,y) x+y//ֱ��define���庯��(��)���߳�����
//
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int c = Add(a, b);
//	register int num = 3;//���齫����num��ֵ����ڼĴ����з�����ã�������ʱҲ����������ط������ٻ�����cache���ڴ棬Ӳ����)��
//	printf("%d %d", num,c);//��ߴ��������ٶȣ�
//	return 0;
//}

//#define V(x,y,z) ((x)+(y)*(z))
//int main()
//{
//	int a = 3; int b = 6; int c = 9;
//	printf("%d", V(a, b, c));
//	return 0;
//}

//0x 00 00 00 0a;ʮ�������ڴ洢�淽ʽ��0x��ʮ�����Ʊ�ʶ����
//int main()
//{
//	int a = 7;
//	char ch = 'x';
//	printf("%p\n", &a);
//	int* p = &a;//P��ָ�����(pointer)������a�ĵ�ַ��
//	char* pc = &ch;
//	*p = 20;//�������ţ�ͨ��p���ŵĵ�ַ�ҵ�a���ڵĵ�ַ����ֵ��
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 67;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%zu\n", sizeof(int*));//64λϵͳ���е�ַ����ռ��8byte��
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char gender[10];
//	char tele[12];
//};//����һ���ṹ��ģ�壻
//
//void print(struct stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).gender, (*ps).tele);//���ô�����ݵ�ַ��*ps���ҵ�ֵ��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->gender, ps->tele);//����ָ������ҵ�struct stu�ṹ�����ֵ��
//}
//
//int main()
//{
//	struct stu s = { "chenxin",26,"male","17370138078" };//���ô����õĽṹ��ģ�崴��һ����������ϵı���s;
//	printf("%s %d %s %s\n", s.name, s.age, s.gender, s.tele);//д��s.��ѡ��ṹ�����������
//	//Ҳ�����ú�����ʽ��
//	print(&s);
//
//	return 0;
//}



// ��������
//void add(double a, double b);
//void multiply(double a, double b);
//
//int main() {
//	// ��������
//	double num1, num2;
//	int choice;
//
//	// �û�����
//	printf("�������һ�����֣�");
//	scanf("%lf", &num1);
//
//	printf("������ڶ������֣�");
//	scanf("%lf", &num2);
//
//	printf("��ѡ�������\n");
//	printf("1. �ӷ�\n");
//	printf("2. �˷�\n");
//	printf("��������ѡ��");
//	scanf("%d", &choice);
//
//	// ���ƽṹ
//	switch (choice) {
//	case 1:
//		add(num1, num2); // ���üӷ�����
//		break;
//	case 2:
//		multiply(num1, num2); // ���ó˷�����
//		break;
//	default:
//		printf("��Чѡ����ѡ��1��2��\n");
//	}
//
//	return 0; // �������
//}
//
//// ����ӷ�����
//void add(double a, double b) {
//	double result = a + b;
//	printf("�����%.2f + %.2f = %.2f\n", a, b, result);
//}
//
//// ����˷�����
//void multiply(double a, double b) {
//	double result = a * b;
//	printf("�����%.2f * %.2f = %.2f\n", a, b, result);
//}


//int main() 
//{
//	int a = 0; int b = 0;
//
//	printf("�����뱻������");
//	scanf("%d", &a);
//
//	printf("�����������");
//	scanf("%d", &b);
//
//	int x = a / b;
//
//	int y = a % b;
//
//	printf("��Ϊ��%d ����Ϊ��%d", x, y);
//	
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	printf("�������������䣺");
//	scanf("%d", &age);
//
//	if (age >= 18)
//		printf("����");
//	else if (age > 0 && age<18)
//	{
//		printf("δ����\n");
//		printf("�㲻�ܺȾ�\n");
//	}
//	else
//		printf("�㲻���˰�");
//	
//	return 0;
//} 

//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a == 0)
//	//{//������ϴ�����else�غ������������ifƥ�䣻
//		if (b == 3)
//			printf("yes");
//	//}
//		else//else���Զ�ƥ����������������if��
//			printf("no");//���Ե�һ��ifΪ�٣���������ִ�У�
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
//  //else//���Բ�Ҫ���else�����ǻ�Ӱ���Ķ�����������
//		return 0;
//}

//int main()
//{
//	int a = 4;
//	int ret = test(a);
//	printf("%d", ret);
//
//	int num = 5;
//	if (5 == num)//�жϱ����Ƿ���һ������Ȱѱ���д�ұߣ����ڱ�������飻
//		print("ok");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//������&ȡ��ַ��������
//
//	if (a%2 == 0)
//		printf("ż��");
//	else
//		printf("����");
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
//		i++;//��ǰ֪�������������Ի���i+=2��
//
//	}//���1-100��������
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//����һ��Ҫ�����ͣ�
//	{
//	case 1://��һ��Ҫ�пո�ҲҪ�����ͣ�
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;//���break��ü��ϣ������Ժ��������case��
//	default:
//		printf("����������������룡");//����defaultĬ����������û���������
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//break��������ѭ����ִ�д��������һ�д��룻
//			continue;//����ѭ������Ĵ��룬��������whileѭ����
//		printf("%d\t", i);
//		i++;
//
//	}
	//printf("������һ����ĸ��");
	//spot:
	//;
	//int ch = getchar();//��������ַ���ASCII�����ch��������ʱ��getchar�᷵��EOF��end of file��-1�������������Ͷ��壻

	//getchar();//ȥ�����ݻ���������س��γɵ�'\n'��

	//if (ch >= 65 && ch <= 90)

	//	printf("%c\n", ch + 32);

	//else if (ch >= 97 && ch <= 122)//ת����ĸ�Ĵ�Сд��

	//	putchar(ch - 32);//���ֶ�������������ַ���

	//else
	//{
	//	printf("����������������룡\n");
	//	goto spot;//��ת��spot����
	//}

//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	//printf("%c %c %c %c %c %c %c %c %c %c %c %c\n", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);//��ӡ���ֶ�ӦASCII���ַ���
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
//	printf("�������λ���գ��磺19980124����");
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
//	printf("���ֵΪ��%d", max);
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
//		//	ret2 = ret2 * i;//�۳���׳ˣ�
//		//}
//		//ret1 = ret1 + ret2;
//		ret2 = ret2 * j;
//		ret1 = ret1 + ret2;//ֱ�Ӹ�ǰһ���׳�ѭ����һ����ǰ��jֵ�Ϳ����ˣ�
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
//	printf("�ҵ��ˣ���Ҫ�ҵ����±���%d", i);
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
//	// ����ѭ����ֱ������ɹ�
//	while (1)
//	{
//		printf("������һ��������");
//		scanf("%d", &k);
//		ret = scanf("%d", &k);
//
//		if (ret == 1)
//		{
//			break;
//		}
//		// ������뻺����
//		else
//		{
//			while(getchar() != '\n'); // �����������еĴ�������
//
//			printf("������Ч��������һ��������\n");
//		}
//		
//	}
//	printf("�ɹ���ȡ������%d\n", k);
//
//	while (L <= R)
//	{
//		int i = (L + R) / 2;//����L+(R-L)/2��ֹ�����
//		if (arr[i] < k)
//			L = i + 1;//��С��߽磻
//		else if (arr[i] > k)
//			R = i - 1;//��С�ұ߽磻
//		else
//		{
//			printf("�ҵ��ˣ���������±���%d\n", i);
//			break;
//		}
//	}
//	if (L > R)
//		printf("��Ǹ��û���ҵ��������.\n");
//
//	return 0;
//
//}


//#include <string.h>//strlen������
//#include <windows.h>//sleep������
//#include <stdlib.h>//system������

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
//		Sleep(1000);//��ʱ��������λ��ms��
//		system("cls");//systemϵͳ�⺯��������ϵͳ���cls��յ�ǰ��Ļ��clear screen;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//���������cls��յ������������
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
//		printf("���������룺");
//		scanf("%s", input);
//		
//			if (strcmp(pass_word, input) == 0)//Ӧ����strcmp���Ƚ����������Ƿ���ȣ�
//			{
//				printf("������ȷ�������ɹ���\n");
//				return 0;
//			}
//			else
//			{
//				j++;
//				if (j == 3)
//					break;
//				printf("��������㻹�� %d �λ���!\n", 3 - j);
//			}
//			//if ( == )
//			//	printf("�ѽ���");
//			//else
//			//	printf("δ����");
//	}
//	return 0;
//}

#include <time.h> //rand()����

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
//	//int ret = rand();//0-32367֮����������
//	int ret = (rand() % 100) + 1;//����1-100���������
//	while (a != ret)
//	{
//		printf("������һ��1-100��������");
//		scanf("%d", &a);
//		i++;
//
//		if (a < ret)
//		{
//			printf("����С��\n");
//		}
//
//		if(a > ret)
//		{
//			printf("���ִ���\n");
//		}
//	}
//	printf("��ϲ��¶��ˣ������%d����һ������%d��\n",ret,i);
//}//��Ϸ���е����庯����
//  
//
//int main()
//{
//	srand((unsigned int)time(NULL));//����ϵͳʱ���������������
//	int input = 0;
//	do
//	{
//		menu();//�˵�������
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//		
//	} while (input != 0);
//
//	return 0;
//
//}

//shutdown -s -t 60;ϵͳ��60s�ڹػ���-s���ùػ�  -t����ʱ�䵹��ʱ�ػ� 60�ػ�����ʱ��
//shutdoen -a ȡ���ػ���

//int main()
//{
//	char arr[50] = {0};
//	system("shutdown -s -t 60");
//
//	printf("ע�⣡��ĵ��Խ���60S�ڹػ�������\"������\"�����ֿ�ȡ���ػ�-_-\n");
//
//	while (1)
//	{
//		scanf("%s", arr);
//
//		if (strcmp( arr, "������") == 0)//�Ƚ������ַ�������ͬ����0��
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//		{
//			printf("��Ҳ�����?���������?����5�룡\n");
//			Sleep(5000);//��5���ӣ�
//		}
//	}
//	return 0;
//}

//void swap( int x, int y);//��ʽ���������Լ��Ĵ洢�ռ䣬ֻ��ʵ��num1��num2����ʱ���ݣ������������޷�����num1����num2��
//void swap(int* px, int* py)//��������ָ��
//{
//	int z = 0;
//	z = * px;//��* xָ������ݣ�Ҳ������������&num1���ڵ�ַ��ֵnum1����ֵ��z��
//	* px =* py;
//	* py = z;
//}//�������Զ�����һ��������
//
// int add(int x,int y)//���ı�ʵ�ξͲ���Ҫȡʵ�εĵ�ַ��
// {
// int z = 0;
// z = x + y;
// return z;
// }
//int main()
//{
//	int num1 = 30;
//	int num2 = 17;
//	swap(&num1, &num2);//�ѱ����ĵ�ַ���ݸ����������������ú������������ͱ���������
//	printf("������num1=%d��num2=%d\n", num1, num2);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��ã�������������������һ����Ҫ���ڵڶ�����\n");
//	scanf("%d %d", &a, &b);
//	if (a <= b)
//	{
//		printf("����\n");
//		return 1;
//	}
//	printf("��ȷ\n");
//
//	return 0;
//
//}

//#include <math.h>//��ѧ�⺯����sqrt()ȡƽ����������

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)//������2~i-1֮�����ȥ����i;һ����������һ����һ��С�ڵ����������ƽ������
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
//	printf("\n��������Ϊ��%d��\n", count);
//
//		return 0;
//}

//int is_prime(int x)//����һ��is_prime������������ֱ�ӵ��þ����ж��Ƿ�������������д��bool���� bool is_prime(int x),���ص���true �� false��
//{
//		int j = 0;
//		for (j = 2; j <= sqrt(x); j++)//������2~i-1֮�����ȥ����i;һ����������һ����һ��С�ڵ����������ƽ������
//		{
//			if (x % j == 0)
//			{
//				 return 0;
//			}
//		}
//		return 1;//����������1��������������0��
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
//	printf("\n��������Ϊ:%d\n", count);
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
//	printf("\nһ����%d�����ꡣ\n",count);
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
//	printf("���������:");
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("%d�������ꡣ\n", year);
//		return 0;
//	}
//		printf("%d�겻�����ꡣ\n", year);
//	return 1;
//}

//int binaru_search(int num[], int size, int target)//�βκ�ʵ�����ֿ�����ͬ��
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
//		printf("û�ҵ������֣�\n");
//	}
//	else
//	{
//		printf("�ҵ��������ˣ������±���%d\n", ret);
//	}
//	return 0;
//}

//int Add(int x, int y,int limit)//������д��������ʱĬ�Ϸ���������int���ͣ�
//{
//	int z = x + y;
//	if (z > limit)
//		return z;
//	else
//		return Add(z, y, limit);//�Լ������Լ������ݹ飻
//}//��������ڵ���֮ǰ�������⺯��Ҳ�����������ߵ���֮ǰ��������ĺ�����
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
//	if (*str != '\0')//��ֹ�������ӵݱ�ɹ��������
//	{
//		return 1 + getstrlen(str + 1);//ÿ����һ��Ҫ�ñ������ӽ���ֹ����һЩ����Ȼ�ͻ����ݹ飻
//	}
//	return 0;
//}
//
//int main()
//{
//	char str[] = "Hello world!";
//	int len = getstrlen(str);
//	printf("�ַ�������Ϊ��%d ", len);
//	return 0;
//}

//int factorial(int x)
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= x; i++)//��ѭ���ķ�ʽ��׳ˣ�
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
//	printf("������һ��������:");
//	scanf("%d", &input);
//	int ret = factorial(input);
//	printf("%d�Ľ׳�Ϊ%d ", input, ret);
//	return 0;
//}

//int Fibonacci(int x)
//{
//	if (x > 2)
//		return (Fibonacci(x - 1) + Fibonacci(x - 2));//�ݹ����n��쳲���������
//	else
//		return 1;
//
//}

//int Fibonacci(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)//�õ����ķ�����쳲��������У�
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
//	printf("������һ����������");
//	scanf("%d", &input);
//	int ret = Fibonacci(input);
//	printf("�� %d ��쳲��������� %d ", input, ret);
//	return 0;
//}

//int psbl(int x)
//{
//	if (x >= 3)
//		return psbl(x - 1) + psbl(x - 2);//������̨������
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
//	printf("��%d�ֿ�����", ret);
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
//	printf("������Ҫ�ƶ� %d ��", ret);
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
//	printf("��������������:");
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int max = a > b ? a : b;//���Բ��ж��������Ĵ�С��
//	while (max % min != 0)//��շת������������������Լ����
//	{
//		int c = 0;
//		c = min;
//		min = max % min;
//		max = c;
//	}
//	printf("���������������Լ��Ϊ��%d ", min);
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
//	printf("1-100���������к���9����Ϊ��%d ��", num);
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
//	//���������ַ�����  int flag = 1; sum = sum + flag*(1/i); flag = -flag; ÿ����һ�α�һ�η��ţ�
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
//		 scanf("%d", &arr[k]);//������һ��һ������������Ӧ�±����ֵĵ�ַ�У�
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
//	printf("�����Ϊ %d ,���±�Ϊ�� %d", max, j);
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
//			printf("%d * %d = %d  ",i,j, i * j);//��ӡ�˷��ھ���
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
//			printf("%d*%d=%-2d ", i, j, j * i);//�����淶�ĳ˷��ھ���%2d,��ӡ��λ������ֻ��һλ������ո���䣻%-2d������ҿո���䣻
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
//			printf("%d ", arr[i][j]);//��ӡ��ά���飻
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
//					arr[i] = temp;//ð������
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
//		scanf("%d", &arr[k]);//����10��������������arr[]������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}
//&arr����������ĵ�ַ��&arr+1ֱ������һ����������ֽڳ��ȣ�arr[10]������40���ֽڣ�
// arr��&arr[0]�����ȼۣ�����������Ԫ�ص�ַ��arr+1��&arr[0]+1ֻ����һ��Ԫ�ؼ�4���ֽڴ�С��ǰ��int����Ԫ��;
//���⣺sizeof�����е�arr��ʾ����������ֽڴ�С()������β��\0��sizeof��arr[10]��=40��ǰ��int�������飻


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
//		R--;//�õ����ķ�ʽ��һ���ַ������������У�
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
//	int R = sz - 1;//�����п���ʹ��strlen����ʹ��sizeof
//
//	if (L < R)
//	{
//		reverse(arr + 1, sz - 2);//�ݹ����reverse�ַ�����������
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
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//""��ʾ���ַ����ֽڴ�С������β��\0;
//	reverse(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%c ", arr[i]);
//	return 0;
//}
//˫�����㷨��
 
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
//}//�������ݹ����ַ���������
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
//	if (num / 10 != 0)//��num >= 10;
//		return (num % 10) + DigitSum(num / 10);//�ݹ���һ������ÿһλ֮�ͣ�
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
//	printf("���������������ָ����");
//	scanf("%d %d", &n, &k);
//	int ret = test(n,k);
//	printf("%d\n", ret);
//	return 0;
//}�ݹ���n��k�η���
//sizeof(arr)=sizeof(int [10])   int arr[10]��arr�����;���int [10];
//sizeof�����ǲ�����������ڴ��С�������ֽڣ�\0Ҳռһ���ֽڣ�strlen�����Ǻ�����������ַ�Ԫ�ظ���������\0

//void Swap(int* arr1, int* arr2,int sz)
//{
//	int temp = 0;
//	if (sz>0)
//	{
//		temp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = temp;
//		Swap(arr1 + 1, arr2 + 1, sz-1);//�ݹ齻�������ȳ������ÿ��Ԫ�أ�
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

//void init(int arr[],int sz)//�����ʼ������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//
//void reverse(int arr[], int sz)//���鵹�����к�����
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