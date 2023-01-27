#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float l,w,x;    //l is length , w is width
	int c;         //the choice
	cout<<"choose Geometric shape \n"
	<<"\n Triangle \t press \t1 \n"
	<<"\n Square \t press \t2\n"
	<<"\n Rectangle \t press \t3 \n"
	<<"\n Rhombus \t press \t4 \n"
	<<"\n Parallelogram \t press \t5 \n"
	<<"\n cube \t \t press \t6 \n"
	<<"\n cuboid \t press \t7 \n"
	<<"\n sphere \t press \t8 \n";
	
	cin>>c;
	
	if(c==1)
{
	cout<<"enter Triangle dimensions\n";
	cin>>l>>w>>x;
	float p= (l+w+x)/2; //p is Half the perimeter of the triangle
	cout<<"Triangle perimeter = "<<l+w+x<<"\n\n"
	<<"Triangle arae = "<<sqrt((p-x)*(p-w)*(p-l))<<"\n\n";
}
	                                        
    else if (c==2)                                             
    {
	cout<<"enter Square dimension\n";
	cin>>l;
	cout<<"Square perimeter = "<<l*4<<"\n\n"
	<<"Square area = "<<l*l<<"\n\n";
	
    }	
    else if (c==3)
    {
    cout<<"enter Rectangle length \n";
	cin>>l;
	cout<<"enter Square width \n";
	cin>>w;
	cout<<"Rectangle perimeter = "<<(l+w)*2<<"\n\n"
	<<"Rectangle area = "<<l*w<<"\n\n";
	}
    
	else if (c==4)
	{
	cout<<"enter Rhombus dimension \n";
	cin>>l;
	cout<<"Rhombus perimeter = "<<l*4<<"\n\n"
	<<"enter Rhombus The lengths of the two diameters of the rhombus";
	cin>>w>>x;
	cout<<"Rhombus area = "<<(w*x)/2<<"\n\n";
	}

	else if (c==5)
	{
	cout<<"enter Parallelogram dimension \n";
	cin>>l>>w;
	cout<<"Parallelogram perimeter = "<<2*(l+w)<<"\n\n"
	<<"Enter the measure of any angle to calculate the area of ??the parallelogram\n\n";
	cin>>x;
	x = x*3.14159/180;     //// converting radians to degrees
	cout<<"Parallelogram area = "<<l*w*sin(x)<<"\n\n";
	}
	
	else if (c==6)
	{
	cout<<"enter dimension of cube \n";
	cin>>l;
	cout<<"Surface area of cube = "<<6*l*l<<"\n\n"
	<<"The lateral surface area of a cube = "<<4*l*l<<"\n\n"
	<<"volume of cube = "<<l*l*l<<"\n\n";
	}
	
	else if (c==7)
	{
	cout<<"enter the length of cuboid \n";
	cin>>l;
	cout<<"enter the Breadth  of cuboid \n";
	cin>>w;
	cout<<"enter Height of cuboid \n";
	cin>>x;
	cout<<"Surface area of cuboid = "<<(2*(l+w)*x)+2*l*w<<"\n\n"
	<<"The lateral surface area of a cuboid = "<<2*(l+w)*x<<"\n\n"
	<<"volume of cuboid = "<<l*w*x<<"\n\n";
	}
		else if (c==8)
	{
	cout<<"enter raduis of sphere \n";
	cin>>l;
	cout<<"Surface area of sphere = "<<4*3.14159*l*l<<"\n\n"
	<<"volume of sphere="<<4/3*3.14159*l*l*l<<"\n\n";
	}
}