#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<string> Permutation(string str) {
        int length=str.size();
        vector <string> array;
        if(length==0) return array;
        Permutation(array,str,0);
        sort(array.begin(),array.end());
        return array;
    }
    void Permutation(vector<string> &array,string str,int begin)
    {if(begin==str.size()-1)
            array.push_back(str);
        for(int i=begin;i<str.size();i++)
        {
            if(i!=begin&&str[i]==str[begin])
                continue;
            swap(str[i],str[begin]);
			cout<<str;
            Permutation(array,str,begin+1);
            swap(str[i],str[begin]);
			cout<<str;
        }}
};
    int main()
{
	string zifuchuan;
	cin>> zifuchuan;
	Solution a;
	vector <string> array;
	array=a.Permutation(zifuchuan);
	for(int i=0;i<array.size();i++)
		cout<<array[i]<<',';
}