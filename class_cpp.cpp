# include <iostream>

using namespace std;

class rectangle {
 int width, height;
 
public:
 void set_val(int, int);
 int area(void);
};

void rectangle::set_val(int x, int y)
{
	width = x;
	height = y;
}

int rectangle::area()
{
	return (width*height);
}

int main()
{
	rectangle ret;
	ret.set_val(3, 4);
	cout << "area: " << ret.area();
	return 0;
}
