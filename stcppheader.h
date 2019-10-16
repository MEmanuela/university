#pragma once

typedef struct student_cpp
{
	int nrMatricol;
	char nume[50];
	char gen;
	float nota;
	void read(void);
	void write(void);
}student;
