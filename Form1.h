#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtCal9;
	protected:

	private: System::Windows::Forms::TextBox^ txtCal5;
	private: System::Windows::Forms::TextBox^ txtCal7;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnGuardar;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtCal9 = (gcnew System::Windows::Forms::TextBox());
			this->txtCal5 = (gcnew System::Windows::Forms::TextBox());
			this->txtCal7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtCal9
			// 
			this->txtCal9->Location = System::Drawing::Point(393, 120);
			this->txtCal9->Name = L"txtCal9";
			this->txtCal9->Size = System::Drawing::Size(134, 22);
			this->txtCal9->TabIndex = 0;
			// 
			// txtCal5
			// 
			this->txtCal5->Location = System::Drawing::Point(15, 120);
			this->txtCal5->Name = L"txtCal5";
			this->txtCal5->Size = System::Drawing::Size(134, 22);
			this->txtCal5->TabIndex = 1;
			// 
			// txtCal7
			// 
			this->txtCal7->Location = System::Drawing::Point(213, 120);
			this->txtCal7->Name = L"txtCal7";
			this->txtCal7->Size = System::Drawing::Size(134, 22);
			this->txtCal7->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"PRODUCCION";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Calibre 5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(210, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Calibre 7";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(390, 91);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Calibre 9";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(615, 109);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(80, 33);
			this->btnGuardar->TabIndex = 7;
			this->btnGuardar->Text = L"Registrar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Form1::btnGuardar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 217);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(986, 279);
			this->dataGridView1->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"semana 1", L"semana 2", L"semana 3", L"semana 4",
					L"semana 5"
			});
			this->comboBox1->Location = System::Drawing::Point(169, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 9;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 550);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtCal7);
			this->Controls->Add(this->txtCal5);
			this->Controls->Add(this->txtCal9);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Retrieve user input
		String^ descripcion = txtCal5->Text;
		String^ cal5 = txtCal5->Text;
		String^ cal7 = txtCal7->Text;
		String^ cal9 = txtCal9->Text;

		// Conexion
		String^ connString = "Data Source=LAPTOP-AH9CLU6O;Initial Catalog=AppMango;Integrated Security=True";

		// SQL connection and command
		SqlConnection^ conn = gcnew SqlConnection(connString);
		conn->Open();
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO Produccion (Fecha, Calibre5_Kilos, Calibre7_Kilos, Calibre9_Kilos) VALUES (@fecha, @cal5, @cal7, @cal9)", conn);
		cmd->Parameters->AddWithValue("@fecha", DateTime::Now);
		cmd->Parameters->AddWithValue("@descripcion", comboBox1);

		cmd->Parameters->AddWithValue("@cal5", Convert::ToDecimal(cal5));
		cmd->Parameters->AddWithValue("@cal7", Convert::ToDecimal(cal7));
		cmd->Parameters->AddWithValue("@cal9", Convert::ToDecimal(cal9));

		cmd->ExecuteNonQuery();
		conn->Close();

		MessageBox::Show("Datos guardados exitosamente.");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
}

};
}
