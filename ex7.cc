#include <iostream>

//int main () {
//	int counter =1;
//	int b;
//	while (counter<123 and counter++) {      
//	b=counter++;
//	std::cout << "counter: " << counter << std::endl;
//    }
    
//}

//int main () {
//	int counter=1;
//	int b;
//	do { 	
//		if (counter%2==false) {
//			std::cout << "counter: " << counter << std::endl;	}
//			counter++;
//		while (counter<123);
//				
//
//
//}
//}


//int main() {
//    int width = 20;
//    int height = 10;
//
//    for (int x = 1; x <= width; x = x + 2 ) {
//        for (int y = height; y >= 1; y = y - 3 ) {
//            std::cout << x << " " << y << std::endl;
//        }
//    }
//}





//int main(){
//	int width = 1920;
//
//	for (int x = 0; x < width; ++x ) {
//		if (x>14 and x<31){
//			continue;
//		} else if (x == 51){
//			break;
//		}
//		std::cout << x << std::endl;
//	}
//}



int main() {
    int tab_size = 7;

    int tab[tab_size] = {0,1,2,3,4,5};
    std::cout << " tab= " << tab << std::endl;
    std::cout << " tab[2]= " << tab[2] << std::endl;

    char tab1[tab_size] = "AGH EiT";
    char tab2[tab_size] = {'A','G','H'};
    std::cout << " tab1= " << tab1 << std::endl;
    std::cout << " tab2= " << tab2 << std::endl;
    std::cout << " tab1[2]= " << tab1[2] << std::endl;
}
