//Honer’s method
#include <iostream>
using namespace std; 
// returns value of poly[0]x(n-1) + poly[1]x(n-2) + .. + poly[n-1] 
int horner(int poly[], int n, int x) 
{ 
int result = poly[0]; // Initialize result 
cout<<endl<<"result ma = "<<result<<endl;
// Evaluate value of polynomial using Horner's method 
for (int i=1; i<n; i++) 
result = result*x + poly[i]; 
return result; 
} 
// Driver program to test above function. 
int main() 
{ 
// Let us evaluate value of 2x3 - 6x2 + 2x - 1 for x = 3
int poly[] = {3, -4, 5, -6}; 
int x = 2; 
int n = sizeof(poly)/sizeof(poly[0]); 
cout<<"size fo poly "<<sizeof(poly)<<endl;
cout<<"size fo poly[] "<<sizeof(poly[0])<<endl;
// cout<<n<<endl;
cout << "Value of polynomial is " << horner(poly, n, x); 
// answer 12
return 0;
}