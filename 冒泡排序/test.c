#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);        
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);        //³ö´íµØ·½
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int main()
//{
//	int f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);        
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age[10];
//};
//int strcmp cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
//}
//int main()
//{
//	struct stu s[3] = { {"xiaoming",20},{"daming",20},{"lingling",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz ,sizeof(s[0]), cmp_stu_by_age);
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//	char name[20];
//	int age[10];
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return strcmp (((struct stu*)e1)->name - ((struct stu*)e2)->name);
//}
//int main()
//{
//	struct stu s[3] = { {"xiaoming",20},{"daming",20},{"lingling",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	return 0;
//}


