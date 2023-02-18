#include<bits/stdc++.h>
using namespace std;
string one[] = { "", "one ", "two ", "three ", "four ",
				"five ", "six ", "seven ", "eight ",
				"nine ", "ten ", "eleven ", "twelve ",
				"thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ",
				"nineteen " };
string ten[] = { "", "", "twenty-", "thirty-", "forty-",
				"fifty-", "sixty-", "seventy-", "eighty-",
				"ninety-" };
string numToWords(int n, string s)
{
	string str = "";
	if (n > 19)
		str += ten[n / 10] + one[n % 10];
	else
		str += one[n];
    if (n)
		str += s;

	return str;
}

string convertToWords(long long n)
{
	string out;
// Hang tram cho hang trieu
 out += numToWords(((n / 100000000) % 10), "hundred ");
// Hang chuc va don vi cho hang trieu
	out+=numToWords(((n/1000000)%100), "million ");
// Hang tram cho hang nghin
	out += numToWords(((n / 100000) % 10), "hundred ");
//Hang chuc va don vi cho hang nghin
out += numToWords(((n / 1000)%100), "thousand ");
//Hang tram
out += numToWords(((n / 100) % 10), "hundred ");
//dau cach
out += numToWords((n % 100), "");
return out;
}


int main()
{long long n ;
	cin>>n;
    if(n<0) {
              n=n*-1;
            cout<<"negative "<<convertToWords(n);}
    else cout<<convertToWords(n);
}



