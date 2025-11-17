# include <iostream>
# include <cmath>
using namespace std;

int numList(int[] input, int place)
{
  if (place > input.size())
  {
    return 0;
  }
  else if (input(place).is_integer())
  {
    cout << input(place) << endl;
    numList(input, place + 1);
  }
  else
  {
    numList(input(), 0);
  }
}

int main()
{
 int array =
 { 1, 
   2, 
   3,
   {
     4, 5, 6
   },
   7,
   {
     8,
     {
       9, 10, 11,
       {
         12, 13, 14
       }
     }
   },
   {
     15, 16, 17, 18, 19,
       {
         20, 21, 22,
         {
           23, 24, 25,
           {
             26, 27, 29
           }
         },
       30, 31 
       },
   32
   },
   33
  }
  
  numList(array, 0);
}
