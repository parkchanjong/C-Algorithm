 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 using namespace std;

 int main(void) {
   vector<pair<string, int> > v;
   v.push_back(pair<string, int>("홍길동", 82));
   v.push_back(pair<string, int>("김길동", 92));
   v.push_back(pair<string, int>("임길동", 95));
   v.push_back(pair<string, int>("박길동", 92));
   
   sort(v.begin(), v.end());
   for (int i = 0; i < v.size(); i++)
   {
     cout << v[i].first << ' ';
   }
 }