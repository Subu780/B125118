#include <iostream>
using namespace std;

int main() {
    char s[] = "Shubranshu Kumar Mishra B125118";
    char *p = s;
    int d = 0, a = 0, sp = 0;
    while(*p != '\0') {
        if(*p >= '0' && *p <= '9') d++;
        else if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) a++;
        else if(*p == ' ') sp++;
        p++;
    }
    cout << "Digits: " << d << endl;
    cout << "Alphabets: " << a << endl;
    cout << "Spaces: " << sp << endl;
    return 0;
}
