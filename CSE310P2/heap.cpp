#include "stdafx.h"
#include <iostream>
using namespace std;
//#include "element.h"



	//Constructor
	HEAP::HEAP()
	{

	}

	HEAP HEAP::Initialize(int n)
	{
		
		//Could do this more explicitly
		HEAP heap;
		//heaper *heapy = new heaper;
		//ELEMENT *j = new ELEMENT[n];
		heap.heapy->capacity = n;
		heap.heapy->H = new ELEMENT[n];
		heap.heapy->size = 0;

		//cout << heap.heapy->size << endl;

		return heap; //Whatever, it works.  Get to the other noise.

	}
	void HEAP::BuildHeap(HEAP heap, ELEMENT *A)
	{
		//I'm very dumb
		int size = heap.heapy->size;
		int i = 0;

		//Work your magic in the morning
		



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


