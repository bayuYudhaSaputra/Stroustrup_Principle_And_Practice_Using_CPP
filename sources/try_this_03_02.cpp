#include "../header/std_lib_facilities.h"

/*
    =========================================================
    Try This 03.02
    ---------------------------------------------------------
    Problem:
    Get this little program to run. Then, modify it to read 
    an int rather than a double. Note that sqrt() of an int 
    returns a double rather than an int. Also, “exercise” 
    some other operations. Note that for ints / is integer 
    division and % is remainder (modulo), so that 5/2 is 2 
    (and not 2.5 or 3) and 5%2 is 1. The definitions of integer 
    *, /, and % guarantee that for two positive ints a and b 
    we have a/b * b + a%b == a.

    =========================================================
*/

int main()
{
    cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\n n + 1 == " << n + 1
         << "\n three times n == " << 3 * n
         << "\n twice n == " << n + n
         << "\n n squared == " << n * n
         << "\n half of n == " << n / 2
         << "\n square root of n == " << sqrt(n)
         << '\n';
        
    cout << "Please enter a integer value: ";
    int bil_int;
    cin >> bil_int;
    cout << "bil_int == " << bil_int
         << "\n bil_int + 1 == " << bil_int + 1
         << "\n bil_int three time bil_int == " << 3 * bil_int
         << "\n bil_int twice of bil_int == " << bil_int + bil_int
         << "\n bil_int squared == " << bil_int * bil_int
         << "\n bil_int half of bil_int == " << bil_int / 2
         << "\n square root of bil_int == " << sqrt(bil_int)
         << '\n';
         
    return 0;
}

/*
    Stroustrup, Bjarne. 2018. Programming : principles 
    and practice using C++ Second edition. New Jersey : 
    Pearson Education, Inc dapat diakses pada tautan
    https://www.amazon.com/Programming-Principles-Practice-Using-2nd/dp/0321992784

*/