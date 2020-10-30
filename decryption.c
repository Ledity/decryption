// #include "head_bank.h"

struct client
{
        long long int identification_number;

        int account;
        int amount;
        int code;
};

struct key
{
        int ind_num;

        int key_1;
        int key_2;
        int key_3;
};

struct balance{
        int currency_start[5];
        int currency_cipher[5];
};


//--------------------decryption---------------------

void decryption (int N,
                 struct client *bank_cipher_pointer,
                 struct client *bank_new_pointer,
                 struct key *cipher_pounter,
                 struct balance *total_balance)
{
        struct client *bank_cipher;
        struct client *bank_new;
        struct key *cipher;

        for (int i = 0; i < N; i++)
        {
                bank_new[i].account = bank_cipher[i].account - cipher[i].key_1;
                bank_new[i].amount  = bank_cipher[i].amount  - cipher[i].key_2;
                bank_new[i].code    = bank_cipher[i].code    - cipher[i].key_3;
        };

        
}
