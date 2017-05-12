#include "hey_math.h"

// Greater common divisor funcion for integer
int gcd(int u, int v)
{
	int t;
	while(u>0){
		if ( u < v){
			t = u;
			u = v;
			v = t;
		}
		u = u - v;
	}
	return v;
}

// Reduction of a fraction
 fraction reduce_fractor(fraction x)
 {
	 int gcd_val;
	 fraction result;

	 gcd_val = gcd(x.numerator, x.denomiator);
	 result.numerator = x.numerator / gcd_val;
	 result.denomiator = x.denomiator / gcd_val;
	 return result;
 }
