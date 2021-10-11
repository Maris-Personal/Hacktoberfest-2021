#include <iostream>
using namespace std;

int
main ()
{
  int size, i, j, temp, f_elem, l_elem;
  cout << "Enter the number of elements" << endl;
  cin >> size;

  int array[size];

  for (i = 0; i < size; i++)
    {
      cout << "Enter the value at " << i << "th index";
      cin >> array[i];
      cout << endl;
    }

  cout << "Before swapping ARR = " << endl;
  for (i = 0; i < size; i++)
    {
      cout << array[i] << ", ";
    }
  cout << endl;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < i; j++)
	{
	  f_elem = array[i];	// 1st element 
	  l_elem = array[j];	// 2nd element  
	  if (f_elem < l_elem)
	    {
	      temp = f_elem;
	      f_elem = l_elem;
	      l_elem = temp;
	    }
	  array[i] = f_elem;
	  array[j] = l_elem;
	}
    }

  cout << "After swapping ARR = " << endl;
  for (i = 0; i < size; i++)
    {
      cout << array[i] << ", ";
    }
  cout << endl;


  return 0;
}
