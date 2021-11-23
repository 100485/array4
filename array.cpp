#include <iostream>
using namespace std;
int main(){
    //Declaring
    int Nums [5];
    int sum = 0;


for (int i = 0; i < 5; i++)
{
    cout << "Input a Number:";
    cin >> Nums[i];
}
   cout << "You entered the following: ";
   for (int x = 0; x < 5; x++) 
   {
       cout << Nums[x] << "\t"; //output
       sum = sum + Nums[x];
   } 
   cout << "\n";
   cout << "The size of the array is:";
   cout << sum << "\t and the size of the arrey is:";
   cout << sizeof(Nums) << "bytes \n\n";
    return 0;
} 
