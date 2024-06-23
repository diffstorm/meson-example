#include "crc32.h"
#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <file>" << std::endl;
        return 1;
    }

    std::ifstream file(argv[1], std::ios::binary);
    if (!file) {
        std::cerr << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    std::vector<uint8_t> buffer((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    uint32_t checksum = crc32(buffer.data(), buffer.size());
    std::cout << "CRC32 Checksum: " << std::hex << checksum << std::endl;

    return 0;
}
