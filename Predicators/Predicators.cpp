#include<iostream>
#include<list>

using namespace std;

bool pred(double a, double b) {
    return a * 1.1 >= b;
}

int main()
{
    list <double> ls{ 1.4,3.4,1.5,3.1,2.2,2.4,3.7 };
    cout << "Before->\n";
    for (auto i = ls.begin(); i != ls.end(); i++)
    {
        cout << *i << " ";
    }
    ls.sort();
    cout << "\nSorted->\n";
    for (auto i = ls.begin(); i != ls.end(); i++)
    {
        cout << *i << " ";
    }
    ls.unique(pred);
    cout << "\nAfter->\n";
    for (auto i = ls.begin(); i != ls.end(); i++)
    {
        cout << *i << " ";
    }

}
