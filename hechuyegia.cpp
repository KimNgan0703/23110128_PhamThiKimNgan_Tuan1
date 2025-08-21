#include <bits/stdc++.h>

using namespace std;

int danhmuc(const string & tieude, const vector<string> & luachon) {
    cout << "\n--- " << tieude << " ---\n";
    for (int i = 0; i < luachon.size(); i++) {
        cout << i+1 << ". " << luachon[i] << endl;
    }
    int tmp;
    cout << "Hay chon 1 phuong an: ";
    cin >> tmp;
    cout << "=> Lua chon cua ban: " << luachon[tmp-1] << "\n";
    return tmp;
}

int main() {
    cout << "HOM NAY CO NEN DI HOC KHONG NHI?\n";

    vector<string> suc_khoe = {"Benh nang", "Cam nhe", "Binh thuong", "Khoe", "Rat doi dao nang luong"};
    vector<string> tam_trang = {"Buon ba", "Hoi chan nan", "Binh thuong", "Tot", "Rat tot"};
    vector<string> lop_hoc = {"Co bai kiem tra", "Co bao cao", "Khong co luu y dac biet"};

    int sk = danhmuc("Suc khoe cua ban hom nay nhu the nao?", suc_khoe);
    int tt = danhmuc("Tam trang cua ban hom nay nhu the nao?", tam_trang);
    int vh = danhmuc("Viec hoc tren lop co gi can luu y khong?", lop_hoc);

    cout << "\nKET LUAN:\n";

    if (sk == 1) { 
        if (vh == 3) cout << "- Nghi hoc!\n";
        else cout << "DI HOC hoac lien he giao vien\n";
    }
    else if (sk == 2) {
        if (vh == 1) cout << "- DI HOC\n";
        else if (vh == 2) cout << "- DI HOC.\n";
        else if(tt == 1) cout << "- Co the nghi nhung nen DI HOC.\n";
        else cout << "-DI HOC.\n";
    }
    else { 
        if (vh == 1) cout << "- DI HOC.\n";
        else if (vh == 2) cout << "- DI HOC.\n";
        else {
            if (tt == 1) cout << "- DI HOC.\n";
            else if (tt == 2) cout << "- DI HOC.\n";
            else cout << "- Hoan toan nen DI HOC.\n";
        }
    }

    return 0;
}
