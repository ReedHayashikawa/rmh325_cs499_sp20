
using namespace deepstate; 

// function to check prime number
int checkPrime(int n) {
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

TEST(x, y) 
{
    int numOne = 16; 
    
    for (int index = 0; index < numOne; index++)
    {
		DeepState_Assume(index != 5 * 6);
		ASSUME_GT(numOne, 16);
	}
	
	DeepState_Assert(checkPrime(x))
}

