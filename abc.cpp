#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class ThiSinh {
public:
    string ma;
    string ten;
    float diem_toan;
    float diem_ly;
    float diem_hoa;
    float diem_tong_cong;

    void nhapThongTin() {
        cout << "Ma thi sinh: ";
        cin >> ma;
        cout << "Ho Ten thi sinh: ";
        cin.ignore();
        getline(cin, ten);
        cout << "Diem Toan: ";
        cin >> diem_toan;
        cout << "Diem Ly: ";
        cin >> diem_ly;
        cout << "Diem Hoa: ";
        cin >> diem_hoa;
        diem_tong_cong = diem_toan + diem_ly + diem_hoa;
    }

    void xuatThongTin() {
        cout << "Ma thi sinh: " << ma << endl;
        cout << "Ho Ten thi sinh: " << ten << endl;
        cout << "Diem Toan: " << diem_toan << endl;
        cout << "Diem Ly: " << diem_ly << endl;
        cout << "Diem Hoa: " << diem_hoa << endl;
        cout << "Diem tong cong: " << diem_tong_cong << endl;
    }

    bool thiDau() {
        return (diem_tong_cong > 15) && (diem_toan >= 0) && (diem_ly >= 0) && (diem_hoa >= 0);
    }
};

void nhapMangThiSinh(vector<ThiSinh>& mang_thi_sinh) {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    mang_thi_sinh.resize(n);

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thi " << i + 1 << endl;
        mang_thi_sinh[i].nhapThongTin();
    }
}

void xuatMangThiSinh(const vector<ThiSinh>& mang_thi_sinh) {
        cout << "Thong tin thi sinh" << endl;
    }
void lietKeThiDau(const vector<ThiSinh>& mang_thi_sinh) {
    cout << "Danh sach thi sinh thi dau:" << endl;
        }
bool compareDiemTongCong(const ThiSinh& thisinh1, const ThiSinh& thisinh2) {
    return thisinh1.diem_tong_cong > thisinh2.diem_tong_cong;
}

void sapXepGiamDan(vector<ThiSinh>& mang_thi_sinh) {
    sort(mang_thi_sinh.begin(), mang_thi_sinh.end(), compareDiemTongCong);
}

int main() {
    vector<ThiSinh> mang_thi_sinh;

    nhapMangThiSinh(mang_thi_sinh);

    cout << "Mang thi sinh sau khi :" << endl;
    xuatMangThiSinh(mang_thi_sinh);

    lietKeThiDau(mang_thi_sinh);

    sapXepGiamDan(mang_thi_sinh);

    cout << "Mang thi sinh sau khi sap xep:" << endl;
    xuatMangThiSinh(mang_thi_sinh);

    return 0;
}
