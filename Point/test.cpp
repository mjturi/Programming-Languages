#include <iostream>
#include "point.cpp"



int main()
{
	std::cout.setf(std::ios::boolalpha);

	std::shared_ptr<point> p1;


	point point1(3.75, 4.75);
	point point2(1.0, 0.0);
	point point3(1.0, 0.0);
	
	std::cout << ("Displaying Point:") << std::endl;
	std::cout << point1 << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing distance:") << std::endl;
	std::cout << (point1.distance()) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing <:") << std::endl;
	std::cout << (point2 < point1) << std::endl;
	std::cout << (point1 < point2) << std::endl;
	std::cout << (point1 < point1) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing >:") << std::endl;
	std::cout << (point1 > point2) << std::endl;
	std::cout << (point2 > point1) << std::endl;
	std::cout << (point3 > point3) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing <=:") << std::endl;
	std::cout << (point2 <= point1) << std::endl;
	std::cout << (point1 <= point2) << std::endl;
	std::cout << (point2 <= point3) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing >=:") << std::endl;
	std::cout << (point1 >= point2) << std::endl;
	std::cout << (point2 >= point1) << std::endl;
	std::cout << (point3 >= point2) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing ==:") << std::endl;
	std::cout << (point1 == point2) << std::endl;
	std::cout << (point3 == point2) << std::endl;
	std::cout << std::endl;
	std::cout << ("Testing !=:") << std::endl;
	std::cout << (point3 != point2) << std::endl;
	std::cout << (point1 != point2) << std::endl;
}
