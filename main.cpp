#include <iostream>
#include <sqlite3.h>

int main() {
    sqlite3* db;
    int rc = sqlite3_open("mi_base.db", &db);

    if (rc) {
        std::cout << "No se pudo abrir la base: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    }

    std::cout << "Base abierta correctamente\n";
    sqlite3_close(db);
    return 0;
}
