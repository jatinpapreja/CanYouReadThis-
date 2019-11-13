#include<iostream>
using namespace std;
int main()
{char s[1000];
cin.getline(s,1000);
for(int i=0;s[i]!='\0';i++)
{
    if((isupper(s[i]))&&(isupper(s[i+1]))||(islower(s[i])&&isupper(s[i+1])))
    {
        cout<<s[i]<<endl;
    }
    else cout<<s[i];
}
return 0;
}
