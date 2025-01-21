//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//数组传参实际上传递的是数组首个元素的地址，而不是整个数组，所以在函数内部计算一个通过函数参数传递过去的数组的大小、元素个数是不靠谱的
//int binary_sreach(int arr[], int k,int sz)
//{
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//中间下标
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了，返回下标
//		}
//	}
//	return -1;//找不到
//	
//}
//int main()
//{
//	int k = 0;
//	//在一个有序数组查找k
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的大小
//
//	int ret=binary_sreach(arr,k,sz);
//	//如果存在，返回下标
//	if (ret ==-1)
//	{
//		printf("找不到");
//		//如果不存在，返回-1
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//
//	}
//
//	return 0;
//}