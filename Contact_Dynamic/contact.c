#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(struct Contact* ps)
{
	/*memset(ps->data,0,sizeof(ps->data));
	ps->size = 0;*/
	ps->data = (struct PeoInfo*)malloc(DEFAULT_CAPCITY*sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_CAPCITY;
}

static int FindName(const struct Contact*ps,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr == NULL)
		{
			return 0;
		}
		else
		{
			ps->data = ptr;
			ps->capacity += 2;
		}
	}
}
	
void AddContact(struct Contact* ps)
{
	CheckCapacity(ps);
	printf("请输入名字\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加完成\n");
}
	/*if (ps->size == MAX)
	{
		printf("通讯录已满，无法再添加\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s",ps->data[ps->size].name);
		printf("请输入年龄\n");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加完成\n");
	}
}*/

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME] = {0};
	printf("请输入要删除人的名字");
	scanf("%s",name);
	//1.查找要删除人的位置
	//int i = 0;
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (strcmp(ps->data[i].name, name) == 0)
	//	{
	//		break;
	//	}
	//}
	int i = FindName(ps, name);
	//2.删除
	if (i == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME] = {0};
	printf("请输入要查找人的名字\n");
	scanf("%s",name);
	int i=FindName(ps,name);
	if (i == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME] = {0};
	printf("请输入要修改人的名字\n");
	scanf("%s",name);
	int i = FindName(ps,name);
	if (i == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("请输入名字\n");
		scanf("%s", ps->data[i].name);
		printf("请输入年龄\n");
		scanf("%d", &(ps->data[i].age));
		printf("请输入性别\n");
		scanf("%s", ps->data[i].sex);
		printf("请输入电话\n");
		scanf("%s", ps->data[i].tele);
		printf("请输入地址\n");
		scanf("%s", ps->data[i].addr);
		ps->size++;
		printf("修改完成\n");
	}
}

void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}