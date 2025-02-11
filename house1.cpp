#include <iostream>

int main() { 
    int height = 7; 
    int width = 13; 

   // bubong
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < height - i - 1; j++) {
            std::cout << " ";
        }
       
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // pader
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1) {
                std::cout << "*"; 
            } else {
                std::cout << " "; 
            }
        }
        std::cout << std::endl;
    }

    // kalsada
    for (int i = 0; i < height / 2; i++) {
        for (int j = 0; j < width; j++) {
            if (i == height / 2 - 1 && (j == width / 2 - 2 || j == width / 2 - 1 || j == width / 2)) {
                std::cout << "_"; 
            } else if (j == width / 2 - 2 || j == width / 2 - 1 || j == width / 2) {
                std::cout << "_"; 
            } else {
                std::cout << "_"; 
            }
        }
        std::cout << std::endl;
    }
    // print ng sasakyan
{
    std::cout << "        ______\n";
    std::cout << "  ____//  __  \\____\n";
    std::cout << " /   _  |  |  |  _  \\\n";
    std::cout << "|   /_\\_|__|__|_/_\\  |\n";
    std::cout << " \\_/(_)\\_______/(_)\\_/\n";
}
    return 0;
}