#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string word;
    int n;
	cin>> n;
	for(int i=0;i<n;i++)
	{
		cin>> word;
		int len = word.length();
		char char_array[n + 1];
	    strcpy(char_array, word.c_str());
		if(len<10) 
		{
			cout<<word;
			}
			else
			{
			    if(len<100)
				{   char ch1[4];
					ch1[0]=char_array[0]; 
				    ch1[n-1]=char_array[n-1];
					ch1[1]=len/10;
					ch1[2]=len%10;
					for(int h=0;h<4;h++)
					{
						cout<<ch1[h];
					}
				}
				else
				{
					char ch1[5];
					ch1[0]=char_array[0];
					ch1[n-1]=char_array[n-1];
					ch1[1]=len/100;
					ch1[2]=len/10;
					ch1[3]=len%10;
					for(int k=0;k<5;k++)
					{
						cout<<ch1[k];
					}
				}
			}
		}
	}
