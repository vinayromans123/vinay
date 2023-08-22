#include<iostream>
using namespace std;
class live
{
	private:
		int speed;
	public:
       int getspeed(int y)
    {
    	speed=y;
	}
    
	int modi(int x);
		
		
};
 live::modi(int x)
 {
 	this->speed=x;
 	cout<<speed;
 }
int main()
{
	live yt;
	yt.getspeed(5);
	yt.modi(8);


}
