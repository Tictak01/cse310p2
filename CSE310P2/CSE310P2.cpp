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
	/* Testing 
	ELEMENT i = ELEMENT(11);
	cout << i.key << endl;
	*/
	HEAP t = HEAP();
	
	t.Initialize(110);
	ELEMENT r[22];
	t.BuildHeap(t, r);

	cout << t.capacity << endl;
	

	//Parse whatever is entered in for particular commands.  If not a command, ask again.  Include ? for funsies


	system("pause");
    return 0;
}

