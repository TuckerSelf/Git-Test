/**
 * @file main.cpp
 * @author Tucker Self
 * @date 2023-09-07
 * @brief simple code test
 * 
 * done to get used to using emacs and git
 */
#include <iostream>

using namespace std;

int sum(int input){
  int output  = 0;
  for(int i=0; i<=input; i++)
    output += i;
  return output;
}

int main() {
  int n;
  cout << "Input a positive interger: ";
  cin >> n;
  cout << endl << sum(n) << endl;
  
  return 0;
}
