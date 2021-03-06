#include <vector>
#include <string>
#include <map>

using namespace std;

class Person;
class Execute;
class EL_part;
class LED_part;

class Person { // for every dancer
public:
    Person(int _id):id(_id) {}
    ~Person();
    void set_execute(const Execute& e) { time_line.push_back(e); } // push execution one by one
    void print();
private:
    int id;
    vector<Execute> time_line; // including every execution in time order
};

class Execute { // for every execution
public:
    void set_start_time(const double& d) { start_time = d; }
    void set_end_time(const double& d) { end_time = d; }
    void set_EL_part(int*);
    void set_LED_part(const string&, const double&);
private:
    double start_time;
    double end_time;
    vector<LED_part> LED_parts;
    vector<EL_part>  EL_parts;  
};

class EL_part { // for each part of EL
public:
    EL_part(const int& s){ brightness = uint16_t(s); }
private:
    uint16_t brightness;
};

class LED_part { // for each part of LED
public:
    LED_part(const string& s, const double& d):path(s), alpha(d) {} 
private:
    string path;  // LED array path
    double alpha; // for brightness
};

void Execute::set_LED_part(const string& s, const double& d) { // set each LED_part one by one 
        LED_parts.push_back(LED_part(s, d));
    }
void Execute::set_EL_part(int a[7]) { // set every EL_parts for one time
    for(int i = 0; i < 7; ++i) {
        EL_parts.push_back(EL_part(a[i]));
    }
}