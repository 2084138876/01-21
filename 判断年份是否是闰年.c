//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int is_leap_year(int year)
//{
//	//�����귵��1���������귵��0
//	//���꣺ �ܱ�4�������Ҳ��ܱ�100�������� �ܱ�400����
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	// ���� ��ӡ1000-2000֮����������
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d	", year);
//		}
//	}
//	return 0;
//}