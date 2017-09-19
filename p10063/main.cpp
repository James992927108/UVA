#include <iostream>
using namespace std;

string str;
void dfs( const string &s, const int length )
{
    if( length == str.size() )
    {
        printf("%s \n",s.c_str());
    }
    else
    {
        for( int i = 0; i <= s.size(); ++i )
        {
            /*string a = s.substr(0,i) ;
            char b =  str[length];
            string c =  s.substr(i);*/
            string recurse_s = s.substr(0,i) + str[length] + s.substr(i);
            dfs( recurse_s , length + 1 );
        }
    }
}
int main( void )
{
    while(cin >> str)
        dfs("", 0);
    return 0;
}
