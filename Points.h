#ifndef POINTS_H_INCLUDED
#define POINTS_H_INCLUDED
#include <iostream>
using namespace std;
class Point{

public:

        Point() { cout<<"Point constructor"<<endl; }
        virtual ~Point()= 0;

} ;

Point::~Point() {
   { cout<<"Point disconstructor"<<endl;}
}

class Point3D : public Point{
    public:
        Point3D(bool f) {
            cout<<"Point3d constructor bool f"<<endl;
            flag = f;
        }
        Point3D() {
            cout<<"Point3d constructor"<<endl;
        }
         ~Point3D() { cout<<"Point3d disconstructor"<<endl ; }
    private :
        bool flag ;

};


#endif // POINTS_H_INCLUDED
