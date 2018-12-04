/*
  Payton Long//CS2 Project 3//Pointer Variable With Data Types
*/
#include <iostream>
#include <string>
using namespace std;

int main() {

  //Integer Values:
  int a;
  a = 25;
  cout << "The value of the integer A is: " << a << endl;
  cout << "The address of the integer A is: " << &a << endl;
  cout << "The size(bytes) of the integer A is: " << sizeof(a) << " bytes!" << endl;
  cout << "\n";

  //Bool Values:
  bool b;
  b = false;
  string ans;
  if (b == false) {
    ans = "False";
  } else {
    ans = "True";
  }
  cout << "The value of the bool B is: " << ans << endl;
  cout << "The address of bool B is: " << &b << endl;
  cout << "The size(bytes) of bool B is: " << sizeof(b) << " bytes!" << endl;
  cout << "\n";

  //Char Values:
  char c;
  cout << "Please enter a single character to store and find its values: " << endl;
  cin >> c;
  cout << "The character entered/stored is: " << c << "\n" << "The value is: " << int(c) << endl;
  cout << "The address of char C is: " << &c << endl;
  cout << "The size(bytes) of char C is: " << sizeof(c) << " bytes!" << endl;
  cout << "\n";

  //Short Values:
  short d;
  d = 100;
  cout << "The value of short D is: " << d << endl;
  cout << "The address of short D is: " << &d << endl;
  cout << "The size(bytes) of short D is: " << sizeof(d) << " bytes!" << endl;
  cout << "\n";

  //Long-int Values:
  long int e;
  e = 2819;
  cout << "The value of long int E is: " << e << endl;
  cout << "The address of long int E is: " << &e << endl;
  cout << "The size(bytes) of long int E is: " << sizeof(e) << " bytes!" << endl;
  cout << "\n";

  //Double Values:
  double f;
  f = 0.3102;
  cout << "The value of double F is: " << f << endl;
  cout << "The address of double F is: " << &f << endl;
  cout << "The size(bytes) of double F is: " << sizeof(f) << " bytes!" << endl;
  cout << "\n";

  //Long-Double Values:
  long double g;
  g = 10.2810;
  cout << "The value of long double G is: " << g << endl;
  cout << "The address of long double G is: " << &g << endl;
  cout << "The size(bytes) of long double G is: " << sizeof(g) << " bytes!" << endl;
  cout << "\n";

  //Double Array Values:
  double nums[5] = { 20.4, 10, 15, 201, 5 };
  cout << "The first value of double NUMS is: " << nums[0] << endl;
  cout << "The address of the first value in double NUMS is: " << &nums[0] << endl;
  cout << "The size(bytes) of double NUMS is: " << sizeof(nums[0]) << endl;
  cout << "\n";

  //Int-array Values:
  int arr[5] = { 90, 4, 10, 0, 1 };
  int tot;
  tot = sizeof(arr[0]) + sizeof(arr[1]) + sizeof(arr[2]) + sizeof(arr[3]) + sizeof(arr[4]);
  cout << "The values located in int ARR are: " << arr[0] << " "
                                                << arr[1] << " "
                                                << arr[2] << " "
                                                << arr[3] << " "
                                                << arr[4] << endl;
  cout << "The address of the values in int ARR is: " << &arr[0] << " "
                                                      << &arr[1] << " "
                                                      << &arr[2] << " "
                                                      << &arr[3] << " "
                                                      << &arr[4] << " "
                                                      << endl;
  cout << "The size(bytes) of int ARR is: " << tot << " bytes!" << endl;
  cout << "\n";

  //Int-pointer Values:
  int x;
  int *ptr;
  x = 100;
  ptr = &x;
  cout << "The value stored in the pointer X is: " << *ptr << endl;
  cout << "The address of the pointer X is: " << ptr << endl;
  cout << "The size(bytes) of pointer X is: " << sizeof(ptr) << endl;
  cout << "\n";

  //Double-Pointer Values:
  double p;
  double *point;
  p = 2102;
  point = &p;
  cout << "The value stored in the pointer POINT is: " << *point << endl;
  cout << "The address of the pointer POINT is: " << point << endl;
  cout << "The size(bytes) of the pointer POINT is: " << sizeof(point) << endl;

  //End program function:
  int repeat;
  cout << "Would you like to run the program again?(1 for yes 0 for no..)" << endl;
  cin >> repeat;
  if(repeat == 1){
    return main();
  } else {
    return 0;
  }
}
