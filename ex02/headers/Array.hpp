#pragma once
#include <iostream>

template <typename T>
class Array
{
	private:
		T*	ptr;
		int	len;
	public:
		Array(){ptr = new T[0];len = 0;};
		Array(unsigned int n){ptr = new T[n]; len = n;};
		Array(Array &cpy){
			ptr = new T[cpy.len];
			for (int i = 0; i < cpy.len; i++)
				ptr[i] = cpy.ptr[i];
			len = cpy.len;
		}
		Array& operator=(const Array& t)
		{
			ptr = new T[t.len];
			for (int i = 0; i < t.len; i++)
				ptr[i] = t.ptr[i];
			len = t.len;
			return *this;
		}
		~Array() {delete [] ptr;};
		T&	operator[](int index)
		{
			if (index >= len || index < 0)
				throw (std::exception());
			return (ptr[index]);
		}
		int	size() {return len;};
};
