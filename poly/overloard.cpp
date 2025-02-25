#include <iostream>

using namespace std;

class Time {
    private:
        int h, m, s;
    public:
    // Default constructor
    Time() : h(0), m(0), s(0) {}
    // Parameterized constructor with normalization
    Time(int h, int m, int s) {
        this->h = h;
        this->m = m;
        this->s = s;

        // Normalize seconds
        if (this->s > 60) {
            this->m += s / 60;
            this->s = this->s % 60; 
        }
        if (this->m > 60) {
            this->h += m / 60;
            this->m = this->m % 60;
        }
    }
    void Output() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time time(0,100,100);
    time.Output();  // Should correctly convert 5000 seconds to hours, minutes, and seconds
    return 0;
}
