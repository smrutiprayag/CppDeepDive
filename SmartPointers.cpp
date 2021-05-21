#include<iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(int l,int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return l * b;

	}

private:
	int length;
	int breadth;
};

int main()
{
//####################################
	//unique_ptr
	unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
	cout << ptr->area();

	unique_ptr<Rectangle> ptr2;
	ptr2 = move(ptr); //only one pointer at a time is allowed
	cout << ptr2->area();
//####################################


//####################################
	//shared_ptr
	shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
	cout << ptr->area();

	shared_ptr<Rectangle> ptr2;
	ptr2 = ptr; //Multiple pointers allowed
	cout << ptr2->area();

	//no of objects pointing
	cout << ptr.use_count();
//####################################
}
