#pragma once
#include "Section_0.h"
#include "Section_1.h"
#include "Section_3.h"
#include "Section_5.h"

#include "vector"

namespace MeteoSummary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}





	protected:























































	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ Summary_text;
	private: System::Windows::Forms::Button^ Calculation_summary;
	private: System::Windows::Forms::TextBox^ Number_station;
	private: System::Windows::Forms::TextBox^ Number_district;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ Type_speed_dimension;
	private: System::Windows::Forms::ComboBox^ Type_speed;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Time_calculation;
	private: System::Windows::Forms::ComboBox^ Data_calculation;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ Cloud_top;
	private: System::Windows::Forms::ComboBox^ Clouds_middle_layer;
	private: System::Windows::Forms::ComboBox^ Clouds_basement;
	private: System::Windows::Forms::ComboBox^ Clouds_exact_amount;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ Past_weather;
	private: System::Windows::Forms::ComboBox^ Current_weather;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::TextBox^ Rainfall;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ Pressure_trend_value;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::ComboBox^ Baric_tendency_characteristic;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Air_pressure_sea_level;
	private: System::Windows::Forms::TextBox^ Air_pressure_station;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ Dew_point;
	private: System::Windows::Forms::TextBox^ Air_temperature;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Speed_wind;
	private: System::Windows::Forms::TextBox^ Direction_wind;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ Number_clouds;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Visibility_range;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Cloud_height;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ Type_station;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ Group_7wwW1W2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ Group_6RRRtr;
	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TabPage^ tabPage3;



private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TextBox^ Max_day_temperature;



private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ Min_day_temperature;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ComboBox^ Soil_surface_condition;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ Night_soil_temperature;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ComboBox^ Snow_condition;

private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ Snow_height;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ Sunshine_duration;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::ComboBox^ Precipitation_duration;
private: System::Windows::Forms::ComboBox^ NGO_measurements;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::ComboBox^ NGO_type;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ NGO_number;
private: System::Windows::Forms::ComboBox^ Additional_weather_information;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::ComboBox^ Additional_characteristic_1;
private: System::Windows::Forms::ComboBox^ Additional_characteristic_2;
private: System::Windows::Forms::TextBox^ Additional_characteristic_3;
private: System::Windows::Forms::ComboBox^ Additional2_characteristic_1;
private: System::Windows::Forms::TextBox^ Additional2_characteristic_4;



private: System::Windows::Forms::ComboBox^ Additional2_characteristic_3;

private: System::Windows::Forms::ComboBox^ Additional2_characteristic_2;

