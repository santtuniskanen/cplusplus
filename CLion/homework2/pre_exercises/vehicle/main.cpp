#include <iostream>
using namespace std;

class Vehicle {
public:
    void setName(string);
    string getName();
    void setSpeed(int);
    int getSpeed();

private:
    int speed;
    string name;

protected:

};
void Vehicle::setName(string s) {
    name = s;
}

string Vehicle::getName() {
    return name;
}

void Vehicle::setSpeed(int s) {
    speed = s;
}
int Vehicle::getSpeed() {
    return speed;
}

int main() {
    Vehicle v;
    v.setName("Ford");
    v.setSpeed(85);
    cout << v.getName()+", ";
    cout << v.getSpeed();
    cout << " km/h." << endl;

    return 0;
}
