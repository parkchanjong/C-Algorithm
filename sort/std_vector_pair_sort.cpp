 #include <iostream>
 #include <vector>
 #include <algorithm>
 
 using namespace std;

 bool compare(pair<string, pair<int, int> > a,
      pair<string, pair<int, int> >b) {
        if (a.second.first == b.second.first)
        {
          return a.second.second > b.second.second;
        } else {
          return a.second.first > b.second.first;
        }
        
      }

 int main(void) {
   vector<pair<string, pair<int, int> > > v;
   v.push_back(pair<string, pair<int, int> > ("홍길동", make_pair(90, 19911119)));
   v.push_back(pair<string, pair<int, int> > ("김길동", make_pair(90, 19941011)));
   v.push_back(pair<string, pair<int, int> > ("임길동", make_pair(94, 19950112)));
   v.push_back(pair<string, pair<int, int> > ("박길동", make_pair(82, 19920512)));
   v.push_back(pair<string, pair<int, int> > ("이길동", make_pair(70, 19920615)));
   
   sort(v.begin(), v.end(), compare);
   for (int i = 0; i < v.size(); i++)
   {
     cout << v[i].first << ' ';
   }
 }