private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ Soil_temperature;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ Air_temperature_average;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ Min_night_air_temperature;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ Wind_speed_maximum;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::SplitContainer^ splitContainer2;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ Day_rainfall;






















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->Summary_text = (gcnew System::Windows::Forms::RichTextBox());
			this->Calculation_summary = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Number_station = (gcnew System::Windows::Forms::TextBox());
			this->Number_district = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Type_speed_dimension = (gcnew System::Windows::Forms::ComboBox());
			this->Type_speed = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Time_calculation = (gcnew System::Windows::Forms::ComboBox());
			this->Data_calculation = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Cloud_top = (gcnew System::Windows::Forms::ComboBox());
			this->Clouds_middle_layer = (gcnew System::Windows::Forms::ComboBox());
			this->Clouds_basement = (gcnew System::Windows::Forms::ComboBox());
			this->Clouds_exact_amount = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Past_weather = (gcnew System::Windows::Forms::ComboBox());
			this->Current_weather = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Precipitation_duration = (gcnew System::Windows::Forms::ComboBox());
			this->Rainfall = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Pressure_trend_value = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Baric_tendency_characteristic = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Air_pressure_sea_level = (gcnew System::Windows::Forms::TextBox());
			this->Air_pressure_station = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Dew_point = (gcnew System::Windows::Forms::TextBox());
			this->Air_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Speed_wind = (gcnew System::Windows::Forms::TextBox());
			this->Direction_wind = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Number_clouds = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Visibility_range = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Cloud_height = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Type_station = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Group_7wwW1W2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Group_6RRRtr = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->Additional2_characteristic_1 = (gcnew System::Windows::Forms::ComboBox());
			this->Additional2_characteristic_4 = (gcnew System::Windows::Forms::TextBox());
			this->Additional2_characteristic_3 = (gcnew System::Windows::Forms::ComboBox());
			this->Additional2_characteristic_2 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->Additional_characteristic_3 = (gcnew System::Windows::Forms::TextBox());
			this->Additional_characteristic_2 = (gcnew System::Windows::Forms::ComboBox());
			this->Additional_characteristic_1 = (gcnew System::Windows::Forms::ComboBox());
			this->Additional_weather_information = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->NGO_type = (gcnew System::Windows::Forms::ComboBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->NGO_number = (gcnew System::Windows::Forms::ComboBox());
			this->NGO_measurements = (gcnew System::Windows::Forms::ComboBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Sunshine_duration = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Snow_height = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Snow_condition = (gcnew System::Windows::Forms::ComboBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Night_soil_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Soil_surface_condition = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->Min_day_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->Max_day_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->Day_rainfall = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Wind_speed_maximum = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->Min_night_air_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->Air_temperature_average = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Soil_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(18, 18);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(1356, 682);
			this->splitContainer1->SplitterDistance = 247;
			this->splitContainer1->SplitterWidth = 6;
			this->splitContainer1->TabIndex = 50;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->Summary_text);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->Calculation_summary);
			this->splitContainer2->Size = System::Drawing::Size(247, 682);
			this->splitContainer2->SplitterDistance = 269;
			this->splitContainer2->TabIndex = 0;
			// 
			// Summary_text
			// 
			this->Summary_text->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Summary_text->Location = System::Drawing::Point(0, 0);
			this->Summary_text->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Summary_text->Name = L"Summary_text";
			this->Summary_text->Size = System::Drawing::Size(247, 269);
			this->Summary_text->TabIndex = 49;
			this->Summary_text->Text = L"";
			// 
			// Calculation_summary
			// 
			this->Calculation_summary->Location = System::Drawing::Point(50, 51);
			this->Calculation_summary->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Calculation_summary->Name = L"Calculation_summary";
			this->Calculation_summary->Size = System::Drawing::Size(159, 49);
			this->Calculation_summary->TabIndex = 50;
			this->Calculation_summary->Text = L"Расчёт";
			this->Calculation_summary->UseVisualStyleBackColor = true;
			this->Calculation_summary->Click += gcnew System::EventHandler(this, &MyForm::Calculation_summary_Click_1);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(4, 5);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1068, 655);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Number_station);
			this->tabPage1->Controls->Add(this->Number_district);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->Type_speed_dimension);
			this->tabPage1->Controls->Add(this->Type_speed);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->Time_calculation);
			this->tabPage1->Controls->Add(this->Data_calculation);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(1060, 622);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Раздел 0";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Number_station
			// 
			this->Number_station->Location = System::Drawing::Point(172, 152);
			this->Number_station->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Number_station->Name = L"Number_station";
			this->Number_station->Size = System::Drawing::Size(148, 26);
			this->Number_station->TabIndex = 17;
			this->Number_station->Text = L"001";
			// 
			// Number_district
			// 
			this->Number_district->Location = System::Drawing::Point(14, 152);
			this->Number_district->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Number_district->Name = L"Number_district";
			this->Number_district->Size = System::Drawing::Size(148, 26);
			this->Number_district->TabIndex = 16;
			this->Number_district->Text = L"01";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 128);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(392, 20);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Номер района(2 знака) и номер станции(3 занака):";
			// 
			// Type_speed_dimension
			// 
			this->Type_speed_dimension->FormattingEnabled = true;
			this->Type_speed_dimension->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Расчетная оценка", L"Инструментальное измерение" });
			this->Type_speed_dimension->Location = System::Drawing::Point(105, 91);
			this->Type_speed_dimension->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Type_speed_dimension->Name = L"Type_speed_dimension";
			this->Type_speed_dimension->Size = System::Drawing::Size(186, 28);
			this->Type_speed_dimension->TabIndex = 14;
			this->Type_speed_dimension->Text = L"Расчетная оценка";
			// 
			// Type_speed
			// 
			this->Type_speed->FormattingEnabled = true;
			this->Type_speed->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"м/с", L"узлы" });
			this->Type_speed->Location = System::Drawing::Point(14, 91);
			this->Type_speed->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Type_speed->Name = L"Type_speed";
			this->Type_speed->Size = System::Drawing::Size(74, 28);
			this->Type_speed->TabIndex = 13;
			this->Type_speed->Text = L"м/с";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(276, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Указатель едениц скорости ветра:";
			// 
			// Time_calculation
			// 
			this->Time_calculation->FormattingEnabled = true;
			this->Time_calculation->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->Time_calculation->Location = System::Drawing::Point(105, 29);
			this->Time_calculation->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Time_calculation->Name = L"Time_calculation";
			this->Time_calculation->Size = System::Drawing::Size(61, 28);
			this->Time_calculation->TabIndex = 11;
			this->Time_calculation->Text = L"00";
			// 
			// Data_calculation
			// 
			this->Data_calculation->FormattingEnabled = true;
			this->Data_calculation->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->Data_calculation->Location = System::Drawing::Point(14, 29);
			this->Data_calculation->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Data_calculation->Name = L"Data_calculation";
			this->Data_calculation->Size = System::Drawing::Size(62, 28);
			this->Data_calculation->TabIndex = 10;
			this->Data_calculation->Text = L"01";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 5);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Дата и срок наблюдения по ВСВ:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->Cloud_top);
			this->tabPage2->Controls->Add(this->Clouds_middle_layer);
			this->tabPage2->Controls->Add(this->Clouds_basement);
			this->tabPage2->Controls->Add(this->Clouds_exact_amount);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->Past_weather);
			this->tabPage2->Controls->Add(this->Current_weather);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->Precipitation_duration);
			this->tabPage2->Controls->Add(this->Rainfall);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->Pressure_trend_value);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->Baric_tendency_characteristic);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->Air_pressure_sea_level);
			this->tabPage2->Controls->Add(this->Air_pressure_station);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->Dew_point);
			this->tabPage2->Controls->Add(this->Air_temperature);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->Speed_wind);
			this->tabPage2->Controls->Add(this->Direction_wind);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->Number_clouds);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->Visibility_range);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->Cloud_height);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->Type_station);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->Group_7wwW1W2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->Group_6RRRtr);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(1060, 622);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Раздел 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Cloud_top
			// 
			this->Cloud_top->FormattingEnabled = true;
			this->Cloud_top->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Облаков нет", L"Перистые волокнистые количество облаков не увеличивается",
					L"Перистые плотные хлопьевидные", L"Перистые плотные образовавшиеся из наковален кучеводождевых облаков", L"Перистые волокнистые облака в целом уплотняются и распространяются по всему небу",
					L"Перисто-слоистые волокнистые", L"Перисто-слоистые  туманообразные распространяются по небу и уплотняются < 10 балл"
					L"ов высота сплошной пелены облаков над горизонтом > 45 град",
					L"Перисто-слоистые  туманообразные 10 баллов", L"Перисто-слоистые  туманообразные не распространяются по небу < 10 баллов", L"Перисто-кучевые",
					L"Невозможно определить"
			});
			this->Cloud_top->Location = System::Drawing::Point(566, 522);
			this->Cloud_top->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Cloud_top->Name = L"Cloud_top";
			this->Cloud_top->Size = System::Drawing::Size(472, 28);
			this->Cloud_top->TabIndex = 78;
			this->Cloud_top->Text = L"Перистые волокнистые количество облаков не увеличивается";
			// 
			// Clouds_middle_layer
			// 
			this->Clouds_middle_layer->FormattingEnabled = true;
			this->Clouds_middle_layer->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Облаков нет", L"Высокослоистые туманообразные",
					L"Высокослоистые волнистообразные или слоисто-дождевые", L"Высококучевые волнистообразные просвечивающие  один слой", L"Высококучевые волнистообразные чечевицеобразные или неоднородные",
					L"Высококучевые волнистообразные просвечивающие в виде гряд (валов) полос (или неск"
					L"ольких слоёв) или высококучевые волнистообразные непросвечивающие несколько слоё"
					L"в",
					L"Высококучевые кучевообразные образовавшиеся из кучевых или с полосами падения", L"Высококучевые волнистообразные непросвечивающие один слой или высококучевые волни"
					L"стообразные просвечивающие несколько слоёв или высококучевые вместе с высокослои"
					L"стыми или слоисто-дождевыми",
					L"Высококучевые кучевообразные хлопьевидные или башенковидные", L"Высококучевые при хаотическом виде неба", L"Невозможно определить"
			});
			this->Clouds_middle_layer->Location = System::Drawing::Point(566, 480);
			this->Clouds_middle_layer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Clouds_middle_layer->Name = L"Clouds_middle_layer";
			this->Clouds_middle_layer->Size = System::Drawing::Size(472, 28);
			this->Clouds_middle_layer->TabIndex = 77;
			this->Clouds_middle_layer->Text = L"Высокослоистые туманообразные";
			// 
			// Clouds_basement
			// 
			this->Clouds_basement->FormattingEnabled = true;
			this->Clouds_basement->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Облаков нет", L"Кучевые плоские", L"Кучевые средние или кучевые мощные",
					L"Кучево-дождевые лысые", L"Слоисто-кучевые кучевообразные", L"Слоисто-кучевые волнистообразные", L"Слоистые туманообразные или волнистообразные или разорванно-слоистые",
					L"Слоистые разорванно-дождевые", L"Кучевые и слоисто-кучевые", L"Кучево-дождевые волосатые", L"Невозможно определить"
			});
			this->Clouds_basement->Location = System::Drawing::Point(566, 438);
			this->Clouds_basement->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Clouds_basement->Name = L"Clouds_basement";
			this->Clouds_basement->Size = System::Drawing::Size(472, 28);
			this->Clouds_basement->TabIndex = 76;
			this->Clouds_basement->Text = L"Кучевые плоские";
			// 
			// Clouds_exact_amount
			// 
			this->Clouds_exact_amount->FormattingEnabled = true;
			this->Clouds_exact_amount->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0 (облаков нет)", L"1 или менее(но не 0)",
					L"2–3", L"4", L"5", L"6", L"7–8", L"9 или более(но не 10 есть просветы)", L"10 (без просветов)", L"Определить невозможно из - за тумана метели или других метеорологических явлений "
					L"затрудняющих видимость",
					L"Определить невозможно по другим причинам кроме указанных(кроме указаных ранее) ил"
					L"и наблюдения не производились"
			});
			this->Clouds_exact_amount->Location = System::Drawing::Point(566, 397);
			this->Clouds_exact_amount->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Clouds_exact_amount->Name = L"Clouds_exact_amount";
			this->Clouds_exact_amount->Size = System::Drawing::Size(472, 28);
			this->Clouds_exact_amount->TabIndex = 75;
			this->Clouds_exact_amount->Text = L"0 (облаков нет)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(561, 372);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(457, 20);
			this->label18->TabIndex = 74;
			this->label18->Text = L"Количество облаков нижнего, среднего и верхнего ярусов:";
			// 
			// Past_weather
			// 
			this->Past_weather->FormattingEnabled = true;
			this->Past_weather->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
				L"00", L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
					L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
					L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60",
					L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78",
					L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96",
					L"97", L"98", L"99"
			});
			this->Past_weather->Location = System::Drawing::Point(566, 335);
			this->Past_weather->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Past_weather->Name = L"Past_weather";
			this->Past_weather->Size = System::Drawing::Size(332, 28);
			this->Past_weather->TabIndex = 73;
			this->Past_weather->Text = L"00";
			// 
			// Current_weather
			// 
			this->Current_weather->FormattingEnabled = true;
			this->Current_weather->Items->AddRange(gcnew cli::array< System::Object^  >(100) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59",
					L"60", L"61", L"62", L"63", L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77",
					L"78", L"79", L"80", L"81", L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95",
					L"96", L"97", L"98", L"99"
			});
			this->Current_weather->Location = System::Drawing::Point(566, 294);
			this->Current_weather->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Current_weather->Name = L"Current_weather";
			this->Current_weather->Size = System::Drawing::Size(332, 28);
			this->Current_weather->TabIndex = 72;
			this->Current_weather->Text = L"00";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(561, 269);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(243, 20);
			this->label17->TabIndex = 71;
			this->label17->Text = L"Текущая и прошедшая погода:";
			// 
			// Precipitation_duration
			// 
			this->Precipitation_duration->FormattingEnabled = true;
			this->Precipitation_duration->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"6", L"12", L"18", L"24", L"1", L"2",
					L"3", L"9", L"15"
			});
			this->Precipitation_duration->Location = System::Drawing::Point(646, 232);
			this->Precipitation_duration->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Precipitation_duration->Name = L"Precipitation_duration";
			this->Precipitation_duration->Size = System::Drawing::Size(61, 28);
			this->Precipitation_duration->TabIndex = 70;
			this->Precipitation_duration->Text = L"6";
			// 
			// Rainfall
			// 
			this->Rainfall->Location = System::Drawing::Point(566, 232);
			this->Rainfall->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Rainfall->Name = L"Rainfall";
			this->Rainfall->Size = System::Drawing::Size(70, 26);
			this->Rainfall->TabIndex = 69;
			this->Rainfall->Text = L"00,1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(561, 208);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(432, 20);
			this->label16->TabIndex = 68;
			this->label16->Text = L"Количество осадков и продолжительность измерения:";
			// 
			// Pressure_trend_value
			// 
			this->Pressure_trend_value->Location = System::Drawing::Point(566, 172);
			this->Pressure_trend_value->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Pressure_trend_value->Name = L"Pressure_trend_value";
			this->Pressure_trend_value->Size = System::Drawing::Size(70, 26);
			this->Pressure_trend_value->TabIndex = 67;
			this->Pressure_trend_value->Text = L"00,1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(561, 148);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(471, 20);
			this->label15->TabIndex = 66;
			this->label15->Text = L"Значение барической тенденции за последние 3 часа в гПа:";
			// 
			// Baric_tendency_characteristic
			// 
			this->Baric_tendency_characteristic->FormattingEnabled = true;
			this->Baric_tendency_characteristic->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Рост затем падение(рост больше падения)",
					L"Рост затем без изменения", L"Рост затем менее сильный рост", L"Рост (равномерный или неравномерный)", L"Падение затем рост(рост больше падения)",
					L"Без изменения затем рост", L"Рост затем более сильный рост", L"Ровный (или неровный) ход", L"Падение затем рост(падение больше роста)",
					L"Падение затем без изменения", L"Падение затем менее сильное падение", L"Падение (равномерное или неравномерное)", L"Рост затем падение(падение больше роста)",
					L"Без изменения затем падение", L"Падение затем более сильное падение"
			});
			this->Baric_tendency_characteristic->Location = System::Drawing::Point(566, 111);
			this->Baric_tendency_characteristic->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Baric_tendency_characteristic->Name = L"Baric_tendency_characteristic";
			this->Baric_tendency_characteristic->Size = System::Drawing::Size(386, 28);
			this->Baric_tendency_characteristic->TabIndex = 65;
			this->Baric_tendency_characteristic->Text = L"Рост затем падение(рост больше падения)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(561, 86);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(443, 20);
			this->label14->TabIndex = 64;
			this->label14->Text = L"Изменение давления по барометру за последние 3 часа:";
			// 
			// Air_pressure_sea_level
			// 
			this->Air_pressure_sea_level->Location = System::Drawing::Point(724, 51);
			this->Air_pressure_sea_level->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Air_pressure_sea_level->Name = L"Air_pressure_sea_level";
			this->Air_pressure_sea_level->Size = System::Drawing::Size(148, 26);
			this->Air_pressure_sea_level->TabIndex = 63;
			this->Air_pressure_sea_level->Text = L"1000,0";
			// 
			// Air_pressure_station
			// 
			this->Air_pressure_station->Location = System::Drawing::Point(566, 51);
			this->Air_pressure_station->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Air_pressure_station->Name = L"Air_pressure_station";
			this->Air_pressure_station->Size = System::Drawing::Size(148, 26);
			this->Air_pressure_station->TabIndex = 62;
			this->Air_pressure_station->Text = L"1000,0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(561, 25);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(312, 20);
			this->label13->TabIndex = 61;
			this->label13->Text = L"к среднему уровню моря(1000,0-1999,9):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(561, 5);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(415, 20);
			this->label12->TabIndex = 60;
			this->label12->Text = L"Давление воздуха на уровне станции и  приведенное";
			// 
			// Dew_point
			// 
			this->Dew_point->Location = System::Drawing::Point(99, 502);
			this->Dew_point->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Dew_point->Name = L"Dew_point";
			this->Dew_point->Size = System::Drawing::Size(70, 26);
			this->Dew_point->TabIndex = 59;
			this->Dew_point->Text = L"+1,1";
			// 
			// Air_temperature
			// 
			this->Air_temperature->Location = System::Drawing::Point(18, 502);
			this->Air_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Air_temperature->Name = L"Air_temperature";
			this->Air_temperature->Size = System::Drawing::Size(70, 26);
			this->Air_temperature->TabIndex = 58;
			this->Air_temperature->Text = L"+1,1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 477);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(277, 20);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Температура воздуха и тоска росы:";
			// 
			// Speed_wind
			// 
			this->Speed_wind->Location = System::Drawing::Point(99, 442);
			this->Speed_wind->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Speed_wind->Name = L"Speed_wind";
			this->Speed_wind->Size = System::Drawing::Size(70, 26);
			this->Speed_wind->TabIndex = 56;
			this->Speed_wind->Text = L"5";
			// 
			// Direction_wind
			// 
			this->Direction_wind->Location = System::Drawing::Point(18, 442);
			this->Direction_wind->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Direction_wind->Name = L"Direction_wind";
			this->Direction_wind->Size = System::Drawing::Size(70, 26);
			this->Direction_wind->TabIndex = 55;
			this->Direction_wind->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 417);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(412, 20);
			this->label10->TabIndex = 54;
			this->label10->Text = L"Среднее направление(0-360) и скорость(0-99) ветра:";
			// 
			// Number_clouds
			// 
			this->Number_clouds->FormattingEnabled = true;
			this->Number_clouds->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0 (облаков нет)", L"1 или менее(но не 0)",
					L"2–3", L"4", L"5", L"6", L"7–8", L"9 или более(но не 10 есть просветы)", L"10 (без просветов)", L"Определить невозможно из - за тумана метели или других метеорологических явлений "
					L"затрудняющих видимость",
					L"Определить невозможно по другим причинам кроме указанных(кроме указаных ранее) ил"
					L"и наблюдения не производились"
			});
			this->Number_clouds->Location = System::Drawing::Point(18, 374);
			this->Number_clouds->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Number_clouds->Name = L"Number_clouds";
			this->Number_clouds->Size = System::Drawing::Size(472, 28);
			this->Number_clouds->TabIndex = 53;
			this->Number_clouds->Text = L"1 или менее(но не 0)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 349);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(225, 20);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Общее количество облаков:";
			// 
			// Visibility_range
			// 
			this->Visibility_range->Location = System::Drawing::Point(14, 314);
			this->Visibility_range->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Visibility_range->Name = L"Visibility_range";
			this->Visibility_range->Size = System::Drawing::Size(148, 26);
			this->Visibility_range->TabIndex = 51;
			this->Visibility_range->Text = L"0,05";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 289);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(485, 20);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Метеорологическая дальность видимости в горизонтальном:";
			// 
			// Cloud_height
			// 
			this->Cloud_height->Location = System::Drawing::Point(18, 254);
			this->Cloud_height->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Cloud_height->Name = L"Cloud_height";
			this->Cloud_height->Size = System::Drawing::Size(148, 26);
			this->Cloud_height->TabIndex = 49;
			this->Cloud_height->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 189);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(468, 60);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Высота основания самых низких облаков над поверхностью\r\n(не определено или нижняя"
				L" граница облачности находится \r\nниже уровня станции - /):";
			// 
			// Type_station
			// 
			this->Type_station->FormattingEnabled = true;
			this->Type_station->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Обслуживаемая персоналом", L"Автоматическая" });
			this->Type_station->Location = System::Drawing::Point(14, 152);
			this->Type_station->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Type_station->Name = L"Type_station";
			this->Type_station->Size = System::Drawing::Size(332, 28);
			this->Type_station->TabIndex = 47;
			this->Type_station->Text = L"Обслуживаемая персоналом";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 128);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 20);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Тип станции:";
			// 
			// Group_7wwW1W2
			// 
			this->Group_7wwW1W2->FormattingEnabled = true;
			this->Group_7wwW1W2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Включена", L"Не включена (Нет явлений подлежащих передаче)",
					L"Не включена (Наблюдения не производились)"
			});
			this->Group_7wwW1W2->Location = System::Drawing::Point(14, 91);
			this->Group_7wwW1W2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Group_7wwW1W2->Name = L"Group_7wwW1W2";
			this->Group_7wwW1W2->Size = System::Drawing::Size(332, 28);
			this->Group_7wwW1W2->TabIndex = 45;
			this->Group_7wwW1W2->Text = L"Включена";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 66);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(238, 20);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Включение группы 7wwW1W2:";
			// 
			// Group_6RRRtr
			// 
			this->Group_6RRRtr->FormattingEnabled = true;
			this->Group_6RRRtr->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Включена в раздел 1 и 3", L"Включена в раздел 1",
					L"Включена в раздел 3", L"Не включена (Осадков не было)", L"Не включена (Количество осадков не измерялось)"
			});
			this->Group_6RRRtr->Location = System::Drawing::Point(14, 29);
			this->Group_6RRRtr->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Group_6RRRtr->Name = L"Group_6RRRtr";
			this->Group_6RRRtr->Size = System::Drawing::Size(332, 28);
			this->Group_6RRRtr->TabIndex = 43;
			this->Group_6RRRtr->Text = L"Включена в раздел 1 и 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 5);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 20);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Включение группы 6RRRtR:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->Additional2_characteristic_1);
			this->tabPage3->Controls->Add(this->Additional2_characteristic_4);
			this->tabPage3->Controls->Add(this->Additional2_characteristic_3);
			this->tabPage3->Controls->Add(this->Additional2_characteristic_2);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->Additional_characteristic_3);
			this->tabPage3->Controls->Add(this->Additional_characteristic_2);
			this->tabPage3->Controls->Add(this->Additional_characteristic_1);
			this->tabPage3->Controls->Add(this->Additional_weather_information);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->NGO_type);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->NGO_number);
			this->tabPage3->Controls->Add(this->NGO_measurements);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->Sunshine_duration);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->Snow_height);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->Snow_condition);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->Night_soil_temperature);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->Soil_surface_condition);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->Min_day_temperature);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->Max_day_temperature);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1060, 622);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Раздел 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Additional2_characteristic_1
			// 
			this->Additional2_characteristic_1->FormattingEnabled = true;
			this->Additional2_characteristic_1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Отсутствует", L"Местоположение максимальной концентрации облаков. угловая высота над линией гориз"
					L"онта (Eh) и направление, в котором наблюдается (Da)",
					L"Скорость перемещения облаков (vp) и направление (Dp), откуда перемещаются облака"
			});
			this->Additional2_characteristic_1->Location = System::Drawing::Point(564, 354);
			this->Additional2_characteristic_1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional2_characteristic_1->Name = L"Additional2_characteristic_1";
			this->Additional2_characteristic_1->Size = System::Drawing::Size(472, 28);
			this->Additional2_characteristic_1->TabIndex = 88;
			this->Additional2_characteristic_1->Text = L"Отсутствует";
			this->Additional2_characteristic_1->Visible = false;
			this->Additional2_characteristic_1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Additional2_characteristic_1_SelectedIndexChanged);
			// 
			// Additional2_characteristic_4
			// 
			this->Additional2_characteristic_4->Location = System::Drawing::Point(882, 397);
			this->Additional2_characteristic_4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional2_characteristic_4->Name = L"Additional2_characteristic_4";
			this->Additional2_characteristic_4->Size = System::Drawing::Size(154, 26);
			this->Additional2_characteristic_4->TabIndex = 87;
			this->Additional2_characteristic_4->Text = L"1";
			this->Additional2_characteristic_4->Visible = false;
			// 
			// Additional2_characteristic_3
			// 
			this->Additional2_characteristic_3->FormattingEnabled = true;
			this->Additional2_characteristic_3->Location = System::Drawing::Point(723, 395);
			this->Additional2_characteristic_3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional2_characteristic_3->Name = L"Additional2_characteristic_3";
			this->Additional2_characteristic_3->Size = System::Drawing::Size(148, 28);
			this->Additional2_characteristic_3->TabIndex = 86;
			this->Additional2_characteristic_3->Text = L"Отсутствует";
			this->Additional2_characteristic_3->Visible = false;
			// 
			// Additional2_characteristic_2
			// 
			this->Additional2_characteristic_2->FormattingEnabled = true;
			this->Additional2_characteristic_2->Location = System::Drawing::Point(564, 395);
			this->Additional2_characteristic_2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional2_characteristic_2->Name = L"Additional2_characteristic_2";
			this->Additional2_characteristic_2->Size = System::Drawing::Size(148, 28);
			this->Additional2_characteristic_2->TabIndex = 85;
			this->Additional2_characteristic_2->Text = L"Отсутствует";
			this->Additional2_characteristic_2->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(560, 309);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(421, 40);
			this->label29->TabIndex = 84;
			this->label29->Text = L"Дополнительные характеристики облачности,\r\nо которой сообщено в группах 950Nmn3 и"
				L"ли 951 Nv n4:";
			this->label29->Visible = false;
			// 
			// Additional_characteristic_3
			// 
			this->Additional_characteristic_3->Location = System::Drawing::Point(564, 274);
			this->Additional_characteristic_3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional_characteristic_3->Name = L"Additional_characteristic_3";
			this->Additional_characteristic_3->Size = System::Drawing::Size(148, 26);
			this->Additional_characteristic_3->TabIndex = 83;
			this->Additional_characteristic_3->Text = L"1";
			this->Additional_characteristic_3->Visible = false;
			// 
			// Additional_characteristic_2
			// 
			this->Additional_characteristic_2->FormattingEnabled = true;
			this->Additional_characteristic_2->Location = System::Drawing::Point(564, 232);
			this->Additional_characteristic_2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional_characteristic_2->Name = L"Additional_characteristic_2";
			this->Additional_characteristic_2->Size = System::Drawing::Size(472, 28);
			this->Additional_characteristic_2->TabIndex = 82;
			this->Additional_characteristic_2->Text = L"Отсутствует";
			this->Additional_characteristic_2->Visible = false;
			// 
			// Additional_characteristic_1
			// 
			this->Additional_characteristic_1->FormattingEnabled = true;
			this->Additional_characteristic_1->Location = System::Drawing::Point(564, 191);
			this->Additional_characteristic_1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional_characteristic_1->Name = L"Additional_characteristic_1";
			this->Additional_characteristic_1->Size = System::Drawing::Size(472, 28);
			this->Additional_characteristic_1->TabIndex = 81;
			this->Additional_characteristic_1->Text = L"Отсутствует";
			this->Additional_characteristic_1->Visible = false;
			// 
			// Additional_weather_information
			// 
			this->Additional_weather_information->FormattingEnabled = true;
			this->Additional_weather_information->Items->AddRange(gcnew cli::array< System::Object^  >(17) {
				L"Отсутствует", L"Смерч разрушающей силы",
					L"Смерч вихрь характеристика (Mw) и направление (Da)", L"Шквал характеристика (sq) и направление (Dp)", L"Общая метель её эволюция (S8) слабая или умеренная",
					L"Общая метель её эволюция (S8) сильная", L"Град, его максимальный диаметр (RR)", L"Гололёдно-изморозевые отложения их диаметр (RR) Гололёд",
					L"Гололёдно-изморозевые отложения их диаметр (RR) Изморозь", L"Гололёдно-изморозевые отложения их диаметр (RR) Сложные отложения",
					L"Гололёдно-изморозевые отложения их диаметр (RR) Отложения мокрого снега", L"Температура воды (TwTw) на поверхности моря в купальный сезон",
					L"Высота свежевыпавшего снега (ss) за истекшие сутки", L"Снежная мгла в срок наблюдения", L"Снежная мгла между сроками наблюдения",
					L"Облачность над горами и перевалами состояние (Nm) эволюция (n3)", L"Облачность, туман, дымка внизу состояние (Nv) и эволюция этих явлений (n4)"
			});
			this->Additional_weather_information->Location = System::Drawing::Point(564, 149);
			this->Additional_weather_information->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Additional_weather_information->Name = L"Additional_weather_information";
			this->Additional_weather_information->Size = System::Drawing::Size(472, 28);
			this->Additional_weather_information->TabIndex = 80;
			this->Additional_weather_information->Text = L"Отсутствует";
			this->Additional_weather_information->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Additional_weather_information_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(560, 103);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(377, 40);
			this->label28->TabIndex = 79;
			this->label28->Text = L"Дополнительная информация о погоде в срок и\r\nмежду сроками наблюдения:";
			// 
			// NGO_type
			// 
			this->NGO_type->FormattingEnabled = true;
			this->NGO_type->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Перистые", L"Перисто-кучевые", L"Перисто-слоистые",
					L"Высококучевые", L"Высокослоистые", L"Слоисто-дождевые", L"Слоисто-кучевые", L"Слоистые", L"Кучевые", L"Кучево-дождевые", L"Не определено"
			});
			this->NGO_type->Location = System::Drawing::Point(564, 66);
			this->NGO_type->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->NGO_type->Name = L"NGO_type";
			this->NGO_type->Size = System::Drawing::Size(472, 28);
			this->NGO_type->TabIndex = 78;
			this->NGO_type->Text = L"Перистые";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(560, 0);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(252, 20);
			this->label27->TabIndex = 77;
			this->label27->Text = L"Количество и тип облаков НГО:";
			// 
			// NGO_number
			// 
			this->NGO_number->FormattingEnabled = true;
			this->NGO_number->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0 (облаков нет)", L"1 или менее(но не 0)", L"2–3",
					L"4", L"5", L"6", L"7–8", L"9 или более(но не 10 есть просветы)", L"10 (без просветов)", L"Определить невозможно из - за тумана метели или других метеорологических явлений "
					L"затрудняющих видимость",
					L"Определить невозможно по другим причинам кроме указанных(кроме указаных ранее) ил"
					L"и наблюдения не производились"
			});
			this->NGO_number->Location = System::Drawing::Point(564, 25);
			this->NGO_number->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->NGO_number->Name = L"NGO_number";
			this->NGO_number->Size = System::Drawing::Size(472, 28);
			this->NGO_number->TabIndex = 76;
			this->NGO_number->Text = L"0 (облаков нет)";
			// 
			// NGO_measurements
			// 
			this->NGO_measurements->FormattingEnabled = true;
			this->NGO_measurements->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->NGO_measurements->Location = System::Drawing::Point(8, 472);
			this->NGO_measurements->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->NGO_measurements->Name = L"NGO_measurements";
			this->NGO_measurements->Size = System::Drawing::Size(61, 28);
			this->NGO_measurements->TabIndex = 71;
			this->NGO_measurements->Text = L"Да";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(4, 448);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(394, 20);
			this->label26->TabIndex = 14;
			this->label26->Text = L"Была ли высота НГО измерена инструментально\?";
			// 
			// Sunshine_duration
			// 
			this->Sunshine_duration->Location = System::Drawing::Point(4, 412);
			this->Sunshine_duration->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Sunshine_duration->Name = L"Sunshine_duration";
			this->Sunshine_duration->Size = System::Drawing::Size(148, 26);
			this->Sunshine_duration->TabIndex = 13;
			this->Sunshine_duration->Text = L"00,1";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(0, 388);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(448, 20);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Продолжительность солнечного сияния за сутки в часах:";
			// 
			// Snow_height
			// 
			this->Snow_height->Location = System::Drawing::Point(4, 352);
			this->Snow_height->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Snow_height->Name = L"Snow_height";
			this->Snow_height->Size = System::Drawing::Size(148, 26);
			this->Snow_height->TabIndex = 11;
			this->Snow_height->Text = L"001";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 308);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(383, 40);
			this->label24->TabIndex = 10;
			this->label24->Text = L"Высота снежного покрова(менее 0,5 - !5;НП - ->1; \r\nизмерения невозможны - /):";
			// 
			// Snow_condition
			// 
			this->Snow_condition->FormattingEnabled = true;
			this->Snow_condition->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Лед более 1 балла", L"Мокрый или слежавшийся снег (со льдом или без него) менее 5 баллов",
					L"Мокрый или слежавшийся снег (со льдом или без него) 5–9 баллов", L"Мокрый или слежавшийся снег (со льдом или без него) 10 баллов равномерный слой",
					L"Мокрый или слежавшийся снег (со льдом или без него) 10 баллов неравномерный слой", L"Сухой рассыпчатый снег (со льдом или без него) менее 5 баллов",
					L"Сухой рассыпчатый снег (со льдом или без него) 5–9 баллов", L"Сухой рассыпчатый снег (со льдом или без него) 10 баллов равномерный слой",
					L"Сухой рассыпчатый снег (со льдом или без него) 10 баллов неравномерный слой", L"Снег с глубокими сугробами заносами", L"Не определено"
			});
			this->Snow_condition->Location = System::Drawing::Point(8, 271);
			this->Snow_condition->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Snow_condition->Name = L"Snow_condition";
			this->Snow_condition->Size = System::Drawing::Size(508, 28);
			this->Snow_condition->TabIndex = 9;
			this->Snow_condition->Text = L"Лед более 1 балла";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(4, 246);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(461, 20);
			this->label23->TabIndex = 8;
			this->label23->Text = L"Cостояние подстилающей поверхности при наличии снега:";
			// 
			// Night_soil_temperature
			// 
			this->Night_soil_temperature->Location = System::Drawing::Point(9, 211);
			this->Night_soil_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Night_soil_temperature->Name = L"Night_soil_temperature";
			this->Night_soil_temperature->Size = System::Drawing::Size(148, 26);
			this->Night_soil_temperature->TabIndex = 7;
			this->Night_soil_temperature->Text = L"+01";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(4, 186);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(434, 20);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Минимальная температура поверхности почвы за ночь:";
			// 
			// Soil_surface_condition
			// 
			this->Soil_surface_condition->FormattingEnabled = true;
			this->Soil_surface_condition->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"Сухая (без трещин, заметного количества пыли или сыпучего песка)",
					L"Влажная (без луж)", L"Сырая (есть малые или большие лужи, вода застаивается на поверхности)", L"Затоплена водой", L"Замерзшая",
					L"Покрыта льдом (но без снега или тающего снега) при этом льдом покрыто не более 1 "
					L"балла видимой окрестности станции",
					L"Покрыта сухой пылью или сыпучим песком частично", L"Покрыта сухой пылью или сыпучим песком полностью (тонкий слой)", L"Покрыта сухой пылью или сыпучим песком умеренный или толстый слой",
					L"Сухая чрезвычайно (с трещинами)", L"Не определено "
			});
			this->Soil_surface_condition->Location = System::Drawing::Point(9, 149);
			this->Soil_surface_condition->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Soil_surface_condition->Name = L"Soil_surface_condition";
			this->Soil_surface_condition->Size = System::Drawing::Size(506, 28);
			this->Soil_surface_condition->TabIndex = 5;
			this->Soil_surface_condition->Text = L"Сухая (без трещин, заметного количества пыли или сыпучего песка)";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(4, 123);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(508, 20);
			this->label21->TabIndex = 4;
			this->label21->Text = L"Cостояние поверхности почвы при отсутствии снежного покрова:";
			// 
			// Min_day_temperature
			// 
			this->Min_day_temperature->Location = System::Drawing::Point(8, 88);
			this->Min_day_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Min_day_temperature->Name = L"Min_day_temperature";
			this->Min_day_temperature->Size = System::Drawing::Size(148, 26);
			this->Min_day_temperature->TabIndex = 3;
			this->Min_day_temperature->Text = L"+00,1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(3, 62);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(349, 20);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Минимальная температура воздуха за день:";
			// 
			// Max_day_temperature
			// 
			this->Max_day_temperature->Location = System::Drawing::Point(9, 26);
			this->Max_day_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Max_day_temperature->Name = L"Max_day_temperature";
			this->Max_day_temperature->Size = System::Drawing::Size(148, 26);
			this->Max_day_temperature->TabIndex = 1;
			this->Max_day_temperature->Text = L"+00,1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 0);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(356, 20);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Максимальная температура воздуха за день:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->Day_rainfall);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Controls->Add(this->Wind_speed_maximum);
			this->tabPage4->Controls->Add(this->label33);
			this->tabPage4->Controls->Add(this->Min_night_air_temperature);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->Air_temperature_average);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->Soil_temperature);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1060, 622);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Раздел 5";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// Day_rainfall
			// 
			this->Day_rainfall->Location = System::Drawing::Point(9, 277);
			this->Day_rainfall->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Day_rainfall->Name = L"Day_rainfall";
			this->Day_rainfall->Size = System::Drawing::Size(70, 26);
			this->Day_rainfall->TabIndex = 70;
			this->Day_rainfall->Text = L"00,1";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(5, 252);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(321, 20);
			this->label34->TabIndex = 16;
			this->label34->Text = L"Количество осадков, выпавших за сутки:";
			// 
			// Wind_speed_maximum
			// 
			this->Wind_speed_maximum->Location = System::Drawing::Point(9, 221);
			this->Wind_speed_maximum->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Wind_speed_maximum->Name = L"Wind_speed_maximum";
			this->Wind_speed_maximum->Size = System::Drawing::Size(148, 26);
			this->Wind_speed_maximum->TabIndex = 15;
			this->Wind_speed_maximum->Text = L"1";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(5, 196);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(542, 20);
			this->label33->TabIndex = 14;
			this->label33->Text = L"Максимальная скорость ветра при порывах за прошедшие полусутки:";
			// 
			// Min_night_air_temperature
			// 
			this->Min_night_air_temperature->Location = System::Drawing::Point(4, 165);
			this->Min_night_air_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Min_night_air_temperature->Name = L"Min_night_air_temperature";
			this->Min_night_air_temperature->Size = System::Drawing::Size(148, 26);
			this->Min_night_air_temperature->TabIndex = 13;
			this->Min_night_air_temperature->Text = L"+01";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(4, 120);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(339, 40);
			this->label32->TabIndex = 12;
			this->label32->Text = L"Mинимальная температура воздуха за\r\nночь на высоте 2 см от поверхности почвы:";
			// 
			// Air_temperature_average
			// 
			this->Air_temperature_average->Location = System::Drawing::Point(9, 85);
			this->Air_temperature_average->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Air_temperature_average->Name = L"Air_temperature_average";
			this->Air_temperature_average->Size = System::Drawing::Size(148, 26);
			this->Air_temperature_average->TabIndex = 11;
			this->Air_temperature_average->Text = L"+01";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 60);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(408, 20);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Cредняя температура воздуха за прошедшие сутки:";
			// 
			// Soil_temperature
			// 
			this->Soil_temperature->Location = System::Drawing::Point(9, 25);
			this->Soil_temperature->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Soil_temperature->Name = L"Soil_temperature";
			this->Soil_temperature->Size = System::Drawing::Size(148, 26);
			this->Soil_temperature->TabIndex = 9;
			this->Soil_temperature->Text = L"+01";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(4, 0);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(484, 20);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Температура подстилающей поверхности в срок наблюдения:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1392, 743);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void calculation()
		{
			//Раздел 0
			//MiMiMjMj
			String^ Summary;
			String^ Code_letter_pointer = "AAXX";
			Summary += MiMiMjMj(Code_letter_pointer);

			//YYGGiw
			String^ Data = Data_calculation->Text;
			String^ Time = Time_calculation->Text;
			String^ Type_speed_wind = Type_speed->Text;
			String^ Type_speed_wind_dimension = Type_speed_dimension->Text;
			Summary += YYGGiw(Data, Time, Type_speed_wind, Type_speed_wind_dimension);

			//IIiii
			int Number_of_district = Convert::ToInt32(Number_district->Text);
			int Number_of_station = Convert::ToInt32(Number_station->Text);
			Summary += IIiii(Number_of_district, Number_of_station);


			//Раздел 1
			//iRixhVV
			String^ Availability_6RRRtr = Group_6RRRtr->Text;
			String^ Availability_7wwW1W2 = Group_7wwW1W2->Text;
			String^ Type_of_station = Type_station->Text;
			String^ Ok_Cloud_height = Cloud_height->Text;
			String^ OkS_Visibility_range_cloud = Visibility_range->Text;
			Summary += iRixhVV(Availability_6RRRtr, Availability_7wwW1W2, Type_of_station, Ok_Cloud_height, OkS_Visibility_range_cloud);

			//Nddff
			String^ Number_of_clouds = Number_clouds->Text;
			String^ Ok_Direction_of_wind = Direction_wind->Text;
			String^ Ok_Speed_of_wind = Speed_wind->Text;
			Summary+= Nddff(Number_of_clouds, Ok_Direction_of_wind, Ok_Speed_of_wind);

			//1snTTT
			String^ Ok_Temperature_of_air = Air_temperature->Text;
			Summary += Struct_1snTTT(Ok_Temperature_of_air);

			//2snTdTdTd
			String^ Ok_Point_of_dew = Dew_point->Text;
			Summary += Struct_2snTdTdTd(Ok_Point_of_dew);
			
			// 3PoPoPoPo
			String^ Ok_Air_pressure_on_station = Air_pressure_station->Text;
			Summary += Struct_3PoPoPoPo(Ok_Air_pressure_on_station);

			//4PPPP
			String^ Ok_Air_pressure_on_sea_level = Air_pressure_sea_level->Text;
			Summary += Struct_4PPPP(Ok_Air_pressure_on_sea_level);

			//4a3hhh пока нет, тк я не понял, что имеется ввиду или, или
			
			//5appp 
			String^ Ok_Characteristic_of_baric_tendency = Baric_tendency_characteristic->Text;
			String^ Ok_Value_of_pressere_trend = Pressure_trend_value->Text;
			Summary += Struct_5appp(Ok_Characteristic_of_baric_tendency, Ok_Value_of_pressere_trend);

			//6RRRtR
			if (Ok_6RRRtr == 0 || Ok_6RRRtr == 1)
			{
				String^ Ok_Number_of_precipitation = Rainfall->Text;
				String^ Duration_of_precipitation = Precipitation_duration->Text;
				Summary += Struct_6RRRtR( Ok_Number_of_precipitation, Duration_of_precipitation);
			}

			//7wwW1W2
			String^ Ok_Current_of_weather = Current_weather->Text;
			String^ Ok_Past_of_weather = Past_weather->Text;
			Summary += Struct_7wwW1W2(Ok_Current_of_weather, Ok_Past_of_weather);

			//8NhCLCMCH
			String^ Exact_amount_of_clouds = Clouds_exact_amount->Text;
			String^ Basement_of_clouds = Clouds_basement->Text;
			String^ Middle_layer_of_clouds = Clouds_middle_layer->Text;
			String^ Top_of_cloud = Cloud_top->Text;
			Summary += Struct_8NhCLCMCH(Exact_amount_of_clouds, Basement_of_clouds, Middle_layer_of_clouds, Top_of_cloud);


			//Раздел 3
									//Отличительная группа раздела 3
			Summary += Struct_333();

			//1snTxTxTx
			String^ Ok_Max_temperature_of_day = Max_day_temperature->Text;
			Summary += Struct_1snTxTxTx(Ok_Max_temperature_of_day);

			//2snTnTnTn
			String^ Ok_Min_temperature_of_day = Min_day_temperature->Text;
			Summary += Struct_2snTnTnTn(Ok_Min_temperature_of_day);

			//3EsnTgTg
			String^ Condition_of_soil_surfase = Soil_surface_condition->Text;
			String^ Ok_Temperature_of_night_soil = Night_soil_temperature->Text;
			Summary += Struct_3EsnTgTg(Condition_of_soil_surfase, Ok_Temperature_of_night_soil);

			//4E'sss
			String^ Condition_of_snow = Snow_condition->Text;
			String^ Ok_Height_of_snow = Snow_height->Text;
			Summary += Struct_4Esss(Condition_of_snow, Ok_Height_of_snow);

			//55SSS
			String^ Ok_Duration_of_sunshine = Sunshine_duration->Text;
			Summary += Struct_55SSS(Ok_Duration_of_sunshine);

			//6RRRtR
									//аналогична группе 6RRRtR в разделе 1
			if (Ok_6RRRtr == 0 || Ok_6RRRtr == 2)
			{
				String^ Ok_Number_of_precipitation = Rainfall->Text;
				String^ Duration_of_precipitation = Precipitation_duration->Text;
				Summary += Struct_6RRRtR(Ok_Number_of_precipitation, Duration_of_precipitation);
			}

			//8NsChshs
			String^ Measurements_of_NGO = NGO_measurements->Text;
			String^ Number_of_NGO = NGO_number->Text;
			String^ Type_of_NGO = NGO_type->Text;
			Summary += Struct_8NsChshs(Measurements_of_NGO, Number_of_NGO, Type_of_NGO, Ok_Number_of_clouds, Height_of_cloud);

			//проверить всякий случай сводку 9 на случай включения(точно ли всегда когда нужна - включается?)
			
			//9SРSPspsp
			String^ Str_Additional_information_of_weather = Additional_weather_information->Text;
			String^ Str_Additional_characteristic_1 = Additional_characteristic_1->Text;
			String^ Str_Additional_characteristic_2 = Additional_characteristic_2->Text;
			String^ Str_Additional_characteristic_3 = Additional_characteristic_3->Text;
			Summary += Struct_9SРSPspsp( Str_Additional_information_of_weather, Str_Additional_characteristic_1, Str_Additional_characteristic_2, Str_Additional_characteristic_3);
			
			String^ Str_Additional_information_of_weather_2 = Additional2_characteristic_1->Text;
			String^ Ok_Additional2_characteristic_2 = Additional2_characteristic_2->Text;
			String^ Ok_Additional2_characteristic_3 = Additional2_characteristic_3->Text;
			String^ Ok_Additional2_characteristic_4 = Additional2_characteristic_4->Text;
			Summary += Struct_9SРSPspsp_2(Str_Additional_information_of_weather_2, Ok_Additional2_characteristic_2, Ok_Additional2_characteristic_3, Ok_Additional2_characteristic_4);
			
			Summary += Struct_9SРSPspsp_3(Speed_of_wind);
			
			//В период между сроками наблюдения(не получилось пока, тк нет выбора в срок или между сроками)
			//Максимальная скорость ветра при порывах(ff) Nddff

			Summary += Struct_9SРSPspsp_4(Current_of_weather);


			//Раздел 5
			Summary += Struct_555();

			//1EsnT'gT'g
			String^ Ok_Temperature_of_soil = Soil_temperature->Text;
			Summary += Struct_1EsnTgTg(Ok_Temperature_of_soil, Ok_Condition_of_soil_surfase);

			//5snT24T24T24
			String^ Ok_Average_of_air_temperature = Air_temperature_average->Text;
			Summary += Struct_5snT24T24T24(Ok_Average_of_air_temperature);

			
			//52snT2T2
			String^ Ok_Min_air_temperature_for_night = Min_night_air_temperature->Text;
			Summary += Struct_52snT2T2(Ok_Min_air_temperature_for_night);


			//530f12f12
			String^ Ok_Maximum_of_wind_speed = Wind_speed_maximum->Text;
			Summary += Struct_530f12f12(Ok_Maximum_of_wind_speed);


			//7R24R24R24/
			String^ Ok_Rainfall_per_day = Day_rainfall->Text;
			Summary += Struct_7R24R24R24(Ok_Rainfall_per_day);


			//88R24R24R24
			Summary += Struct_88R24R24R24();



			Summary_text->Text = (Summary);
		}
