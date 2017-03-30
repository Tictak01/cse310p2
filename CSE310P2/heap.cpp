#include "stdafx.h"
#include <iostream>
using namespace std;
//#include "element.h"



	//Constructor
	HEAP::HEAP(int c)
	{
		capacity = c;
		//size = s;
		

		H = new ELEMENT[capacity];
	}

	HEAP::HEAP()
	{

	}

	HEAP HEAP::Initialize(int n)
	{
		//Could do this more explicitly
		HEAP heap(n);
		heap.size = 0;

		return heap;

	}
	void HEAP::BuildHeap(HEAP heap, ELEMENT A[])
	{
		//Find size of A
		int i = 0;
		cout << sizeof(A) << endl;
		cout << sizeof(*A) << endl;
		cout << "Length of array = " << (sizeof(A) / sizeof(*A)) << endl;

		

		//
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


