#include <bits/stdc++.h>
using namespace std;

int main()
{
  //Vector Declaration
  vector<int> v = {1,2,3,4,5} ;
  vector<int> vector(5,100); //creates 5 instances of 100
  vector<pair<int,int>> vec;
  vec.push_back({1,2});
  vec.emplace_back(1,2)
    
  //iterator
  vector<int>::iterator it = v.begin(); //points to first element
  it++;
  cout << *(it) << " "; //prints 2 to console 
  // begin() points to first element 
  // rbegin() points to last element; it++ will point to 2nd last element (works in reverse)
  // end() points after last element 
  // rend() points before first element 
  cout << v.back()<< ; //prints last element
}

