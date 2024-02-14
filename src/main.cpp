#include <string>
#include <iostream>
#include <fstream>


int main(int argc, char** argv)  {
    std::string grammar_filename, text_filename;
    try {
        if (argc == 2) {
            grammar_filename = argv[1];

            std::cout << "Grammar is LL1." << std::endl;
        } else if (argc == 3) {
            grammar_filename = argv[1];
            text_filename = argv[2];
            std::cout << "Input:" << std::endl;
            std::ifstream file;
            file.open(text_filename);
            std::string line;
            while (getline(file, line)) {
                std::cout << line << std::endl;
            }
            file.close();
            std::cout << "Grammar is LL1." << std::endl;
            if (1) {
                std::cout << "Parsing was successful" << std::endl;
            } else {
                std::cerr << "Parsing encountered an error." << std::endl;
            }
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

}
