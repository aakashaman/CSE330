#include <bits/stdc++.h>
using namespace std;

void printAllKLengthRec(char set[], string prefix, int n, int k)
{
     
    if (k == 0)
    {
        cout << (prefix) << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        string newPrefix;
         
        newPrefix = prefix + set[i];
    
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
 
}
void printAllKLength(char set[], int k,int n)
{
    printAllKLengthRec(set, "", n, k);
}
 int main()
{
    char set1[] = {'a', 'b'};
    int k[2]={1,2};
    for(int i=0;i<2;i++){
    
printAllKLength(set1, k[i], 2); 
    } 
}