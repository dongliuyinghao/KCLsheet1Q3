#include<iostream>
#include<cmath>
using namespace std;
int SUM(int);//Problem 3 �ݹ����function
int show_number(int, int);//Promblem 4 ��ʾ��������֮���������
int main() {

	/////Problem 1 ѭ������׳�/////
	//version 1 for loop
	cout << "Problem 1 version 1" << endl;
	cout << "Please enter a natural number, we will compute the factorial of this number." << endl;
	int n1;
	int fac=1;
	cin >> n1;
	for (int i = 1; i <= n1; i++)
	{
		fac = i * fac;    //�������
	}
	cout << "The factorial of " << n1 << " is " << fac << endl << endl;

	//version 2 while loop
	cout << "Problem 1 version 2" << endl;
	cout << "Please enter a natural number, we will compute the factorial of this number." << endl;
	int n2;
	int i2 = 1;
	int fac2 = 1;
	cin >> n2;
	while (i2 <= n2)
	{
		fac2 = i2 * fac2;
		i2++;    //��������
	}
	cout << "The factorial of " << n2 << " is " << fac2 << endl << endl;

	//version 3 do-while loop
	cout << "Problem 1 version 3" << endl;
	cout << "Please enter a natural number, we will compute the factorial of this number." << endl;
	int n3;
	int i3 = 1;
	int fac3 = 1;
	cin >> n3;
	do
	{
		fac3 = i3 * fac3;
		i3++;    //��������
	} while (i3 <= n3);
	cout << "The factorial of " << n3 << " is " << fac3 << endl << endl;


	/////Problem 2 for loop������/////
	cout << "Problem 2" << endl;
	double x;
	double x2 = 1;
	int n;
	int n_positive;
	cout << "Please enter any number x and any positive int n, we will compute x^n" << endl <<"x = "<< endl;
	cin >> x;
	cout << "If n is negative, we will make it positive. n = " << endl;
	cin >> n;
	n_positive = ((n < 0) ? -n : n);   //���������Ǹ������Զ�ת��Ϊ����

	if (x!=0 && n_positive != 0)     //���۷�0���ķ�0���ݣ�������
	{
		for (int i = 0; i < n_positive; i++)
		{
			x2 = x * x2;
		}
		cout << "The " << n_positive << " power of " << x << " is " << x2 << endl << endl;
	}
	else if (x==0 && n_positive == 0)     //����0��0�������޶����
	{
		cout << "The " << n_positive << " power of " << x << " is " << " meaningless " << endl << endl;
	}
	else      //���۷�0����0����
	{
		cout << "The " << n_positive << " power of " << x << " is " << "1 " << endl << endl;
	}
	

	/////Problem 3�ݹ����/////
	cout << "Problem 3" << endl;
	cout << "Please enter any positive int n, we will compute the sum of the numbers between 1 and n " << endl << "n = " << endl;
	int ncin;
	int sum_result;
	cin >> ncin;
	sum_result = SUM(ncin);
	cout << "The sum of the numbers between 1 and "<< ncin << " is " << sum_result << endl << endl;


	/////Problem 4/////
	cout << "Problem 4" << endl;
	cout << "Please enter two integer number a and b, we will print out all the number from a to b" << endl << "a = " << endl;
	int low_a;
	cin >> low_a;
	cout << "b = " << endl;
	int up_b;
	cin >> up_b;
	int print = show_number(low_a, up_b);
	
	return 0;
}

/////Problem 3 recursive function/////
int SUM(int n_sum)
{
	int sum = 0;
	for (int i = 0; i <= n_sum; i++)
	{
		sum = i + sum;
	}
	return sum;   //���ظ����ú�����ֵ
}
//��������
//int SUM(int n_sum)
//{
//return n*(n+1)/2
//}


/////Promblem 4 print out all number from a and b/////
int show_number(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		cout << i;
	}
	return 0;
}
