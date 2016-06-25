#include <iostream>
using namespace std;

int main()
{
	int m, n, amount ;
	int invite = 0, sum = 0 ;

	cin >> m ;
	
	while(m--)
	{
		cin >> n ;
		cin >> amount ;
		
		
	    int *arr1 = new int[n] ;        // create array dynamically
		for(int i = 0; i < n ; i++ )
		{
			cin >> arr1[i] ;	
		}
		
		for(int i = 0 ; i < n ; i++ )
		{
			sum = 0 ;
			invite = 0 ;

		for( int j = i ; j < n ; j++)
		{
			sum += arr1[j] ;
			if( sum > amount )	break ;
			
			if(sum == amount)
			{
				invite = 1 ;
				break ;
			}
		 
	//	 cout << sum  << " - " << amount << " " ;
		}
	//	cout << endl ;
		
			if( invite )
			break ;
		}
		
		if( invite )
		{
			cout << "YES" << endl ;
		}
		else
		cout << "NO" << endl ;
		
		
	    delete[] arr1;   // free the memory allocated

	}



    return 0;
}
