#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string& numString){
    std::list<int> result;
    for (char digit : numString){
        result.push_back(digit-'0');//ASCII
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int>& num1, std::list<int>& num2){
    std::list<int> result;
    auto it1=num1.rbegin(), it2=num2.rbegin();
    int carry=0;

    while (it1!=num1.rend() || it2!=num2.rend() || carry){
        int sum=carry;
        if (it1 != num1.rend()){
            sum+=*it1;
            ++it1;
        }
        if (it2!=num2.rend()){
            sum+=*it2;
            ++it2;
        }
        result.push_front(sum % 10);
        carry=sum/10;
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int>& num1, std::list<int>& num2){
    std::list<int> result;
    auto it1=num1.rbegin(), it2=num2.rbegin();
    int borrow=0;

    while (it1!=num1.rend() || it2!=num2.rend()){
        int diff=(it1 != num1.rend() ? *it1 : 0)-(it2 != num2.rend() ? *it2 : 0)-borrow;
        if (diff<0){
            diff+=10;
            borrow=1;
        }else{
            borrow=0;
        }
        result.push_front(diff);
        if (it1 != num1.rend()) ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int>& num1, std::list<int>& num2){
    std::list<int> result;
    int multiplier = num2.front();
    int carry=0;

    for (auto it=num1.rbegin(); it!=num1.rend();it++){
        int product=(*it) * multiplier+carry;
        result.push_front(product%10);
        carry=product/10;
        
    }

    if (carry){
        result.push_front(carry);
    }
    return result;
}