private: System::Void Calculation_summary_Click_1(System::Object^ sender, System::EventArgs^ e) {
	calculation();
}
private: System::Void Additional_weather_information_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

	Additional_characteristic_1->Visible = false;
	Additional_characteristic_2->Visible = false;
	Additional_characteristic_3->Visible = false;

	label29->Visible = false;
	Additional2_characteristic_1->Visible = false;

	if (Additional_weather_information->SelectedIndex == 2)
	{
		Additional_characteristic_1->Items->Clear();
		Additional_characteristic_1->ResetText();
		Additional_characteristic_1->Items->Add("Водяной(ые) смерч(и) в радиусе 3 км от станции");
		Additional_characteristic_1->Items->Add("Водяной(ые) смерч(и) на расстоянии более 3 км от станции");
		Additional_characteristic_1->Items->Add("Смерч (и) на суше в радиусе 3 км от станции");
		Additional_characteristic_1->Items->Add("Смерч (и) на суше на расстоянии более 3 км от станции");
		Additional_characteristic_1->Items->Add("Вихрь(и) слабой интенсивности");
		Additional_characteristic_1->Items->Add("Вихрь(и) умеренной интенсивности");
		Additional_characteristic_1->Items->Add("Вихрь(и) сильной интенсивности");
		Additional_characteristic_1->Items->Add("Пыльный(е) вихрь(и) слабой интенсивности");
		Additional_characteristic_1->Items->Add("Пыльный(е) вихрь(и) умеренной интенсивности");
		Additional_characteristic_1->Items->Add("Пыльный(е) вихрь(и) сильной интенсивности");
		Additional_characteristic_1->SelectedIndex = 0;
		Additional_characteristic_1->Visible = true;

		Additional_characteristic_2->Items->Clear();
		Additional_characteristic_2->ResetText();
		Additional_characteristic_2->Items->Add("На станции");
		Additional_characteristic_2->Items->Add("СВ");
		Additional_characteristic_2->Items->Add("В");
		Additional_characteristic_2->Items->Add("ЮВ");
		Additional_characteristic_2->Items->Add("Ю");
		Additional_characteristic_2->Items->Add("ЮЗ");
		Additional_characteristic_2->Items->Add("З");
		Additional_characteristic_2->Items->Add("СЗ");
		Additional_characteristic_2->Items->Add("С");
		Additional_characteristic_2->Items->Add("Все направления");
		Additional_characteristic_2->SelectedIndex = 0;
		Additional_characteristic_2->Visible = true;

	}
	else if (Additional_weather_information->SelectedIndex == 3)
	{
		Additional_characteristic_1->Items->Clear();
		Additional_characteristic_1->ResetText();
		Additional_characteristic_1->Items->Add("Штиль или слабый ветер, за которыми последовал шквал");
		Additional_characteristic_1->Items->Add("Штиль или слабый ветер, за которыми последовала серия шквалов");
		Additional_characteristic_1->Items->Add("Порывистый ветер, за которым последовал шквал");
		Additional_characteristic_1->Items->Add("Порывистый ветер, за которым последовала серия шквалов");
		Additional_characteristic_1->Items->Add("Шквал, за которым последовал порывистый ветер");
		Additional_characteristic_1->Items->Add("Порывистый ветер, временами шквалы");
		Additional_characteristic_1->Items->Add("Шквал в поле зрения, приближающийся к станции");
		Additional_characteristic_1->Items->Add("Линия шквалов");
		Additional_characteristic_1->Items->Add("Шквал с песчаным позёмком или с пыльной/песчаной бурей ");
		Additional_characteristic_1->Items->Add("Линия шквалов с песчаным позёмком или с пыльной/песчаной бурей ");
		Additional_characteristic_1->SelectedIndex = 0;
		Additional_characteristic_1->Visible = true;

		Additional_characteristic_2->Items->Clear();
		Additional_characteristic_2->ResetText();
		Additional_characteristic_2->Items->Add("На станции");
		Additional_characteristic_2->Items->Add("СВ");
		Additional_characteristic_2->Items->Add("В");
		Additional_characteristic_2->Items->Add("ЮВ");
		Additional_characteristic_2->Items->Add("Ю");
		Additional_characteristic_2->Items->Add("ЮЗ");
		Additional_characteristic_2->Items->Add("З");
		Additional_characteristic_2->Items->Add("СЗ");
		Additional_characteristic_2->Items->Add("С");
		Additional_characteristic_2->Items->Add("Все направления");
		Additional_characteristic_2->SelectedIndex = 0;
		Additional_characteristic_2->Visible = true;

	}
	else if (Additional_weather_information->SelectedIndex == 4||
		Additional_weather_information->SelectedIndex == 5)
	{
		Additional_characteristic_1->Items->Clear();
		Additional_characteristic_1->ResetText();
		Additional_characteristic_1->Items->Add("Окончилась до срока наблюдения");
		Additional_characteristic_1->Items->Add("Ослабевала");
		Additional_characteristic_1->Items->Add("Без изменений");
		Additional_characteristic_1->Items->Add("Усиливалась");
		Additional_characteristic_1->Items->Add("Возобновилась после перерыва продолжительностью <=30 мин");
		Additional_characteristic_1->Items->Add("Высота распространения метели уменьшалась");
		Additional_characteristic_1->Items->Add("Высота распространения метели увеличивалась");
		Additional_characteristic_1->Items->Add("Возобновилась после перерыва продолжительностью >30 мин");
		Additional_characteristic_1->SelectedIndex = 0;
		Additional_characteristic_1->Visible = true;

	}
	else if (Additional_weather_information->SelectedIndex == 6||
		Additional_weather_information->SelectedIndex == 7 ||
		Additional_weather_information->SelectedIndex == 8 ||
		Additional_weather_information->SelectedIndex == 9 ||
		Additional_weather_information->SelectedIndex == 10||
		Additional_weather_information->SelectedIndex == 11||
		Additional_weather_information->SelectedIndex == 12)
	{
		Additional_characteristic_3->Text = "1";
		Additional_characteristic_3->Visible = true;

	}
	else if (Additional_weather_information->SelectedIndex == 15)
	{
		Additional_characteristic_1->Items->Clear();
		Additional_characteristic_1->ResetText();
		Additional_characteristic_1->Items->Add("Все горы открыты (или имеется небольшое количество облаков) ");
		Additional_characteristic_1->Items->Add("Горы частично закрыты разрозненными облаками (видно не более половины вершин гор) ");
		Additional_characteristic_1->Items->Add("Все склоны гор закрыты облаками, вершины гор и перевалы открыты");
		Additional_characteristic_1->Items->Add("Горы открыты со стороны наблюдателя (или имеется небольшое количество облаков), но за горами – сплошная стена облаков");
		Additional_characteristic_1->Items->Add("Над горами низко нависла облачность и вершины гор и склоны открыты (или имеется небольшое количество облаков) ");
		Additional_characteristic_1->Items->Add("Над горами низко нависла облачность и вершины гор частично закрыты облаками или полосами падения осадков");
		Additional_characteristic_1->Items->Add("Все вершины гор закрыты облаками, перевалы открыты, склоны открыты или закрыты");
		Additional_characteristic_1->Items->Add("Горы в основном закрыты облаками (видны лишь отдельные вершины гор, а склоны закрыты полностью или частично)");
		Additional_characteristic_1->Items->Add("Все вершины гор, перевалы и склоны закрыты облаками");
		Additional_characteristic_1->Items->Add("Горы не видны из-за темноты, тумана, метели, осадков и т.д. ");
		Additional_characteristic_1->SelectedIndex = 0;
		Additional_characteristic_1->Visible = true;

		Additional_characteristic_2->Items->Clear();
		Additional_characteristic_2->ResetText();
		Additional_characteristic_2->Items->Add("Без изменений");
		Additional_characteristic_2->Items->Add("Развитие облачности кучевых форм");
		Additional_characteristic_2->Items->Add("Подъём облачности медленный");
		Additional_characteristic_2->Items->Add("Подъём облачности быстрый");
		Additional_characteristic_2->Items->Add("Подъём облачности облачность поднялась и стала слоистой");
		Additional_characteristic_2->Items->Add("Снижение облачности медленное");
		Additional_characteristic_2->Items->Add("Снижение облачности быстрое");
		Additional_characteristic_2->Items->Add("Развитие слоистости облачности");
		Additional_characteristic_2->Items->Add("Развитие слоистости и снижение облачности");
		Additional_characteristic_2->Items->Add("Быстрые изменения");
		Additional_characteristic_2->SelectedIndex = 0;
		Additional_characteristic_2->Visible = true;
	}
	else if (Additional_weather_information->SelectedIndex == 16)
	{
	Additional_characteristic_1->Items->Clear();
	Additional_characteristic_1->ResetText();
	Additional_characteristic_1->Items->Add("Нет ни облаков, ни дымки");
	Additional_characteristic_1->Items->Add("Дымка, над нею ясно");
	Additional_characteristic_1->Items->Add("Клочки тумана");
	Additional_characteristic_1->Items->Add("Слой тумана слабого");
	Additional_characteristic_1->Items->Add("Слой тумана сильного");
	Additional_characteristic_1->Items->Add("Разрозненные (изолированные) облака небольшое количество");
	Additional_characteristic_1->Items->Add("Разрозненные (изолированные) облака ниже облаков − туман");
	Additional_characteristic_1->Items->Add("Разрозненные (изолированные) облака большое количество");
	Additional_characteristic_1->Items->Add("Сплошная облачность");
	Additional_characteristic_1->Items->Add("Наблюдения невозможны из-за плохой видимости");
	Additional_characteristic_1->SelectedIndex = 0;
	Additional_characteristic_1->Visible = true;

	Additional_characteristic_2->Items->Clear();
	Additional_characteristic_2->ResetText();
	Additional_characteristic_2->Items->Add("Изменений нет");
	Additional_characteristic_2->Items->Add("Уменьшение и повышение");
	Additional_characteristic_2->Items->Add("Уменьшение");
	Additional_characteristic_2->Items->Add("Повышение");
	Additional_characteristic_2->Items->Add("Уменьшение и снижение");
	Additional_characteristic_2->Items->Add("Увеличение и повышение");
	Additional_characteristic_2->Items->Add("Снижение");
	Additional_characteristic_2->Items->Add("Увеличение");
	Additional_characteristic_2->Items->Add("Увеличение и снижение");
	Additional_characteristic_2->Items->Add("На станции туман или туман временами");
	Additional_characteristic_2->SelectedIndex = 0;
	Additional_characteristic_2->Visible = true;
 }
 if (Additional_weather_information->SelectedIndex == 15 ||
	 Additional_weather_information->SelectedIndex == 16)
 {
	 Additional2_characteristic_1;

	 label29->Visible = true;
	 Additional2_characteristic_1->Visible = true;
 }
 }
