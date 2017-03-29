#include "stdafx.h"
//#include "element.h"



	//Constructor
	HEAP::HEAP(int c)
	{
		capacity = c;
		//size = s;
		

		H = new ELEMENT[capacity];
	}

	HEAP HEAP::Initialize(int n)
	{
		//Could do this more explicitly
		HEAP heap(n);

		return heap;

	}
	void HEAP::BuildHeap(HEAP heap, ELEMENT *A)
	{

	}
	void HEAP::Insert(HEAP heap, int k)
	{

	}
	void HEAP::DeleteMin(HEAP heap)
	{

	}
	void HEAP::DecreaseKey(HEAP heap, ELEMENT element, int value)
	{

	}
	void HEAP::printHeap(HEAP heap)
	{

	}


