#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0;
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


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷������\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s",ps->data[ps->size].name);
		printf("����������\n");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰\n");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("������\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
	printf("������Ҫɾ���˵�����");
	scanf("%s",name);
	//1.����Ҫɾ���˵�λ��
	//int i = 0;
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (strcmp(ps->data[i].name, name) == 0)
	//	{
	//		break;
	//	}
	//}
	int i = FindName(ps, name);
	//2.ɾ��
	if (i == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME] = {0};
	printf("������Ҫ�����˵�����\n");
	scanf("%s",name);
	int i=FindName(ps,name);
	if (i == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s",name);
	int i = FindName(ps,name);
	if (i == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", ps->data[i].name);
		printf("����������\n");
		scanf("%d", &(ps->data[i].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[i].sex);
		printf("������绰\n");
		scanf("%s", ps->data[i].tele);
		printf("�������ַ\n");
		scanf("%s", ps->data[i].addr);
		ps->size++;
		printf("�޸����\n");
	}
}