#include "Points.h"
int main(void) {

    Point3D *p = new Point3D[4];
    cout<< "to end"<<endl;
    delete [] p;
    cout<<"finish delete [] p   "<<endl;
    cout<<endl<<endl;
    Point *bp = new Point3D;
    cout<< "to end"<<endl;
    delete bp;
    cout<<"finish delete [] bp"<<endl;
return 0;
}
