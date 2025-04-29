#include<iostream>
using namespace std;

class mammals
{
	  protected:
	  int a;
	  public:
	  void input()
	  {
	      cout<<"I am Mammal"<<a<<endl;
	  }

};
class marineanimal
{
	protected:
	int b;
	public:
	void output()
	{
	      cout<<" I am a marine animal"<<b<<endl;
	}

};
class bluewhale:public marineanimal,public mammals
{
	  protected:
	  int c;
	  public:
	  void show()
	  {
		 cout<<"I belong to both categories "<<c<<endl;
	  }

};

int main()
{
	 bluewhale k;
	 k.input();
	 k.output();
	 k.show();
}
