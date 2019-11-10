#include<iostream>
using namespace std;
template<class T>
class abc
{
public:
  T x;
  void get(T a)
  {
    x=a;
  }
  void display()
  {
    cout<<"Value is ="<<x<<endl;
  }

};
int main()
{
  abc<int>obj;
  obj.get(10);
  obj.display();
  abc<char>obj1;
  obj1.get('a');
  obj1.display();

}
