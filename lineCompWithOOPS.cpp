# include<iostream>
# include<cmath>

using namespace std;

class Point {
public :
    int x;
    int y;
};

class Line {
public:
    Point* p1;
    Point* p2;
    float length;

    Line(Point* p1, Point* p2) {
        this->p1 = p1;
        this->p2 = p2;
    }

public:
    float calculateLength(){
        return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2)); 
    }

    bool operator== (Line& other){
        return this->length == other.length;
    }

    bool operator> (Line& other){
        return this->length > other.length;
    }

    bool operator< (Line& other){
        return this->length < other.length;
    }
};

int main(){
    cout << "Welcome to OOPS"<< endl;
    Point* p1 = new Point();
    Point* p2 = new Point();
    Line* l1= new Line(p1, p2);
    p1->x = 10;
    p1->y = 20;
    p2->x = 30;
    p2->y = 40;
    l1->length = l1->calculateLength();
    cout << "L1 length: " << l1->length << endl;

    Point* p3 = new Point();
    Point* p4 = new Point();
    Line* l2= new Line(p3, p4);
    p3->x = 10;
    p3->y = 20 ;
    p4->x = 30;
    p4->y = 40;
    l2->length = l2->calculateLength();
    cout << "L1 length: " << l2->length << endl;

    if( *l1 == *l2 ){
        cout << "Lines are Equal" << endl;
    }else if(l1 > l2){
        cout << "L1 is greater" << endl;
    }else if(l1 < l2){
        cout << "L2 is greater" << endl;
    }

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete l1;
    delete l2;
}




