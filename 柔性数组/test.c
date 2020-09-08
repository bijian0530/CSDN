#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//struct s
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct s* ps = (struct s*)malloc(sizeof(struct s) + 5 * sizeof(int));
//	ps->n = 10;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct s* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	free(ps);
//	ps = NULL;
//}


#include<stdio.h>
#include<stdlib.h>

struct s
{
	int n;
	int* arr;
};
int main()
{
	struct s* ps = (struct s*)malloc(sizeof(struct s));
	ps->arr = malloc(5*sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	int* ptr = realloc(ps->arr,10*sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}