#include "Chat.h"
#include "iostream"
#include "string.h"
#include <stdio.h>
#include <inttypes.h>
Chat::Chat() {
    data_count = 0;
}
void Chat::reg(char _login[LOGINLENGTH], char _pass[], int pass_length) {
    // Ваш код
    data[data_count++] = AuthData(_login, sha1(_pass, pass_length));
}
bool Chat::login(char _login[LOGINLENGTH], char _pass[], int pass_length) {
    uint* _pass_sha1 = sha1(_pass, pass_length);
    //std::cout << _login << std::endl;
    //printf("%" PRIu32 "\n", *sha1(_pass, pass_length));//std::cout << _login << " " << _pass << " " << pass_length << " " << _pass_sha1 << std::endl;
    for (int i = 0; i < data_count; i++) {
        if (string(_login) == string(data[i].login)) { //if (strcmp(ad.login, _login))
            return (*data[i].pass_sha1_hash == *sha1(_pass, pass_length));
        }
    }
    return false;
}