#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int random(){return rand()%99 +1; }

void generate() 
{
	int one = random(), two = random(), three = random(), four = random();
	int check;
	int ret = rand() % 7;
	switch (ret)
	{case 0:
		cout << one << "*" << two << "+" << three << "=" << endl;
		check = one * two + three;
		break;

	case 1:
		cout << one << "-" << two << "*" << three << "=" << endl;
		check = one - two * three;
		break;

	case 2:
		while (two) { two = random(); }
		cout << one << "/" << two << "+" << three << "=" << endl;
		check = one / two + three;
		break;

	case 3:
		while (three) { three = random(); }
		cout << one << "*" << two << "/" << three << "=" << endl;
		check = one * two / three;
		break;


	case 4:
		while (two) { two = random(); }
		while (three) { three = random(); }
		cout << one << "/" << two << "/" << three << "=" << endl;
		check = one / two / three;
		break;

	case 5:
		cout << one << "*" << two << "*" << three << "=" << endl;
		check = one * two * three;
		break;

	case 6:
		while (three) { three = random(); }
		cout << one << "-" << two << "/" << three << "=" << endl;
		check = one - two / three;
		break;

	default:
		cout << "程序错误请重启！" << endl;
		break;
	}
}

int main()
{
	int test_num;
	cout << "请输入要生成的试题个数:";
	fflush(stdin);
	cin >> test_num;
	fflush(stdin);
	for (int i = 1; i <= test_num; i++)
	{
		srand(rand());
		generate();
	}
	return 0;
}