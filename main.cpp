#include "header.h"

int main()
{
	Stiva s;
	s.push(4);
	s.push(3);
	cout << s.top() << endl;
	s.push(9);
	cout << s.pop() << endl;
	s.push(2);
	s.print();
	_getch();
	
	return 0; 
}