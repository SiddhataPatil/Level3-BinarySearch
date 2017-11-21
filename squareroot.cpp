/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Squareroot of an int
 Example     : A=25 result:5
 ==============================================================================================================================
 */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
  int sqrt(int A);
}obj;

int Solution::sqrt(int A)
{
     if (A == 0)
     {
     return 0;
     }

    int start = 1;
    int end = A;
    int result=0;
            while (start <= end)
            {
                int mid = (start + end) / 2;

                if (mid <= A / mid)
                {
                    start = mid + 1;
                    result = mid;
                }
                else
                {
                    end = mid - 1;
                }
            }
    return result;
}
int main()
{int result;
  result = obj.sqrt(25);
  cout<<"Square root of 25 : "<<result<<endl;
  return 0;
}
