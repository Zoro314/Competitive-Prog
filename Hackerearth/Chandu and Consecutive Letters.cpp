#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int n ;
	string str ;
	
	cin >> n ;
	
	while(n--)
	{
		cin >> str ;
		
		for(int i = 0 ; i < str.length() ; i++ )
		{
			if( ( str[i] == str[i+1] ) )
			{
			str.erase(i,1) ;
			i-- ;           // this is for continous duplicates of length > 2 
			}
		}
		
		
		
		cout << str << endl ;
	}
	
	return 0 ;
	
}
