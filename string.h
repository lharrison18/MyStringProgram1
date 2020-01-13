#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class MyString
{
private:
	char arr();
	int capacity();
	int curr_length();
	

public:

	MyString();
	MyString(string s);
	MyString(MyString s);



};// end of the class

MyString::MyString()
{
	arr == nullptr;
	curr.len = 0;
	capacity = 0;

}
MyString::MyString(string s)
{
	arr[i] = s.arr[i];
	


}
MyString::MyString(MyString s)
{



}