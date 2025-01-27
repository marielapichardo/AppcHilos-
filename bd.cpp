#include "bd.h"
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>

#include <mutex>

std::mutex db_mtx;

void bd::Guardar_bd(int cal5_kilos, int cal7_kilos, int cal9_kilos, std::string descripcion) {
    try {
        std::string connString = "Data Source=LAPTOP-AH9CLU6O;Initial Catalog=AppMangoG;Integrated Security=True";
        System::String^ sysConnString = gcnew System::String(connString.c_str());
        System::Data::SqlClient::SqlConnection^ conn = gcnew System::Data::SqlClient::SqlConnection(sysConnString);
        conn->Open();

        System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand(
            "INSERT INTO Produccion (Fecha, Calibre5_Kilos, Calibre7_Kilos, Calibre9_Kilos, Descripcion) VALUES (@fecha, @cal5, @cal7, @cal9, @descripcion)", conn);
        cmd->Parameters->AddWithValue("@fecha", System::DateTime::Now);
        cmd->Parameters->AddWithValue("@cal5", cal5_kilos);
        cmd->Parameters->AddWithValue("@cal7", cal7_kilos);
        cmd->Parameters->AddWithValue("@cal9", cal9_kilos);
        cmd->Parameters->AddWithValue("@descripcion", gcnew System::String(descripcion.c_str()));

        cmd->ExecuteNonQuery();
        conn->Close();

        std::lock_guard<std::mutex> lock(db_mtx);
        std::cout << "Data saved to the database successfully.\n";
    }
    catch (System::Exception^ ex) {
        std::lock_guard<std::mutex> lock(db_mtx);
        std::cout << "Error saving data to the database: " << msclr::interop::marshal_as<std::string>(ex->Message) << "\n";
    }
}