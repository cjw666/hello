#include<iostream>
using namespace std;
int search(string s[],int low,int high,string x) {
    if(x == "")
    return -1;
    while(low <= high) {
        int mid = (high-low)/2+low;
        int t = mid;
        while(s[t] == "" && t<=high) {
            t++;
        }
        if(s[t] == x)
                return t;
            else if(s[t] < x)
                low = t+1;
            else
                high = t-1;
    }
    return -1;
}

int main() {
    string s[13] = {
        "at", "", "", "", "ball", "", "", "car", "", "", "dad", "", ""
    };
    cout<<search(s, 0, 12, "ball")<<endl;

    return 0;
}
