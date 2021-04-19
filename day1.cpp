/* Decision
Given an int n, perfom the following actions:
- if n is odd, print "Weird"
- if n is even and in the inclusive range of 2 to 5, print "Not Weird"
- if n is even and in the inclusive range of 6 to 20, print "Weird"
- if n is even and greater than 20, print "Not Weird"
constraints
1 <= n <= 100
output format
Print Weird is the number is weird; otherwise print not weird.

Sample input:3, n is odd and odd numbers are weird, so we print Weird.
Sample output: Weird

24, n > 20 and n is even, so it is not weird. Thus, we print Not Weird.
Not Weird
*/
#include <iostream>
using std::cout;
using std::cin;

int main(){
    cout << "enter a number: " << "\n";
    int n;
    cin >> n;
    //check if it's even or odd
    if(n % 2 == 0){
        cout << "the number is even, not weird" << "\n";
    }

}