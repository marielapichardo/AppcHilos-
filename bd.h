#pragma once
#ifndef DATABASE_H
#define DATABASE_H
using namespace System::Data::SqlClient;

namespace bd {
    void Guardar_bd(int cal5_kilos, int cal7_kilos, int cal9_kilos, std::string descripcion);
}

#endif
