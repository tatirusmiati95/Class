#include <iostream>
#include <string>
using namespace std;

class motor{
		public :
			int jumlhmotor;
			string merkmotor;
			void berkendara(string kecepatan);
};

void motor::berkendara(string kecepatan){
	
	cout<< " Kecepatan Motor :"<< kecepatan << endl;
}
int main (){
	motor motorbalap, motormetic, motorbebek;
	
	motormetic.jumlhmotor = 250;
	motormetic.merkmotor = "Suzuki";
	motorbalap.jumlhmotor = 100;
	motorbalap.merkmotor = "Yamaha";
	motorbebek.jumlhmotor = 150;
	motorbebek.merkmotor = "Honda";
	
	cout << "Motor Balap : "<<endl;
	cout << "Jumlah Motor: "<<motorbalap.jumlhmotor<<" unit"<<endl;
	cout << " Merk Motor : "<<motorbalap.merkmotor<<endl;
	
	motorbalap.berkendara("180km/jam");
	
}
