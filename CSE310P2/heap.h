#pragma once
#ifndef heap_H
#define heap_H
#include <cstddef>


class HEAP
{
public:
	//
	int capacity;
	int size;
	ELEMENT *H;

	//Functions
	HEAP(int c);
	HEAP();
	HEAP Initialize(int n);
	void BuildHeap(HEAP heap, ELEMENT A[]);
	void Insert(HEAP heap, int k);
	void DeleteMin(HEAP heap);
	void DecreaseKey(HEAP heap, ELEMENT element, int value);
	void printHeap(HEAP heap);



};



#endif 