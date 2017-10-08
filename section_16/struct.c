#include <stdio.h>
#include <string.h>

typedef struct {
int year;	/* 学年 */
int clas;	/* クラス */
int number;	/* 出席番号 */
char name[64];	/* 名前 */
double stature;	/* 身長 */
double weight;	/* 体重 */
} student;

void student_print(student data);

int main(void)
{
	student data1;
	
	data1.year = 2;
	data1.clas = 4;
	data1.number = 18;
	strcpy(data1.name,"MARIO");
	data1.stature = 168.2;
	data1.weight = 72.4;
	
	student_print(data1); /* 呼び出し */
	
	return 0;
}

void student_print(student data)
{
	printf("[学年]:%d\n",data.year);
	printf("[クラス]:%d\n",data.clas);
	printf("[出席番号]:%d\n",data.number);
	printf("[名前]:%s\n",data.name);
	printf("[身長]:%f\n",data.stature);
	printf("[体重]:%f\n",data.weight);
	return;
}