private: System::Void Additional2_characteristic_1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	Additional2_characteristic_2->Visible = false;
	Additional2_characteristic_3->Visible = false;
	Additional2_characteristic_4->Visible = false;

	if (Additional2_characteristic_1->SelectedIndex == 1)
	{
		Additional2_characteristic_2->Items->Clear();
		Additional2_characteristic_2->ResetText();
		Additional2_characteristic_2->Items->Add("Очень низко");
		Additional2_characteristic_2->Items->Add("Менее 30 град");
		Additional2_characteristic_2->Items->Add("Более 30 град");
		Additional2_characteristic_2->SelectedIndex = 0;
		Additional2_characteristic_2->Visible = true;

		Additional2_characteristic_3->Items->Clear();
		Additional2_characteristic_3->ResetText();
		Additional2_characteristic_3->Items->Add("На станции");
		Additional2_characteristic_3->Items->Add("СВ");
		Additional2_characteristic_3->Items->Add("В");
		Additional2_characteristic_3->Items->Add("ЮВ");
		Additional2_characteristic_3->Items->Add("Ю");
		Additional2_characteristic_3->Items->Add("ЮЗ");
		Additional2_characteristic_3->Items->Add("З");
		Additional2_characteristic_3->Items->Add("СЗ");
		Additional2_characteristic_3->Items->Add("С");
		Additional2_characteristic_3->Items->Add("Все направления");
		Additional2_characteristic_3->SelectedIndex = 0;
		Additional2_characteristic_3->Visible = true;
	}
	else if (Additional2_characteristic_1->SelectedIndex == 2)
	{
		Additional2_characteristic_2->Items->Clear();
		Additional2_characteristic_2->ResetText();
		Additional2_characteristic_2->Items->Add("м/с");
		Additional2_characteristic_2->Items->Add("км/ч");
		Additional2_characteristic_2->Items->Add("узлы");
		Additional2_characteristic_2->SelectedIndex = 0;
		Additional2_characteristic_2->Visible = true;

		Additional2_characteristic_3->Items->Clear();
		Additional2_characteristic_3->ResetText();
		Additional2_characteristic_3->Items->Add("На станции");
		Additional2_characteristic_3->Items->Add("СВ");
		Additional2_characteristic_3->Items->Add("В");
		Additional2_characteristic_3->Items->Add("ЮВ");
		Additional2_characteristic_3->Items->Add("Ю");
		Additional2_characteristic_3->Items->Add("ЮЗ");
		Additional2_characteristic_3->Items->Add("З");
		Additional2_characteristic_3->Items->Add("СЗ");
		Additional2_characteristic_3->Items->Add("С");
		Additional2_characteristic_3->Items->Add("Все направления");
		Additional2_characteristic_3->SelectedIndex = 0;
		Additional2_characteristic_3->Visible = true;

		Additional2_characteristic_4->ResetText();
		Additional2_characteristic_4->Text = "1";
		Additional2_characteristic_4->Visible = true;
	}

}
};
}
