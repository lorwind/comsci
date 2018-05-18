#include <iostream>




class Person
{
private:
	Person(int p_id);
	int m_id;

public:
	int getID() const;
};

Person::Person(int p_id)
	:m_id(p_id)
{
}

// const after the function name prevents
// the member function to modify the member variables of the class
// Note that this is only possible for member functions
//  "error: assignment of member 'Person::m_id' in read-only object"
int Person::getID() const
{
	//m_id = 100;
	return m_id;
}

//As I mentioned, this is only possible for member functions
// "error: non-member function 'int myFunction()' cannot have cv-qualifier"
//int myFunction() const
//{
//	return 100;
//}

int main()
{


//They are both valid and equivalent
int const one = 1;
const int two = 2;

int three = 3;

//But in the context of pointer they are not equivalent
int* const four = &three; // This is a constant pointer to integer therefore it must be initialized



const int* five; //while this one is a pointer to  constant integer, meaning it points to a value that cant be change


//We cannot initialize it to a constant integer
//int* const six = &one; //"error: invalid conversion from 'const int*' to 'int*' [-fpermissive]"
//Instead we should use constant pointer to constant integer
const int* const seven = &one;

five = &one; // It can be assigned to a constant integer
//*five = 5; // "error: assignment of read-only location '* five'"


//
//four = &three;



    return 0;
}
