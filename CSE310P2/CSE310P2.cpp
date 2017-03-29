// CSE310P2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "element.h"
#include <iostream>
//#include "element.cpp" Gets declared twice because heap.cpp has it included already.  Causes error and crash
//#include "heap.cpp"

using namespace std;


int main()
{
	ELEMENT i = ELEMENT(11);
	cout << i.key << endl;

	HEAP t = HEAP(4,8);

	cout << t.size << endl;

	system("pause");
    return 0;
}

