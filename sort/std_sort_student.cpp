 #include <iostream>
 #include <algorithm>
 
 using namespace std;

 class Student {
 public:
   string name;
   int score;
   Student(string name, int score) {
     this->name = name;
     this->score = score;
   }

   bool operator <(const Student &student)const {
     return this->score > student.score;
   }
 };

 int main(void) {
   Student students[] = {
     Student("홍 길 동", 90),
     Student("김 길 동", 93),
     Student("박 길 동", 97),
     Student("임 길 동", 87),
     Student("이 길 동", 92),
   };
   sort(students, students + 5);
   for (int i = 0; i < 5; i++)
   {
     cout << students[i].name << ' ';
   }
 }