#include <iostream>	// ���������� ����������� ���������� ��� ������//
int main() //���� ���������//
{
	float y = 0.956, a = 5 * pow(10, -6), n = 4, t, u, s; //���� ���������� � ���������� ��������//
	t = 1 / sqrt(y) + 14 * a;//���������� ���������� t//
	u = (t + 1) / (a + 2);  //���������� ���������� u//
	s = log((2 * n / 3) + exp(-n) / u);  //���������� ���������� s//
	std::cout << "t=" << t << std::endl; //����� t � ��� ��������//
	std::cout << "u=" << u << std::endl; //����� u � ��� ��������//
	std::cout << "s=" << s << std::endl; //����� s � ��� ��������//
}