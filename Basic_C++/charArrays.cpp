#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
        count++;
    return count;
}

int main()
{
    char ch[10];
    cout << "Enter your name:" << endl;
    cin >> ch;

    cout << "Your name is :";
    cout << ch << endl;
    cout << "Length of the char array is:" << getLength(ch);
    return 0;
}