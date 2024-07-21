// 4-bit full adder code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Year one project 
//DATE: 28/5/2023


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "A3" << setw(4) << "A2" << setw(4) << "A1" << setw(4) << "A0" << setw(3) << "|" << setw(4) << "B3" << setw(4) << "B2" << setw(4) << "B1" << setw(4) << "B0" << setw(4) << "|" << setw(4) << "S3" << setw(4) << "S2" << setw(4) << "S1" << setw(4) << "S0" << setw(4) << "|" << setw(6) << "Carry" << endl;
	for (int i = 0; i < 16; i++)
	{

		for (int A3 = 0, B3 = 0; A3 < 2, B3 < 2; ++B3, ++A3)
		{
			for (int A2 = 0, B2 = 0; A2 < 2, B2 < 2; ++B2, ++A2)
			{
				for (int A1 = 0, B1 = 0; A1 < 2, B1 < 2; ++A1, ++B1)
				{
					for (int A0 = 0, B0 = 0; A0 < 2, B0 < 2; ++A0, ++B0)
					{


						int sum1, sum2, sum3, sum4, c_in = 0;
						int carry1, carry2, carry3, carry4;
						carry1 = ((A0 ^ B0) && c_in) + (A0 && B0);
						sum1 = ((A0 ^ B0) ^ c_in);
						carry2 = ((A1 ^ B1) && carry1) + (A1 && B1);
						sum2 = ((A1 ^ B1) ^ carry1);
						carry3 = ((A2 ^ B2) && carry2) + (A2 && B2);
						sum3 = ((A2 ^ B2) ^ carry2);
						carry4 = ((A3 ^ B3) && carry3) + (A3 && B3);
						sum4 = ((A3 ^ B3) ^ carry3);

						cout << A3 << setw(4) << A2 << setw(4) << A1 << setw(4) << A0 << setw(4) << "|" << setw(4) << B3 << setw(4) << B2 << setw(4) << B1 << setw(4) << B0 << setw(4) << "|" << setw(4) << sum4 << setw(4) << sum3 << setw(4) << sum2 << setw(4) << sum1 << setw(4) << "|" << setw(4) << carry4 << endl;
					}
				}
			}
		}
	}
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "If you want to add two 4-bit numbers: " << endl;
	cout << "-----------------------------------------" << endl;
	int counter = 0;

	for (int A3 = 0, B3 = 0; A3 < 2, B3 < 2; ++B3, ++A3)
	{
		for (int A2 = 0, B2 = 0; A2 < 2, B2 < 2; ++B2, ++A2)
		{
			for (int A1 = 0, B1 = 0; A1 < 2, B1 < 2; ++A1, ++B1)
			{
				for (int A0 = 0, B0 = 0; A0 < 2, B0 < 2; ++A0, ++B0)
				{
					cout << "Enter A0:" << endl;
					cin >> A0;
					cout << "Enter A1:" << endl;
					cin >> A1;
					cout << "Enter A2:" << endl;
					cin >> A2;
					cout << "Enter A3:" << endl;
					cin >> A3;
					cout << "Enter B0:" << endl;
					cin >> B0;
					cout << "Enter B1:" << endl;
					cin >> B1;
					cout << "Enter B2:" << endl;
					cin >> B2;
					cout << "Enter B3:" << endl;
					cin >> B3;
					int sum1, sum2, sum3, sum4, c_in = 0;
					int carry1, carry2, carry3, carry4;
					carry1 = ((A0 ^ B0) && c_in) + (A0 && B0);
					sum1 = ((A0 ^ B0) ^ c_in);
					carry2 = ((A1 ^ B1) && carry1) + (A1 && B1);
					sum2 = ((A1 ^ B1) ^ carry1);
					carry3 = ((A2 ^ B2) && carry2) + (A2 && B2);
					sum3 = ((A2 ^ B2) ^ carry2);
					carry4 = ((A3 ^ B3) && carry3) + (A3 && B3);
					sum4 = ((A3 ^ B3) ^ carry3);
					cout << "The Sum is: ";
					cout << sum4 << "    " << sum3 << "    " << sum2 << "    " << sum1 << "    |   " << carry4 << endl;
					counter++;
					if (counter % 1 == 0)
					{
						break;
					}

				}
			}
		}
	}

}
