/* C++ STL Container: Vector
*  Vector is a data structure that stores information in a contigous block of memory.
*  This code is intended for the discussion on Accessing Data in a vector
*/

#include <vector>
#include <iostream>

void print_vector(std::vector<int> in)
{
	for (auto a : in)
		std::cout << " " << a;
	std::cout << std::endl;
}

void learning_vector()
{
	//Uninitialized vector
	std::vector<int> vectA;
	print_vector(vectA);
	
	//Initialized vector
	std::vector<int> vectB{2,1,3,4,5,8};
	print_vector(vectB);

	//Getting the size of the vector
	std::cout << "vectA.size() = " << vectA.size() << std::endl;
	std::cout << "vectB.size() = " << vectB.size() << std::endl << std::endl;

	//Accessing Data using []
	std::cout << "FIrst element: vectB[0] = " << vectB[0] << std::endl;
	std::cout << "Last element : vectB[5] = " << vectB[5] << std::endl << std::endl;
	//std::cout << "Beyond Last element: vectB[6] = " << vectB[6] << std::endl; //Crashes the program

	//Accessing Data using at()
	std::cout << "First element: vectB.at(0) =" << vectB.at(0) << std::endl;
	std::cout << "Last element: vectB.at(5) = " << vectB.at(5) << std::endl << std::endl;
	//std::cout << "Beyond las element: vectB.at(6) = " << vectB.at(6) << std::endl; //Throws an exeption

	//Accessing First and Last element
	std::cout << "First element: vectB.front() = " << vectB.front()  << std::endl;
	std::cout << "Last element:  vectB.back()  = " << vectB.back() << std::endl << std::endl;

	//Accessing the pointer to the underlying array that holds the vector
	int* arr = vectB.data();
	std::cout << "First element: arr[0] = " << arr[0] << std::endl;
	std::cout << "Last element:  arr[5] = " << arr[5] << std::endl << std::endl;
}

int main()
{
	learning_vector();
  return 0;
}

