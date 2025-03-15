#include <iostream>
#include <openssl/evp.h>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>

std::string computeMD5FromString(const std::string &str) {
    unsigned char result[EVP_MAX_MD_SIZE];
    unsigned int resultLength = 0;

    EVP_MD_CTX *context = EVP_MD_CTX_new();
    EVP_DigestInit_ex(context, EVP_md5(), nullptr);
    EVP_DigestUpdate(context, str.c_str(), str.length());
    EVP_DigestFinal_ex(context, result, &resultLength);
    EVP_MD_CTX_free(context);

    std::ostringstream hexStream;
    for (unsigned int i = 0; i < resultLength; ++i)
        hexStream << std::hex << std::setw(2) << std::setfill('0')
                  << static_cast<int>(result[i]);

    return hexStream.str();
}

int main() {
    std::string originalAns;
    std::cin >> originalAns;

    int i = 1;
    while (true) {
        std::string ans = originalAns + std::to_string(i);
        if (computeMD5FromString(ans).substr(0, 5) == "00000") {
            std::cout << i << std::endl;
            break;
        }
        i++;
    }

    return 0;
}

