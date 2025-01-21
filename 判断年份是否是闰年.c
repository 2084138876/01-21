//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int is_leap_year(int year)
//{
//	//是闰年返回1，不是闰年返回0
//	//闰年： 能被4整除并且不能被100整除；或 能被400整除
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
//	// 例如 打印1000-2000之间的闰年年份
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