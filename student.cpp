#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
  public:
    Student(string lastName, string firstName, int id);
    string GetFirstName() const;
    string GetLastName() const;
    int GetIDNum() const ;
    bool operator<(const Student &other) const;
    friend ostream & operator << (ostream &out, const Student &s);
  private:
    string first;
    string last;
    int idNum;
};

  struct FirstNameOrder{
    inline bool operator()(const Student &v, const Student &w){
      return v.GetFirstName() < w.GetFirstName();
    }
  };

  // struct IdNumOrder{
  //   inline bool operator()(const Student &v, const Student &w){
  //     return v.GetIDNum() < w.GetIDNum();
  //   }
  // };

  Student::Student(string lastName, string firstName, int id){
     last = lastName;
     first = firstName;
     idNum = id;
  }
  string Student::GetFirstName() const{
    return first;
  }
  string Student::GetLastName() const{
    return last;
  }
  int Student::GetIDNum() const{
    return idNum;
  }

  bool Student::operator<(const Student &other)const{
    return lastName < other.lastName;
  }

ostream & operator << (ostream &out, const Student &s){
  out << s.GetFirstName() << " "
      << s.GetLastName() << " ()"
      << s.GetIDNum() << ") " << endl;
      return out;
}

int main(){
  vector <Student> students;
  Student newStudent( "Sammy", "Hill", 1357);
  students.push_back(newStudent);
  Student newStudent1( "Jack", "Casella", 2468);
  students.push_back(newStudent1);
  Student newStudent2( "Greta", "Phillip", 1928);
  students.push_back(newStudent2);
  cout << "Original Array!" << endl;
  for (Student s : students){
    cout << s;
  }
  cout << endl;
  cout << "Sorted Array!" << endl;
  sort(students.begin(), students.end(),FirstNameOrder());
  for (Student s : students){
    cout << s;
  }
  return 0;
}
