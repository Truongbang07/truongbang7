#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string student_id;
    float gpa;

public:
    // Constructor để khởi tạo sinh viên với các giá trị đầu vào
    Student(string name, string student_id, float gpa) {
        this->name = name;
        this->student_id = student_id;
        this->gpa = gpa;
    }

    // Getter và Setter cho thuộc tính name
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    // Getter và Setter cho thuộc tính student_id
    string getStudentId() {
        return student_id;
    }

    void setStudentId(string student_id) {
        this->student_id = student_id;
    }

    // Getter và Setter cho thuộc tính gpa
    float getGpa() {
        return gpa;
    }

    void setGpa(float gpa) {
        this->gpa = gpa;
    }

    // Phương thức để hiển thị thông tin sinh viên
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    // Tạo đối tượng Student
    Student student1("Truong cong bang", "24D116002", 3.5);

    // Hiển thị thông tin sinh viên
    student1.displayInfo();

    // Cập nhật thông tin sinh viên
    student1.setName("Truong cong bang");
    student1.setGpa(3.5);

    cout << "\nSau khi cập nhật thông tin:" << endl;
    student1.displayInfo();

    return 0;
}
