#include <iostream>
/**
 * Các biến này là một phần của cấu trúc được gọi là thành viên (hoặc các trường).
 * Hãy nhớ rằng Nhân viên chỉ là một tuyên bố – mặc dù chúng tôi đang nói với trình biên dịch rằng cấu trúc sẽ có các biến thành viên,
 * không có bộ nhớ được phân bổ tại thời điểm này. Theo quy ước,
 * tên struct bắt đầu bằng chữ in hoa để phân biệt chúng với tên biến.
 */
struct Employee {
    short id;
    int age;
    double wage;
};

void printInformation(Employee employee)
{
    std::cout << "ID:   " << employee.id << "\n";
    std::cout << "Age:  " << employee.age << "\n";
    std::cout << "Wage: " << employee.wage << "\n";
}

int main() {
/**
 * Trước C ++ 11, nếu chúng ta muốn gán giá trị cho các thành viên của cấu trúc,
 * chúng ta phải thực hiện riêng lẻ:
 *
 * joe.id = 14; // assign a value to member id within struct joe
 * joe.age = 32; // assign a value to member age within struct joe
 * joe.wage = 24.15; // assign a value to member wage within struct joe
 */
    Employee joe { 14, 32, 24.15 }; // struct Employee is capitalized, variable joe is not // C++11 only

    // Print Joe's information
    /**
     * Trong ví dụ trên,
     * chúng ta chuyển toàn bộ struct Employee cho hàm printInform() (theo giá trị, nghĩa là đối số được sao chép vào tham số).
     * Điều này ngăn chúng ta thay đổi giá trị từng biến riêng lẻ.
     * Hơn nữa, nếu chúng ta quyết định thêm thành viên mới vào cấu trúc Employee của mình,
     * chúng ta sẽ không phải thay đổi khai báo hàm hoặc gọi hàm!
     */
    printInformation(joe);

    std::cout << '\n';


    std::cout << "Hello, World!" << std::endl;
    return 0;
}

