#pragma once

template <typename T> void	iter(T a[], int	len, void (*func_ptr)(T const &value))
{
	for (int i = 0; i < len; i++){
		func_ptr(a[i]);
	}
}
