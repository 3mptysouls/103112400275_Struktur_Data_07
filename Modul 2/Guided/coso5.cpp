#include <iostream>
using namespace std;

int main()
{
    char pesan_array[] = "Nasi Padang";
    char *pesan_pointer = "Ayam Bakar 23";

    cout << "String array: " << pesan_array << endl;
    cout << "String pointer: " << pesan_pointer << endl;

    pesan_array[0] = 'h';
    cout << "String array setelah diubah: " << pesan_array << endl;

    pesan_pointer = "Sariman";
    cout << "String pointer setelah menunjuk ke string lain: " << pesan_pointer << endl;

    return 0;
}