#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Khai báo lớp nhân sự
class NhanSu {
public:
    NhanSu() {}

    // Phương thức nhập thông tin nhân sự
    void NhapThongTin() {
        cout << "Nhập mã nhân viên: ";
        cin >> maNhanVien;
        cout << "Nhập họ tên: ";
        cin.ignore();
        getline(cin, hoTenNhanVien);
        cout << "Nhập năm sinh: ";
        cin >> namSinhNhanVien;
    }

    // Phương thức in thông tin nhân sự
    void InThongTin() {
        cout << "Mã nhân viên: " << maNhanVien << endl;
        cout << "Họ tên: " << hoTenNhanVien << endl;
        cout << "Năm sinh: " << namSinhNhanVien << endl;
    }

    int GetNgayCong() const {
        return ngayCong;
    }

    void SetNgayCong(int ngay) {
        ngayCong = ngay;
    }

private:
    int maNhanVien;
    string hoTenNhanVien;
    int namSinhNhanVien;
    int ngayCong;
};

// Khai báo lớp công nhân kế thừa từ lớp nhân sự
class CongNhan : public NhanSu {
public:
    CongNhan() {}

    // Phương thức nhập thông tin công nhân, kế thừa từ lớp NhanSu và thêm thông tin riêng của công nhân
    void NhapThongTin() {
        NhanSu::NhapThongTin(); // Gọi phương thức NhapThongTin của lớp cha
        cout << "Nhập số ngày công: ";
        cin >> ngayCong;
    }

    // Phương thức tính tiền thưởng cho công nhân
    double TinhTienThuong() {
        double tienThuong = 0.0;
        if (ngayCong > 26) {
            tienThuong = (ngayCong - 26) * 100000;
        }
        return tienThuong;
    }
};

int main() {
    int n;
    cout << "Nhập số lượng công nhân: ";
    cin >> n;

    vector<CongNhan> danhSachCongNhan(n);

    // Nhập thông tin cho n công nhân
    for (int i = 0; i < n; i++) {
        cout << "Nhập thông tin của công nhân " << i + 1 << ":" << endl;
        danhSachCongNhan[i].NhapThongTin();
    }

    // Tính tiền thưởng và in danh sách công nhân được thưởng
    cout << "Danh sách công nhân được thưởng:" << endl;
    for (const CongNhan &congNhan : danhSachCongNhan) {
        double tienThuong = congNhan.TinhTienThuong();
        if (tienThuong > 0) {
            congNhan.InThongTin();
            cout << "Tiền thưởng: " << tienThuong << " VND" << endl;
        }
    }

    return 0;
}
