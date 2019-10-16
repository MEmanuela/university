#pragma once


typedef struct student_c
{
	int nrMatricol;
	char nume[50];
	char gen;
	float nota;
	void(*read)(student_c *st);
	void(*write)(student_c *st);
};

void ReadData(student_c *st);
void WriteData(student_c *st);