// inserting into a vector
#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> temp;
    unsigned long long temp1 = 0;

    for (int i = 0; i < digits.size(); i++)
    {
        temp1 = temp1 * 10 + digits[i];
    }
    temp1 += 1;
    // temp1 = 124
    cout<<"digits.size() is: " <<digits.size() << endl;
    cout <<"temp1 is:  ";
    cout << temp1 ;
    cout << endl;
    // insert to temp[0] with last digit of temp1
    while (temp1 > 0)
    {
        temp.insert(temp.begin(), temp1 % 10);
        temp1 = temp1 / 10;
    }

    return temp;
}

int main()
{
    vector<int> myvector{7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};

    vector<int> temp = plusOne(myvector);
    cout<<"temp is: ";
    for (int i = 0 ; i <temp.size();i++){
        cout << temp[i] << " ";
    }
    return 0;
}