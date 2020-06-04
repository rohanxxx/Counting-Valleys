#include <iostream> 
using namespace std;

const char U = 'U';
const char D = 'D';

int count(int n);

int main()
{
    int n = 0;

    cin >> n;

    cout << count(n) << endl;

    return 0;
}

int count(int n)
{
    string s;
    int up = 0;
    int down = 0;
    int level = 0;
    int previousLevel = 0;
    int valleyCount = 0;

    cin >> s;
    //cout << "s : " << s << endl;

    for(int i = 0; i < n; i++)
    {
        previousLevel = level;

        if(s[i] == U)
            up++;
        if(s[i] == D)
            down--;

        level = up + down;

        if((previousLevel == -1) && (level == 0))
            valleyCount++;
    }

    return valleyCount;
}


                
