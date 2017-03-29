#include "stdafx.h"
#include "element.cpp"

class HEAP
{
public:
	int capacity;
	int size;

	//Constructor
	HEAP(int c, int s)
	{
		capacity = c;
		size = s;
		

		ELEMENT *H = new ELEMENT[capacity];
	}


};