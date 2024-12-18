
#include <iostream> // Header untuk input dan output

int main() {
    int jum = 0;
   std::cout << "=======================================" <<std::endl; 
    do {
        if (jum % 2 == 0) {
            std::cout << "Menampilkan data  | ke " << jum + 1 << " |" << std::endl; // Mencetak Hello, World!;
                std::cout << "-------------------------------" <<std::endl;
        } else {

        } 
         jum += 1;
    }
    
    while (jum < 15);
    
    std::cout << "sudah selesai " << jum << " baris" <<std::endl; 
     
    return 0; // Mengembalikan 0 sebagai tanda program selesai dengan sukses
}
