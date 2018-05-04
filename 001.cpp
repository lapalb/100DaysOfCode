#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int l=0;
        int b=0;
    public:
        void printValue()
        {
           cout<<"The length is "<<l<<" and the breadth is "<<b<<endl;
        }

        void setValue(int l,int b)
        {
                this->l=l;
                this->b=b;
        }
        void area()
        {
            cout<<"The area of rectangle is "<< l*b<<endl;
        }
        void perimeter()
        {
            cout<<"The perimeter of rectangle is " <<2*(l+b)<<endl;
        }

};

int main()
{
    Rectangle r1,r2;
    r1.setValue(5,6);
    r1.printValue();
    r1.area();
    r1.perimeter();
}
