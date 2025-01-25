#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;

public:
    friend void distance(Point o1, Point o2);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The coordinates are (" << x << "," << y << ")" << endl;
    }
};
void distance(Point o1, Point o2)
{
    int c, d, l, m;
    float dist;
    c = (o2.x - o1.x);
    d = (o2.y - o1.y);
    l = c * c;
    m = d * d;
    dist = sqrt(l + m);
    cout << "The Distance between the point is " << dist << endl;
}
int main()
{
    Point p(1, 8);
    Point q(6, 1);
    p.display();
    q.display();
    distance(p, q);

    return 0;
}