//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//���鴫��ʵ���ϴ��ݵ��������׸�Ԫ�صĵ�ַ���������������飬�����ں����ڲ�����һ��ͨ�������������ݹ�ȥ������Ĵ�С��Ԫ�ظ����ǲ����׵�
//int binary_sreach(int arr[], int k,int sz)
//{
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;//�м��±�
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
//			return mid;//�ҵ��ˣ������±�
//		}
//	}
//	return -1;//�Ҳ���
//	
//}
//int main()
//{
//	int k = 0;
//	//��һ�������������k
//	scanf("%d", &k);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ĵ�С
//
//	int ret=binary_sreach(arr,k,sz);
//	//������ڣ������±�
//	if (ret ==-1)
//	{
//		printf("�Ҳ���");
//		//��������ڣ�����-1
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//
//	}
//
//	return 0;
//}