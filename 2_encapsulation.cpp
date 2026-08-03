#include <iostream>
using namespace std;
class Car
{
public:
    int price;
    string model;
    string region;

public:
    void Honk() 
    {
        cout << "Tee Tee " << endl;
    }
};
int main()
{ 
    Car cobj;
    cobj.price = 300000;
    cobj.model = "Volvo";
    cobj.region = "Myanmar";
    cout << "Model " << cobj.model << " Region " << cobj.region << cobj.price << endl;
    cobj.Honk();
    return 0;
}
