// sum the numbers from 50 to 100 (use while) sub the numbe 1 to 50

#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    
    int sub = 1, val2= 50
        while(val2<=100){
            sub -=val2;
            --val2;
        }

    std::cout << "the sum is: " << sum << std::endl;
      std::cout << "the sub is : " << sub << std::endl;
    return 0;
}

// output: the sum is: 3825
