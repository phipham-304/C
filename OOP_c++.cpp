#include <iostream>
#include <string>
using namespace std;
class Phu_nu{
public: 
	string ho_ten;
	void trang_diem(){
		
	}
	string choi_nhac_cu(string s){
		cout<<s;
	}
private:
	bool con_zin;
};
class Dan_ong{
};

int main(){
	Phu_nu thao;
	Phu_nu *maria_ozawa = new Phu_nu;
	maria_ozawa->ho_ten = "Maria Ozawa";
	maria_ozawa->choi_nhac_cu("ken");
	Dan_ong *vu = new Dan_ong;
	return 0;
}
