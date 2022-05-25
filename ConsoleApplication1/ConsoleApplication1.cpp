
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    stringstream strm1;
    strm1 << "London is the capital of Great Britain\n";
    
    string ss;

    while (strm1 >> ss) {
        //strm1 >> ss;
        cout << ss << endl;
    }

    

    return 0;
}

