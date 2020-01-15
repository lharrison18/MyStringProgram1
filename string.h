#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class MyString
{
private:
	
	void resizeIfFull();
	
	

public:

	MyString();
	int get(index);
	MyString(string size);
	MyString(MyString size);
	void addElement(array ele);
	void addElement(int index, array ele)



};// end of the class

MyString::MyString()
{
	arr == nullptr;
	curr.len = 0;
	capacity = 0;
	
	

}
int MyString::get(int index)
{
	return arr[index];
}
MyString::MyString(string size)
{
	int curr.len;
	arr[i] = size.arr[i];
	


}
MyString::MyString(MyString size)
{
	arr[] larger = new element[curr.len + 1];
	for (int i = 0; i < curr.len; i++)
	{
		larger[i] = element[i];
		element = larger;
	}

	

}
void MyString::resizeIfFull()
{
	arr[] larger = new element[curr.len + 1];
	
	if (arr < curr.len) return;
	arr[]larger = new element[2 * curr.len];
	for (int i = 0; i < curr.len; i++)
	{
		larger[i] = element[i];
		element = larger;
	}
}
void MyString::addElement(array ele)
{
	resizeIfFull();
	element[capacity] = ele;
	capacity++;

}
void MyString::addElement(int index, array ele)
{
	resizeIfFull();
	for (int lose = capacity - 1; lose >= index; lose-- )
	{
		arr[lose + 1] = arr[lose];

	}
	arr[index] = arr;
	capacity++;
	delete[]element;
}