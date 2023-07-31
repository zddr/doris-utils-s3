#include <iostream>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <vector>

namespace doris {
    static const std::string kResourceId = "TabletCooldownTest";

//    int main() {
//        S3Conf s3_conf;
//        s3_conf.ak = "";
//        s3_conf.sk = "";
//        s3_conf.endpoint = "";
//        s3_conf.region = "";
//        s3_conf.bucket = "";
//        s3_conf.prefix = "tablet_cooldown_test";
//        auto s3_fs = std::make_shared<io::S3FileSystem>(std::move(s3_conf), kResourceId);
//        std::cout << "Hello, World!" << std::endl;
//        return 0;
//    }




    bool hostname_to_ip_addrs(const std::string &name, std::vector<std::string> *addresses) {
        addrinfo hints;
        memset(&hints, 0, sizeof(struct addrinfo));
        hints.ai_family = AF_INET6; // IPv4 addresses only
        hints.ai_socktype = SOCK_STREAM;

        struct addrinfo *addr_info;

        if (getaddrinfo(name.c_str(), nullptr, &hints, &addr_info) != 0) {
            return false;
        }

        addrinfo *it = addr_info;

        while (it != nullptr) {
            char addr_buf[64];
            const char *result =
                    inet_ntop(AF_INET, &((sockaddr_in *) it->ai_addr)->sin_addr, addr_buf, 64);

            if (result == nullptr) {
                freeaddrinfo(addr_info);
                return false;
            }

            // add address if not exists
            std::string address = std::string(addr_buf);

            addresses->push_back(address);

            it = it->ai_next;
        }

        freeaddrinfo(addr_info);
        return true;
    }

    int main() {
        std::vector<std::string> addresses;
        hostname_to_ip_addrs("zdv6", &addresses);
        std::cout << addresses.size() << std::endl;
        return 0;
    }
}
