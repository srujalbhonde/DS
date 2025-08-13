#include <iostream>
	using namespace std;
	
	int main()
	{
		int a;
		
		cout << "Enter No. Of Elements you want : ";
		cin >> a;
		
		// cout << "Enter a Value for 'b' : ";
		// cin >> b;
		
		int A[a];
		// int B[b];
		
	

	cout << "Enter " << a << " elements for A:\n";
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];

    }
    for (int i=0 ; i<a ; i++)
    {for (int j=0; j<a-i-1 ; j++){
        if (A[j] > A[j+1]){
            int temp=A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
        }
    }
    }
    cout<<"Sorted Array : ";
    for (int i=0 ; i<a ; i++)
    cout << "\t " << A[i];

    
return 0;

}