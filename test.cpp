// inserting into a vector
#include <iostream>
#include <string>
using namespace std;


bool val(string s) {

    bool ret = false;
    int a = 0, aa = 0, b = 0, bb = 0, c = 0, cc = 0;
    for (int i = 0 ; i < s.length(); i++) {
        switch (i) {
            case '{':
                a++;
                break;
            case '}':
                aa++;
                break;
            case '[':
                b++;
                break;
            case ']':
                bb++;
                break;
            case '(':
                c++;
                break;
            case ')':
                cc++;
                break;
        }   
    }
    if (a==aa && b==bb && c==cc)
        ret = true;
    return ret;
}
int main()
{
    string s = "(){}[]";

    if (val(s))
        cout << "true";
    else 
        cout << "false";
    return 0;
}