#pragma once

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
			this->Calculation_summary = (gcnew System::Windows::Forms::Button());
			this->Summary_text = (gcnew System::Windows::Forms::RichTextBox());
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
			this->Air_temperature_average = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Soil_temperature = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->Min_night_air_temperature = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
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
			this->splitContainer1->Location = System::Drawing::Point(12, 12);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->Calculation_summary);
			this->splitContainer1->Panel1->Controls->Add(this->Summary_text);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(904, 443);
			this->splitContainer1->SplitterDistance = 165;
			this->splitContainer1->TabIndex = 50;
			// 
			// Calculation_summary
			// 
			this->Calculation_summary->Location = System::Drawing::Point(30, 152);
			this->Calculation_summary->Name = L"Calculation_summary";
			this->Calculation_summary->Size = System::Drawing::Size(106, 32);
			this->Calculation_summary->TabIndex = 50;
			this->Calculation_summary->Text = L"Расчёт";
			this->Calculation_summary->UseVisualStyleBackColor = true;
			this->Calculation_summary->Click += gcnew System::EventHandler(this, &MyForm::Calculation_summary_Click_1);
			// 
			// Summary_text
			// 
			this->Summary_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Summary_text->Location = System::Drawing::Point(3, 3);
			this->Summary_text->Name = L"Summary_text";
			this->Summary_text->Size = System::Drawing::Size(159, 118);
			this->Summary_text->TabIndex = 49;
			this->Summary_text->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(718, 426);
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
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(710, 400);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Раздел 0";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Number_station
			// 
			this->Number_station->Location = System::Drawing::Point(115, 99);
			this->Number_station->Name = L"Number_station";
			this->Number_station->Size = System::Drawing::Size(100, 20);
			this->Number_station->TabIndex = 17;
			this->Number_station->Text = L"001";
			// 
			// Number_district
			// 
			this->Number_district->Location = System::Drawing::Point(9, 99);
			this->Number_district->Name = L"Number_district";
			this->Number_district->Size = System::Drawing::Size(100, 20);
			this->Number_district->TabIndex = 16;
			this->Number_district->Text = L"01";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(267, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Номер района(2 знака) и номер станции(3 занака):";
			// 
			// Type_speed_dimension
			// 
			this->Type_speed_dimension->FormattingEnabled = true;
			this->Type_speed_dimension->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Расчетная оценка", L"Инструментальное измерение" });
			this->Type_speed_dimension->Location = System::Drawing::Point(70, 59);
			this->Type_speed_dimension->Name = L"Type_speed_dimension";
			this->Type_speed_dimension->Size = System::Drawing::Size(125, 21);
			this->Type_speed_dimension->TabIndex = 14;
			this->Type_speed_dimension->Text = L"Расчетная оценка";
			// 
			// Type_speed
			// 
			this->Type_speed->FormattingEnabled = true;
			this->Type_speed->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"м/с", L"узлы" });
			this->Type_speed->Location = System::Drawing::Point(9, 59);
			this->Type_speed->Name = L"Type_speed";
			this->Type_speed->Size = System::Drawing::Size(51, 21);
			this->Type_speed->TabIndex = 13;
			this->Type_speed->Text = L"м/с";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 13);
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
			this->Time_calculation->Location = System::Drawing::Point(70, 19);
			this->Time_calculation->Name = L"Time_calculation";
			this->Time_calculation->Size = System::Drawing::Size(42, 21);
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
			this->Data_calculation->Location = System::Drawing::Point(9, 19);
			this->Data_calculation->Name = L"Data_calculation";
			this->Data_calculation->Size = System::Drawing::Size(43, 21);
			this->Data_calculation->TabIndex = 10;
			this->Data_calculation->Text = L"01";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 13);
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
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(710, 400);
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
			this->Cloud_top->Location = System::Drawing::Point(377, 339);
			this->Cloud_top->Name = L"Cloud_top";
			this->Cloud_top->Size = System::Drawing::Size(316, 21);
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
			this->Clouds_middle_layer->Location = System::Drawing::Point(377, 312);
			this->Clouds_middle_layer->Name = L"Clouds_middle_layer";
			this->Clouds_middle_layer->Size = System::Drawing::Size(316, 21);
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
			this->Clouds_basement->Location = System::Drawing::Point(377, 285);
			this->Clouds_basement->Name = L"Clouds_basement";
			this->Clouds_basement->Size = System::Drawing::Size(316, 21);
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
			this->Clouds_exact_amount->Location = System::Drawing::Point(377, 258);
			this->Clouds_exact_amount->Name = L"Clouds_exact_amount";
			this->Clouds_exact_amount->Size = System::Drawing::Size(316, 21);
			this->Clouds_exact_amount->TabIndex = 75;
			this->Clouds_exact_amount->Text = L"0 (облаков нет)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(374, 242);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(309, 13);
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
			this->Past_weather->Location = System::Drawing::Point(377, 218);
			this->Past_weather->Name = L"Past_weather";
			this->Past_weather->Size = System::Drawing::Size(223, 21);
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
			this->Current_weather->Location = System::Drawing::Point(377, 191);
			this->Current_weather->Name = L"Current_weather";
			this->Current_weather->Size = System::Drawing::Size(223, 21);
			this->Current_weather->TabIndex = 72;
			this->Current_weather->Text = L"00";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(374, 175);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(163, 13);
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
			this->Precipitation_duration->Location = System::Drawing::Point(431, 151);
			this->Precipitation_duration->Name = L"Precipitation_duration";
			this->Precipitation_duration->Size = System::Drawing::Size(42, 21);
			this->Precipitation_duration->TabIndex = 70;
			this->Precipitation_duration->Text = L"6";
			// 
			// Rainfall
			// 
			this->Rainfall->Location = System::Drawing::Point(377, 151);
			this->Rainfall->Name = L"Rainfall";
			this->Rainfall->Size = System::Drawing::Size(48, 20);
			this->Rainfall->TabIndex = 69;
			this->Rainfall->Text = L"00,1";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(374, 135);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(287, 13);
			this->label16->TabIndex = 68;
			this->label16->Text = L"Количество осадков и продолжительность измерения:";
			// 
			// Pressure_trend_value
			// 
			this->Pressure_trend_value->Location = System::Drawing::Point(377, 112);
			this->Pressure_trend_value->Name = L"Pressure_trend_value";
			this->Pressure_trend_value->Size = System::Drawing::Size(48, 20);
			this->Pressure_trend_value->TabIndex = 67;
			this->Pressure_trend_value->Text = L"00,1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(374, 96);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(314, 13);
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
			this->Baric_tendency_characteristic->Location = System::Drawing::Point(377, 72);
			this->Baric_tendency_characteristic->Name = L"Baric_tendency_characteristic";
			this->Baric_tendency_characteristic->Size = System::Drawing::Size(259, 21);
			this->Baric_tendency_characteristic->TabIndex = 65;
			this->Baric_tendency_characteristic->Text = L"Рост затем падение(рост больше падения)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(374, 56);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(298, 13);
			this->label14->TabIndex = 64;
			this->label14->Text = L"Изменение давления по барометру за последние 3 часа:";
			// 
			// Air_pressure_sea_level
			// 
			this->Air_pressure_sea_level->Location = System::Drawing::Point(483, 33);
			this->Air_pressure_sea_level->Name = L"Air_pressure_sea_level";
			this->Air_pressure_sea_level->Size = System::Drawing::Size(100, 20);
			this->Air_pressure_sea_level->TabIndex = 63;
			this->Air_pressure_sea_level->Text = L"1000,0";
			// 
			// Air_pressure_station
			// 
			this->Air_pressure_station->Location = System::Drawing::Point(377, 33);
			this->Air_pressure_station->Name = L"Air_pressure_station";
			this->Air_pressure_station->Size = System::Drawing::Size(100, 20);
			this->Air_pressure_station->TabIndex = 62;
			this->Air_pressure_station->Text = L"1000,0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(374, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(212, 13);
			this->label13->TabIndex = 61;
			this->label13->Text = L"к среднему уровню моря(1000,0-1999,9):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(374, 3);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(279, 13);
			this->label12->TabIndex = 60;
			this->label12->Text = L"Давление воздуха на уровне станции и  приведенное";
			// 
			// Dew_point
			// 
			this->Dew_point->Location = System::Drawing::Point(66, 326);
			this->Dew_point->Name = L"Dew_point";
			this->Dew_point->Size = System::Drawing::Size(48, 20);
			this->Dew_point->TabIndex = 59;
			this->Dew_point->Text = L"+1,1";
			// 
			// Air_temperature
			// 
			this->Air_temperature->Location = System::Drawing::Point(12, 326);
			this->Air_temperature->Name = L"Air_temperature";
			this->Air_temperature->Size = System::Drawing::Size(48, 20);
			this->Air_temperature->TabIndex = 58;
			this->Air_temperature->Text = L"+1,1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 310);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(190, 13);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Температура воздуха и тоска росы:";
			// 
			// Speed_wind
			// 
			this->Speed_wind->Location = System::Drawing::Point(66, 287);
			this->Speed_wind->Name = L"Speed_wind";
			this->Speed_wind->Size = System::Drawing::Size(48, 20);
			this->Speed_wind->TabIndex = 56;
			this->Speed_wind->Text = L"5";
			// 
			// Direction_wind
			// 
			this->Direction_wind->Location = System::Drawing::Point(12, 287);
			this->Direction_wind->Name = L"Direction_wind";
			this->Direction_wind->Size = System::Drawing::Size(48, 20);
			this->Direction_wind->TabIndex = 55;
			this->Direction_wind->Text = L"5";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 271);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(273, 13);
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
			this->Number_clouds->Location = System::Drawing::Point(12, 243);
			this->Number_clouds->Name = L"Number_clouds";
			this->Number_clouds->Size = System::Drawing::Size(316, 21);
			this->Number_clouds->TabIndex = 53;
			this->Number_clouds->Text = L"1 или менее(но не 0)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 13);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Общее количество облаков:";
			// 
			// Visibility_range
			// 
			this->Visibility_range->Location = System::Drawing::Point(9, 204);
			this->Visibility_range->Name = L"Visibility_range";
			this->Visibility_range->Size = System::Drawing::Size(100, 20);
			this->Visibility_range->TabIndex = 51;
			this->Visibility_range->Text = L"0,05";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(322, 13);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Метеорологическая дальность видимости в горизонтальном:";
			// 
			// Cloud_height
			// 
			this->Cloud_height->Location = System::Drawing::Point(12, 165);
			this->Cloud_height->Name = L"Cloud_height";
			this->Cloud_height->Size = System::Drawing::Size(100, 20);
			this->Cloud_height->TabIndex = 49;
			this->Cloud_height->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(317, 39);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Высота основания самых низких облаков над поверхностью\r\n(не определено или нижняя"
				L" граница облачности находится \r\nниже уровня станции - /):";
			// 
			// Type_station
			// 
			this->Type_station->FormattingEnabled = true;
			this->Type_station->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Обслуживаемая персоналом", L"Автоматическая" });
			this->Type_station->Location = System::Drawing::Point(9, 99);
			this->Type_station->Name = L"Type_station";
			this->Type_station->Size = System::Drawing::Size(223, 21);
			this->Type_station->TabIndex = 47;
			this->Type_station->Text = L"Обслуживаемая персоналом";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
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
			this->Group_7wwW1W2->Location = System::Drawing::Point(9, 59);
			this->Group_7wwW1W2->Name = L"Group_7wwW1W2";
			this->Group_7wwW1W2->Size = System::Drawing::Size(223, 21);
			this->Group_7wwW1W2->TabIndex = 45;
			this->Group_7wwW1W2->Text = L"Включена";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 13);
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
			this->Group_6RRRtr->Location = System::Drawing::Point(9, 19);
			this->Group_6RRRtr->Name = L"Group_6RRRtr";
			this->Group_6RRRtr->Size = System::Drawing::Size(223, 21);
			this->Group_6RRRtr->TabIndex = 43;
			this->Group_6RRRtr->Text = L"Включена в раздел 1 и 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 13);
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
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(710, 400);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Раздел 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// Additional2_characteristic_1
			// 
			this->Additional2_characteristic_1->FormattingEnabled = true;
			this->Additional2_characteristic_1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Отсутствует", L"Местоположение максимальной концентрации облаков − угловая высота над линией гори"
					L"зонта (Eh) и направление, в котором наблюдается (Da)",
					L"Скорость перемещения облаков (vp) и направление (Dp), откуда перемещаются облака"
			});
			this->Additional2_characteristic_1->Location = System::Drawing::Point(376, 230);
			this->Additional2_characteristic_1->Name = L"Additional2_characteristic_1";
			this->Additional2_characteristic_1->Size = System::Drawing::Size(316, 21);
			this->Additional2_characteristic_1->TabIndex = 88;
			this->Additional2_characteristic_1->Text = L"Отсутствует";
			this->Additional2_characteristic_1->Visible = false;
			this->Additional2_characteristic_1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Additional2_characteristic_1_SelectedIndexChanged);
			// 
			// Additional2_characteristic_4
			// 
			this->Additional2_characteristic_4->Location = System::Drawing::Point(588, 258);
			this->Additional2_characteristic_4->Name = L"Additional2_characteristic_4";
			this->Additional2_characteristic_4->Size = System::Drawing::Size(104, 20);
			this->Additional2_characteristic_4->TabIndex = 87;
			this->Additional2_characteristic_4->Text = L"1";
			this->Additional2_characteristic_4->Visible = false;
			// 
			// Additional2_characteristic_3
			// 
			this->Additional2_characteristic_3->FormattingEnabled = true;
			this->Additional2_characteristic_3->Location = System::Drawing::Point(482, 257);
			this->Additional2_characteristic_3->Name = L"Additional2_characteristic_3";
			this->Additional2_characteristic_3->Size = System::Drawing::Size(100, 21);
			this->Additional2_characteristic_3->TabIndex = 86;
			this->Additional2_characteristic_3->Text = L"Отсутствует";
			this->Additional2_characteristic_3->Visible = false;
			// 
			// Additional2_characteristic_2
			// 
			this->Additional2_characteristic_2->FormattingEnabled = true;
			this->Additional2_characteristic_2->Location = System::Drawing::Point(376, 257);
			this->Additional2_characteristic_2->Name = L"Additional2_characteristic_2";
			this->Additional2_characteristic_2->Size = System::Drawing::Size(100, 21);
			this->Additional2_characteristic_2->TabIndex = 85;
			this->Additional2_characteristic_2->Text = L"Отсутствует";
			this->Additional2_characteristic_2->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(373, 201);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(288, 26);
			this->label29->TabIndex = 84;
			this->label29->Text = L"Дополнительные характеристики облачности,\r\nо которой сообщено в группах 950Nmn3 и"
				L"ли 951 Nv n4:";
			this->label29->Visible = false;
			// 
			// Additional_characteristic_3
			// 
			this->Additional_characteristic_3->Location = System::Drawing::Point(376, 178);
			this->Additional_characteristic_3->Name = L"Additional_characteristic_3";
			this->Additional_characteristic_3->Size = System::Drawing::Size(100, 20);
			this->Additional_characteristic_3->TabIndex = 83;
			this->Additional_characteristic_3->Text = L"1";
			this->Additional_characteristic_3->Visible = false;
			// 
			// Additional_characteristic_2
			// 
			this->Additional_characteristic_2->FormattingEnabled = true;
			this->Additional_characteristic_2->Location = System::Drawing::Point(376, 151);
			this->Additional_characteristic_2->Name = L"Additional_characteristic_2";
			this->Additional_characteristic_2->Size = System::Drawing::Size(316, 21);
			this->Additional_characteristic_2->TabIndex = 82;
			this->Additional_characteristic_2->Text = L"Отсутствует";
			this->Additional_characteristic_2->Visible = false;
			// 
			// Additional_characteristic_1
			// 
			this->Additional_characteristic_1->FormattingEnabled = true;
			this->Additional_characteristic_1->Location = System::Drawing::Point(376, 124);
			this->Additional_characteristic_1->Name = L"Additional_characteristic_1";
			this->Additional_characteristic_1->Size = System::Drawing::Size(316, 21);
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
			this->Additional_weather_information->Location = System::Drawing::Point(376, 97);
			this->Additional_weather_information->Name = L"Additional_weather_information";
			this->Additional_weather_information->Size = System::Drawing::Size(316, 21);
			this->Additional_weather_information->TabIndex = 80;
			this->Additional_weather_information->Text = L"Отсутствует";
			this->Additional_weather_information->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Additional_weather_information_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(373, 67);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(252, 26);
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
			this->NGO_type->Location = System::Drawing::Point(376, 43);
			this->NGO_type->Name = L"NGO_type";
			this->NGO_type->Size = System::Drawing::Size(316, 21);
			this->NGO_type->TabIndex = 78;
			this->NGO_type->Text = L"Перистые";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(373, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(168, 13);
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
			this->NGO_number->Location = System::Drawing::Point(376, 16);
			this->NGO_number->Name = L"NGO_number";
			this->NGO_number->Size = System::Drawing::Size(316, 21);
			this->NGO_number->TabIndex = 76;
			this->NGO_number->Text = L"0 (облаков нет)";
			// 
			// NGO_measurements
			// 
			this->NGO_measurements->FormattingEnabled = true;
			this->NGO_measurements->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->NGO_measurements->Location = System::Drawing::Point(5, 307);
			this->NGO_measurements->Name = L"NGO_measurements";
			this->NGO_measurements->Size = System::Drawing::Size(42, 21);
			this->NGO_measurements->TabIndex = 71;
			this->NGO_measurements->Text = L"Да";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(3, 291);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(265, 13);
			this->label26->TabIndex = 14;
			this->label26->Text = L"Была ли высота НГО измерена инструментально\?";
			// 
			// Sunshine_duration
			// 
			this->Sunshine_duration->Location = System::Drawing::Point(3, 268);
			this->Sunshine_duration->Name = L"Sunshine_duration";
			this->Sunshine_duration->Size = System::Drawing::Size(100, 20);
			this->Sunshine_duration->TabIndex = 13;
			this->Sunshine_duration->Text = L"00,1";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(0, 252);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(300, 13);
			this->label25->TabIndex = 12;
			this->label25->Text = L"Продолжительность солнечного сияния за сутки в часах:";
			// 
			// Snow_height
			// 
			this->Snow_height->Location = System::Drawing::Point(3, 229);
			this->Snow_height->Name = L"Snow_height";
			this->Snow_height->Size = System::Drawing::Size(100, 20);
			this->Snow_height->TabIndex = 11;
			this->Snow_height->Text = L"001";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(2, 200);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(262, 26);
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
			this->Snow_condition->Location = System::Drawing::Point(5, 176);
			this->Snow_condition->Name = L"Snow_condition";
			this->Snow_condition->Size = System::Drawing::Size(340, 21);
			this->Snow_condition->TabIndex = 9;
			this->Snow_condition->Text = L"Лед более 1 балла";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 160);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(307, 13);
			this->label23->TabIndex = 8;
			this->label23->Text = L"Cостояние подстилающей поверхности при наличии снега:";
			// 
			// Night_soil_temperature
			// 
			this->Night_soil_temperature->Location = System::Drawing::Point(6, 137);
			this->Night_soil_temperature->Name = L"Night_soil_temperature";
			this->Night_soil_temperature->Size = System::Drawing::Size(100, 20);
			this->Night_soil_temperature->TabIndex = 7;
			this->Night_soil_temperature->Text = L"+01";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(3, 121);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(291, 13);
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
			this->Soil_surface_condition->Location = System::Drawing::Point(6, 97);
			this->Soil_surface_condition->Name = L"Soil_surface_condition";
			this->Soil_surface_condition->Size = System::Drawing::Size(339, 21);
			this->Soil_surface_condition->TabIndex = 5;
			this->Soil_surface_condition->Text = L"Сухая (без трещин, заметного количества пыли или сыпучего песка)";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 80);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(342, 13);
			this->label21->TabIndex = 4;
			this->label21->Text = L"Cостояние поверхности почвы при отсутствии снежного покрова:";
			// 
			// Min_day_temperature
			// 
			this->Min_day_temperature->Location = System::Drawing::Point(5, 57);
			this->Min_day_temperature->Name = L"Min_day_temperature";
			this->Min_day_temperature->Size = System::Drawing::Size(100, 20);
			this->Min_day_temperature->TabIndex = 3;
			this->Min_day_temperature->Text = L"+00,1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(2, 40);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(234, 13);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Минимальная температура воздуха за день:";
			// 
			// Max_day_temperature
			// 
			this->Max_day_temperature->Location = System::Drawing::Point(6, 17);
			this->Max_day_temperature->Name = L"Max_day_temperature";
			this->Max_day_temperature->Size = System::Drawing::Size(100, 20);
			this->Max_day_temperature->TabIndex = 1;
			this->Max_day_temperature->Text = L"+00,1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(240, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Максимальная температура воздуха за день:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->Min_night_air_temperature);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->Air_temperature_average);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->Soil_temperature);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(710, 400);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Раздел 5";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// Air_temperature_average
			// 
			this->Air_temperature_average->Location = System::Drawing::Point(6, 55);
			this->Air_temperature_average->Name = L"Air_temperature_average";
			this->Air_temperature_average->Size = System::Drawing::Size(100, 20);
			this->Air_temperature_average->TabIndex = 11;
			this->Air_temperature_average->Text = L"+01";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(3, 39);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(271, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Cредняя температура воздуха за прошедшие сутки:";
			// 
			// Soil_temperature
			// 
			this->Soil_temperature->Location = System::Drawing::Point(6, 16);
			this->Soil_temperature->Name = L"Soil_temperature";
			this->Soil_temperature->Size = System::Drawing::Size(100, 20);
			this->Soil_temperature->TabIndex = 9;
			this->Soil_temperature->Text = L"+01";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(3, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(324, 13);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Температура подстилающей поверхности в срок наблюдения:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(3, 78);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(229, 26);
			this->label32->TabIndex = 12;
			this->label32->Text = L"Mинимальная температура воздуха за\r\nночь на высоте 2 см от поверхности почвы:";
			// 
			// Min_night_air_temperature
			// 
			this->Min_night_air_temperature->Location = System::Drawing::Point(3, 107);
			this->Min_night_air_temperature->Name = L"Min_night_air_temperature";
			this->Min_night_air_temperature->Size = System::Drawing::Size(100, 20);
			this->Min_night_air_temperature->TabIndex = 13;
			this->Min_night_air_temperature->Text = L"+01";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 483);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
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
			Summary += Code_letter_pointer;
			Summary += " ";

			//YYGGiw
			String^ Data = Data_calculation->Text;
			String^ Time = Time_calculation->Text;
			String^ Type_speed_wind = Type_speed->Text;
			String^ Type_speed_wind_dimension = Type_speed_dimension->Text;
			int Type_wind = 0;
			if (Type_speed_wind == Convert::ToString(Type_speed->Items[0]))Type_wind += 0;
			else if (Type_speed_wind == Convert::ToString(Type_speed->Items[1]))Type_wind += 3;
			if (Type_speed_wind_dimension == Convert::ToString(Type_speed_dimension->Items[0]))Type_wind += 0;
			else if (Type_speed_wind_dimension == Convert::ToString(Type_speed_dimension->Items[1]))Type_wind += 1;
			
			Summary += Data;
			Summary += Time;
			Summary += Convert::ToString(Type_wind);
			Summary += " ";

			//IIiii
			String ^Number_of_district = Number_district->Text;
			String ^Number_of_station = Number_station->Text;
			Summary += Number_of_district;
			Summary += Number_of_station;
			Summary += " ";

			//Раздел 1
			//iRixhVV
			int Availability_6RRRtr = Group_6RRRtr->SelectedIndex;
			String^ Ok_6RRRtr;
			Ok_6RRRtr = Convert::ToString(Availability_6RRRtr);

			String^ Availability_wwW1W2 = Group_7wwW1W2->Text;
			String^ Type_of_station = Type_station->Text;
			int Ok_wwW1W2 = 0;
			if (Availability_wwW1W2 == Convert::ToString(Group_7wwW1W2->Items[0])) Ok_wwW1W2 =1;
			else if (Availability_wwW1W2 == Convert::ToString(Group_7wwW1W2->Items[1])) Ok_wwW1W2 =2;
			else if (Availability_wwW1W2 == Convert::ToString(Group_7wwW1W2->Items[2])) Ok_wwW1W2 =3;
			if (Type_of_station == Convert::ToString(Type_station->Items[0])) Ok_wwW1W2 +=0;
			else if (Type_of_station == Convert::ToString(Type_station->Items[1])) Ok_wwW1W2 +=3;


			String^ Ok_Cloud_height = Cloud_height->Text;
			int Height_of_cloud;
			if (Ok_Cloud_height != "/") {
				Height_of_cloud = Convert::ToInt32(Ok_Cloud_height);
				if (Height_of_cloud < 50)Ok_Cloud_height = "0";
				else if (Height_of_cloud <= 100)Ok_Cloud_height = "1";
				else if (Height_of_cloud <= 200)Ok_Cloud_height = "2";
				else if (Height_of_cloud <= 300)Ok_Cloud_height = "3";
				else if (Height_of_cloud <= 600)Ok_Cloud_height = "4";
				else if (Height_of_cloud <= 1000)Ok_Cloud_height = "5";
				else if (Height_of_cloud <= 1500)Ok_Cloud_height = "6";
				else if (Height_of_cloud <= 2000)Ok_Cloud_height = "7";
				else if (Height_of_cloud <= 2500)Ok_Cloud_height = "8";
				else if (Height_of_cloud > 2500)Ok_Cloud_height = "9";
			}
			

			double Visibility_range_cloud = Convert::ToDouble(Visibility_range->Text);
			int Ok_Visibility_range_cloud=0;
			if (Visibility_range_cloud <= 5.0)Ok_Visibility_range_cloud = 10 * Visibility_range_cloud;
			else if (Visibility_range_cloud <= 30.0)Ok_Visibility_range_cloud = 50 + Visibility_range_cloud;
			else if (Visibility_range_cloud <= 70.0)Ok_Visibility_range_cloud = (Visibility_range_cloud - 30) / 5 + 80;
			else if (Visibility_range_cloud <= 70.0)Ok_Visibility_range_cloud = 89;
			Summary += Ok_6RRRtr;
			Summary += Convert::ToString(Ok_wwW1W2);
			Summary += Ok_Cloud_height;
			if(Ok_Visibility_range_cloud<10)
			Summary += "0"+Convert::ToString(Ok_Visibility_range_cloud);
			else Summary += Convert::ToString(Ok_Visibility_range_cloud);
			Summary += " ";

			//Nddff
			int Number_of_clouds = Number_clouds->SelectedIndex;
			String^ Ok_Number_of_clouds;
			if (Number_of_clouds <= 9)Ok_Number_of_clouds = Convert::ToString(Number_of_clouds);
			else Ok_Number_of_clouds = "/";

			int Direction_of_wind = Convert::ToInt32(Direction_wind->Text);
			if (Direction_of_wind <= 4)Direction_of_wind = 360;
			Direction_of_wind = ((Direction_of_wind - 5) / 10) + 1;
			int Speed_of_wind = Convert::ToInt32(Speed_wind->Text);

			Summary += Ok_Number_of_clouds;
			if (Direction_of_wind < 10)
				Summary += "0" + Convert::ToString(Direction_of_wind);
			else Summary += Convert::ToString(Direction_of_wind);
			if (Speed_of_wind < 10)
				Summary += "0" + Convert::ToString(Speed_of_wind);
			else Summary += Convert::ToString(Speed_of_wind);
			Summary += " ";

			//1snTTT
			double Temperature_of_air = Convert::ToDouble(Air_temperature->Text);
			String^ Sign="0";
			if (Temperature_of_air < 0) {
				Sign = "1";
				Temperature_of_air = -Temperature_of_air;
			}

			Summary += "1";
			if (Temperature_of_air < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Temperature_of_air * 10.0);
			else if (Temperature_of_air < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_air * 10.0);
			else Summary += Sign + Convert::ToString(Temperature_of_air * 10.0); 
			Summary += " ";

			//2snTdTdTd
			double Point_of_dew = Convert::ToDouble(Dew_point->Text);
			Sign = "0";
			if (Point_of_dew < 0) {
				Sign = "1";
				Point_of_dew = -Point_of_dew;
			}

			Summary += "2";
			if (Point_of_dew < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Point_of_dew * 10.0);
			else if (Point_of_dew < 10.0) Summary += Sign + "0" + Convert::ToString(Point_of_dew * 10.0);
			else Summary += Sign + Convert::ToString(Point_of_dew * 10.0);
			Summary += " ";

			// 3PoPoPoPo
			double Air_pressure_on_station = Convert::ToDouble(Air_pressure_station->Text);
			Air_pressure_on_station = Air_pressure_on_station - 1000;

			Summary += "3";
			if(Air_pressure_on_station<1)Summary += "000"+Convert::ToString(Air_pressure_on_station*10);
			else if(Air_pressure_on_station<10)Summary += "00"+Convert::ToString(Air_pressure_on_station*10);
			else if(Air_pressure_on_station<100)Summary += "0"+Convert::ToString(Air_pressure_on_station*10);
			else Summary += Convert::ToString(Air_pressure_on_station*10);
			Summary += " ";

			//4PPPP
			double Air_pressure_on_sea_level = Convert::ToDouble(Air_pressure_sea_level->Text);
			Air_pressure_on_sea_level = Air_pressure_on_sea_level - 1000;

			Summary += "4";
			if (Air_pressure_on_sea_level < 1)Summary += "000" + Convert::ToString(Air_pressure_on_sea_level * 10);
			else if (Air_pressure_on_sea_level < 10)Summary += "00" + Convert::ToString(Air_pressure_on_sea_level * 10);
			else if (Air_pressure_on_sea_level < 100)Summary += "0" + Convert::ToString(Air_pressure_on_sea_level * 10);
			else Summary += Convert::ToString(Air_pressure_on_sea_level * 10);
			Summary += " ";
			//4a3hhh пока нет, тк я не понял, что имеется ввиду или, или
			
			//5appp 
			Summary += "5";
			int Characteristic_of_baric_tendency = Baric_tendency_characteristic->SelectedIndex;
			if (Characteristic_of_baric_tendency == 0)Characteristic_of_baric_tendency = 0;
			else if (Characteristic_of_baric_tendency == 1|| Characteristic_of_baric_tendency == 2)Characteristic_of_baric_tendency = 1;
			else if (Characteristic_of_baric_tendency == 3)Characteristic_of_baric_tendency = 2;
			else if (Characteristic_of_baric_tendency == 4|| Characteristic_of_baric_tendency == 5|| Characteristic_of_baric_tendency == 6)Characteristic_of_baric_tendency = 3;
			else if (Characteristic_of_baric_tendency == 7)Characteristic_of_baric_tendency = 4;
			else if (Characteristic_of_baric_tendency == 8)Characteristic_of_baric_tendency = 5;
			else if (Characteristic_of_baric_tendency == 9 || Characteristic_of_baric_tendency == 10)Characteristic_of_baric_tendency = 6;
			else if (Characteristic_of_baric_tendency == 11)Characteristic_of_baric_tendency = 7;
			else if (Characteristic_of_baric_tendency == 12 || Characteristic_of_baric_tendency == 13 || Characteristic_of_baric_tendency == 14)Characteristic_of_baric_tendency = 8;

			double Value_of_pressere_trend = Convert::ToDouble(Pressure_trend_value->Text);

			Summary += Convert::ToString(Characteristic_of_baric_tendency);
			if (Value_of_pressere_trend < 1)Summary += "00" + Convert::ToString(Value_of_pressere_trend * 10);
			else if (Value_of_pressere_trend < 10)Summary += "0" + Convert::ToString(Value_of_pressere_trend * 10);
			else Summary += Convert::ToString(Value_of_pressere_trend * 10);
			Summary += " ";

			//6RRRtR
			if (Availability_6RRRtr == 0 || Availability_6RRRtr == 1)
			{
				double Number_of_precipitation = Convert::ToDouble(Rainfall->Text);
				if (Number_of_precipitation < 1)Number_of_precipitation = Number_of_precipitation * 10 + 990;
				else if (Number_of_precipitation <= 989)Number_of_precipitation = (int)Number_of_precipitation;
				else if (Number_of_precipitation > 989)Number_of_precipitation = 989;

				int Duration_of_precipitation = Precipitation_duration->SelectedIndex;
				String^ Ok_Duration_of_precipitation;
				if (Duration_of_precipitation <= 8)Ok_Duration_of_precipitation = Convert::ToString(Duration_of_precipitation + 1);
				else Ok_Duration_of_precipitation = "/";

				Summary += "6";
				if (Number_of_precipitation < 10)Summary += "00" + Convert::ToString(Number_of_precipitation);
				else if (Number_of_precipitation < 100)Summary += "0" + Convert::ToString(Number_of_precipitation);
				else Summary += Convert::ToString(Number_of_precipitation);
				Summary += Ok_Duration_of_precipitation;
				Summary += " ";
			}

			//7wwW1W2
			int Current_of_weather = Current_weather->SelectedIndex;
			int Past_of_weather = Past_weather->SelectedIndex;

			Summary += "7";
			if (Current_of_weather < 10)Summary += "0" + Convert::ToString(Current_of_weather);
			else Summary += Convert::ToString(Current_of_weather);
			if (Past_of_weather < 10)Summary += "0" + Convert::ToString(Past_of_weather);
			else Summary += Convert::ToString(Past_of_weather);

			Summary += " ";

			//8NhCLCMCH
			int Exact_amount_of_clouds = Clouds_exact_amount->SelectedIndex;
			String^ Ok_Exact_amount_of_clouds;
			if (Exact_amount_of_clouds <= 9)Ok_Exact_amount_of_clouds = Convert::ToString(Exact_amount_of_clouds);
			else Ok_Exact_amount_of_clouds = "/";

			int Basement_of_clouds = Clouds_basement->SelectedIndex;
			String^ Ok_Basement_of_clouds;
			if (Basement_of_clouds <= 9)Ok_Basement_of_clouds = Convert::ToString(Basement_of_clouds);
			else Ok_Basement_of_clouds = "/";

			int Middle_layer_of_clouds = Clouds_middle_layer->SelectedIndex;
			String^ Ok_Middle_layer_of_clouds;
			if (Middle_layer_of_clouds <= 9)Ok_Middle_layer_of_clouds = Convert::ToString(Middle_layer_of_clouds);
			else Ok_Middle_layer_of_clouds = "/";
			
			int Top_of_cloud = Cloud_top->SelectedIndex;
			String^ Ok_Top_of_cloud;
			if (Top_of_cloud <= 9)Ok_Top_of_cloud = Convert::ToString(Top_of_cloud);
			else Ok_Top_of_cloud = "/";
			
			Summary += "8";
			Summary += Ok_Exact_amount_of_clouds;
			Summary += Ok_Basement_of_clouds;
			Summary += Ok_Middle_layer_of_clouds;
			Summary += Ok_Top_of_cloud;
			Summary += " ";
			//Раздел 3
			Summary += "333";
			Summary += " ";
			//1snTxTxTx
			double Max_temperature_of_day = Convert::ToDouble(Max_day_temperature->Text);
			Sign = "0";
			if (Max_temperature_of_day < 0) {
				Sign = "1";
				Max_temperature_of_day = -Max_temperature_of_day;
			}

			Summary += "1";
			if (Max_temperature_of_day < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Max_temperature_of_day * 10.0);
			else if (Max_temperature_of_day < 10.0) Summary += Sign + "0" + Convert::ToString(Max_temperature_of_day * 10.0);
			else Summary += Sign + Convert::ToString(Max_temperature_of_day * 10.0);
			Summary += " ";

			//2snTnTnTn
			double Min_temperature_of_day = Convert::ToDouble(Min_day_temperature->Text);
			Sign = "0";
			if (Min_temperature_of_day < 0) {
				Sign = "1";
				Min_temperature_of_day = -Min_temperature_of_day;
			}

			Summary += "2";
			if (Min_temperature_of_day < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Min_temperature_of_day * 10.0);
			else if (Min_temperature_of_day < 10.0) Summary += Sign + "0" + Convert::ToString(Min_temperature_of_day * 10.0);
			else Summary += Sign + Convert::ToString(Min_temperature_of_day * 10.0);
			Summary += " ";

			//3EsnTgTg
			int Condition_of_soil_surfase = Soil_surface_condition->SelectedIndex;
			String^ Ok_Condition_of_soil_surfase;
			if (Condition_of_soil_surfase <= 9)Ok_Condition_of_soil_surfase = Convert::ToString(Condition_of_soil_surfase);
			else Ok_Condition_of_soil_surfase = "/";

			int Temperature_of_night_soil = Convert::ToInt32(Night_soil_temperature->Text);
			Sign = "0";
			if (Temperature_of_night_soil < 0) {
				Sign = "1";
				Temperature_of_night_soil = -Temperature_of_night_soil;
			}
						
			Summary += "3";
			Summary += Ok_Condition_of_soil_surfase;
			if (Temperature_of_night_soil < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_night_soil);
			else Summary += Sign + Convert::ToString(Temperature_of_night_soil);
			Summary += " ";

			//4E'sss
			int Condition_of_snow = Snow_condition->SelectedIndex;
			String^ Ok_Condition_of_snow;
			if (Condition_of_snow <= 9)Ok_Condition_of_snow = Convert::ToString(Condition_of_snow);
			else Ok_Condition_of_snow = "/";
			
			String^ Ok_Height_of_snow = Snow_height->Text;
			int Height_of_snow;
			if (Ok_Height_of_snow == "!5")Height_of_snow = 997;
			else if (Ok_Height_of_snow == "->1")Height_of_snow = 998;
			else if (Ok_Height_of_snow == "/")Height_of_snow = 999;
			else Height_of_snow = Convert::ToInt32(Ok_Height_of_snow);
			

			Summary += "4";
			Summary += Ok_Condition_of_snow;
			if (Height_of_snow < 10)Summary += "00" + Convert::ToString(Height_of_snow);
			else if (Height_of_snow < 100)Summary += "0" + Convert::ToString(Height_of_snow);
			else Summary += Convert::ToString(Height_of_snow);
			Summary += " ";

			//55SSS
			double Duration_of_sunshine = Convert::ToDouble(Sunshine_duration->Text);
			

			Summary += "55";
			if (Duration_of_sunshine < 1.0) Summary += "0" + "0" + Convert::ToString(Duration_of_sunshine * 10.0);
			else if (Duration_of_sunshine < 10.0) Summary += "0" + Convert::ToString(Duration_of_sunshine * 10.0);
			else Summary +=Convert::ToString(Duration_of_sunshine * 10.0);
			Summary += " ";

			//6RRRtR
			if (Availability_6RRRtr == 0 || Availability_6RRRtr == 2)
			{
				double Number_of_precipitation = Convert::ToDouble(Rainfall->Text);
				if (Number_of_precipitation < 1)Number_of_precipitation = Number_of_precipitation * 10 + 990;
				else if (Number_of_precipitation <= 989)Number_of_precipitation = (int)Number_of_precipitation;
				else if (Number_of_precipitation > 989)Number_of_precipitation = 989;

				int Duration_of_precipitation = Precipitation_duration->SelectedIndex;
				String^ Ok_Duration_of_precipitation;
				if (Duration_of_precipitation <= 8)Ok_Duration_of_precipitation = Convert::ToString(Duration_of_precipitation + 1);
				else Ok_Duration_of_precipitation = "/";

				Summary += "6";
				if (Number_of_precipitation < 10)Summary += "00" + Convert::ToString(Number_of_precipitation);
				else if (Number_of_precipitation < 100)Summary += "0" + Convert::ToString(Number_of_precipitation);
				else Summary += Convert::ToString(Number_of_precipitation);
				Summary += Ok_Duration_of_precipitation;
				Summary += " ";
			}

			//8NsChshs
			if (Number_of_clouds != 0 && Number_of_clouds != 9 && Number_of_clouds != 10)
			{
				int Measurements_of_NGO = NGO_measurements->SelectedIndex;
				if (Measurements_of_NGO == 0) 
				{
					int Number_of_NGO = NGO_number->SelectedIndex;
					String^ Ok_Number_of_NGO;
					if (Number_of_NGO <= 9)Ok_Number_of_NGO = Convert::ToString(Number_of_NGO);
					else Ok_Number_of_NGO = "/";

					int Type_of_NGO = NGO_type->SelectedIndex;
					String^ Ok_Type_of_NGO;
					if (Type_of_NGO <= 9)Ok_Type_of_NGO = Convert::ToString(Type_of_NGO);
					else Ok_Type_of_NGO = "/";
					
					int Height_of_NGO;
					if (Height_of_cloud <= 1500)Height_of_NGO = Height_of_cloud / 30;
					else if (Height_of_cloud <= 9000)Height_of_NGO = Height_of_cloud / 300 + 50;
					else if (Height_of_cloud <= 21000)Height_of_NGO = Height_of_cloud / 1500 + 74;
					else Height_of_NGO = 89;
					if (Height_of_NGO >= 51 && Height_of_NGO <= 55)Height_of_NGO = 50;

					Summary += "8";
					Summary += Ok_Number_of_NGO;
					Summary += Ok_Type_of_NGO;
					Summary += Convert::ToString(Height_of_NGO);
					Summary += " ";
				}
			}

			//9SРSPspsp
			int Additional_information_of_weather = Additional_weather_information->SelectedIndex;
			if (Additional_information_of_weather != 0)
			{
				String^ Ok_Additional_information_of_weather;
				double Hail_diameter, Fresh_snow_height;
				int Sea_temperature;
				switch (Additional_information_of_weather)
				{
				case 1:
					Ok_Additional_information_of_weather = "6119";
					break;
				case 2:
					Ok_Additional_information_of_weather = "19" + 
						Convert::ToString(Additional_characteristic_1->SelectedIndex)+
						Convert::ToString(Additional_characteristic_2->SelectedIndex);
					break;
				case 3:
					Ok_Additional_information_of_weather = "18" +
						Convert::ToString(Additional_characteristic_1->SelectedIndex) +
						Convert::ToString(Additional_characteristic_2->SelectedIndex);
					break;
				case 4:
					Ok_Additional_information_of_weather = "298" +
						Convert::ToString(Additional_characteristic_1->SelectedIndex);
					break;
				case 5:
					Ok_Additional_information_of_weather = "299" +
						Convert::ToString(Additional_characteristic_1->SelectedIndex);
					break;
				case 6:
					Ok_Additional_information_of_weather = "32";
					Hail_diameter = Convert::ToDouble(Additional_characteristic_3->Text);
					if (Hail_diameter <= 0.1)Ok_Additional_information_of_weather += "97";
					else if (Hail_diameter <= 0.6)Ok_Additional_information_of_weather += Convert::ToString(Hail_diameter * 10 + 90);
					else if (Hail_diameter <= 9)Ok_Additional_information_of_weather += "0" + Convert::ToString((int)Hail_diameter);
					else if (Hail_diameter <= 55)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter);
					else if (Hail_diameter <= 400)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter / 10 + 50);
					else Ok_Additional_information_of_weather += "98";
					break;
				case 7:
				case 8:
				case 9:
				case 10:
					Ok_Additional_information_of_weather = Convert::ToString(Additional_information_of_weather+27);
					Hail_diameter =Convert::ToDouble(Additional_characteristic_3->Text);
					if (Hail_diameter <= 0.1)Ok_Additional_information_of_weather += "97";
					else if (Hail_diameter <= 0.6)Ok_Additional_information_of_weather += Convert::ToString(Hail_diameter*10+90);
					else if (Hail_diameter <= 9)Ok_Additional_information_of_weather += "0"+Convert::ToString((int)Hail_diameter);
					else if (Hail_diameter <= 55)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter);
					else if(Hail_diameter<=400)Ok_Additional_information_of_weather += Convert::ToString((int)Hail_diameter/10+50);
					else Ok_Additional_information_of_weather += "98";
					break;
				case 11:
					Ok_Additional_information_of_weather = "25";
					Sea_temperature = Convert::ToInt32(Additional_characteristic_3->Text);
					if (Sea_temperature < 10)Ok_Additional_information_of_weather += "0" + Convert::ToString(Sea_temperature);
					else Ok_Additional_information_of_weather +=  Convert::ToString(Sea_temperature);
					break;
				case 12:
					Ok_Additional_information_of_weather = "31";
					Fresh_snow_height = Convert::ToDouble(Additional_characteristic_3->Text);
					if (Fresh_snow_height <= 0.1)Ok_Additional_information_of_weather += "97";
					else if (Fresh_snow_height <= 0.6)Ok_Additional_information_of_weather += Convert::ToString(Fresh_snow_height * 10 + 90);
					else if (Fresh_snow_height <= 9)Ok_Additional_information_of_weather += "0" + Convert::ToString((int)Fresh_snow_height);
					else if (Fresh_snow_height <= 55)Ok_Additional_information_of_weather += Convert::ToString((int)Fresh_snow_height);
					else if (Fresh_snow_height <= 400)Ok_Additional_information_of_weather += Convert::ToString((int)Fresh_snow_height / 10 + 50);
					else Ok_Additional_information_of_weather += "98";
					break;
				case 13:
					Ok_Additional_information_of_weather += "6110";
					break;
				case 14:
					Ok_Additional_information_of_weather += "6510";
					break;
				case 15:
					Ok_Additional_information_of_weather += "50"+
						Convert::ToString(Additional_characteristic_1->SelectedIndex) +
						Convert::ToString(Additional_characteristic_2->SelectedIndex);
					break;
				case 16:
					Ok_Additional_information_of_weather += "51" +
						Convert::ToString(Additional_characteristic_1->SelectedIndex) +
						Convert::ToString(Additional_characteristic_2->SelectedIndex);
					break;
				default:
					break;
				}

				Summary += "9";
				Summary += Ok_Additional_information_of_weather;
				Summary += " ";

				int Additional_information_of_weather_2 = Additional2_characteristic_1->SelectedIndex;
				double Cloud_travel_speed;
				String^ Ok_Additional_information_of_weather_2;
				if (Additional_information_of_weather_2 != 0)
				{
					int Event_angular_height;
					switch (Additional_information_of_weather_2)
					{
					case 1:
						Ok_Additional_information_of_weather_2 += "58";
						Event_angular_height = Additional2_characteristic_2->SelectedIndex;
						if(Event_angular_height==0)Ok_Additional_information_of_weather_2 += "1";
						else if(Event_angular_height==1)Ok_Additional_information_of_weather_2 += "3";
						else Ok_Additional_information_of_weather_2 += "7";
						Ok_Additional_information_of_weather_2 +=
							Convert::ToString(Additional2_characteristic_3->SelectedIndex);
						break;
					case 2:
						Ok_Additional_information_of_weather_2 += "59";
						Event_angular_height = Additional2_characteristic_2->SelectedIndex;
						Cloud_travel_speed = Convert::ToInt32(Additional2_characteristic_4 -> Text);
						if (Event_angular_height == 0)
							if (Cloud_travel_speed < 3)Ok_Additional_information_of_weather_2 += "0";
							else if (Cloud_travel_speed < 8)Ok_Additional_information_of_weather_2 += "1";
							else if (Cloud_travel_speed < 13)Ok_Additional_information_of_weather_2 += "2";
							else if (Cloud_travel_speed < 18)Ok_Additional_information_of_weather_2 += "3";
							else if (Cloud_travel_speed < 23)Ok_Additional_information_of_weather_2 += "4";
							else if (Cloud_travel_speed < 28)Ok_Additional_information_of_weather_2 += "5";
							else if (Cloud_travel_speed < 33)Ok_Additional_information_of_weather_2 += "6";
							else if (Cloud_travel_speed < 39)Ok_Additional_information_of_weather_2 += "7";
							else if (Cloud_travel_speed < 44)Ok_Additional_information_of_weather_2 += "8";
							else Ok_Additional_information_of_weather_2 += "9";
						if (Event_angular_height == 1)
							if (Cloud_travel_speed < 9)Ok_Additional_information_of_weather_2 += "0";
							else if (Cloud_travel_speed < 26)Ok_Additional_information_of_weather_2 += "1";
							else if (Cloud_travel_speed < 45)Ok_Additional_information_of_weather_2 += "2";
							else if (Cloud_travel_speed < 63)Ok_Additional_information_of_weather_2 += "3";
							else if (Cloud_travel_speed < 82)Ok_Additional_information_of_weather_2 += "4";
							else if (Cloud_travel_speed < 101)Ok_Additional_information_of_weather_2 += "5";
							else if (Cloud_travel_speed < 119)Ok_Additional_information_of_weather_2 += "6";
							else if (Cloud_travel_speed < 138)Ok_Additional_information_of_weather_2 += "7";
							else if (Cloud_travel_speed < 156)Ok_Additional_information_of_weather_2 += "8";
							else Ok_Additional_information_of_weather_2 += "9";
						if (Event_angular_height == 2)
							if (Cloud_travel_speed < 4)Ok_Additional_information_of_weather_2 += "0";
							else if (Cloud_travel_speed < 15)Ok_Additional_information_of_weather_2 += "1";
							else if (Cloud_travel_speed < 25)Ok_Additional_information_of_weather_2 += "2";
							else if (Cloud_travel_speed < 35)Ok_Additional_information_of_weather_2 += "3";
							else if (Cloud_travel_speed < 34)Ok_Additional_information_of_weather_2 += "4";
							else if (Cloud_travel_speed < 55)Ok_Additional_information_of_weather_2 += "5";
							else if (Cloud_travel_speed < 65)Ok_Additional_information_of_weather_2 += "6";
							else if (Cloud_travel_speed < 75)Ok_Additional_information_of_weather_2 += "7";
							else if (Cloud_travel_speed < 85)Ok_Additional_information_of_weather_2 += "8";
							else Ok_Additional_information_of_weather_2 += "9";
						Ok_Additional_information_of_weather_2 +=
							Convert::ToString(Additional2_characteristic_3->SelectedIndex);
						break;
					default:
						break;
					}
					Summary += "9";
					Summary += Ok_Additional_information_of_weather_2;
					Summary += " ";
				}

				if (Speed_of_wind >= 10)
				{
					Summary += "910";
					if (Speed_of_wind < 10)
						Summary += "0" + Convert::ToString(Speed_of_wind);
					else Summary += Convert::ToString(Speed_of_wind);
					Summary += " ";
				}
				//В период между сроками наблюдения(не получилось пока, тк нет выбора в срок или между сроками)
				//Максимальная скорость ветра при порывах(ff) Nddff
				switch (Current_of_weather)
				{
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
					Summary += "960"+Convert::ToString(Current_of_weather);
					break;
				default:
					break;
				}
				
			}


			//Раздел 5
			Summary += "555";
			Summary += " ";


			//1EsnT'gT'g
			int Temperature_of_soil = Convert::ToInt32(Soil_temperature->Text);
			Sign = "0";
			if (Temperature_of_soil < 0) {
				Sign = "1";
				Temperature_of_soil = -Temperature_of_soil;
			}

			Summary += "1";
			Summary+= Ok_Condition_of_soil_surfase;
			if (Temperature_of_soil < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_soil);
			else Summary += Sign + Convert::ToString(Temperature_of_soil);
			Summary += " ";


			//5snT24T24T24
			double Average_of_air_temperature = Convert::ToDouble(Air_temperature_average->Text);
			Sign = "0";
			if (Average_of_air_temperature < 0) {
				Sign = "1";
				Average_of_air_temperature = -Average_of_air_temperature;
			}

			Summary += "5";
			if (Average_of_air_temperature < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
			else if (Average_of_air_temperature < 10.0) Summary += Sign + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
			else Summary += Sign + Convert::ToString(Average_of_air_temperature * 10.0);
			Summary += " ";

			
			//52snT2T2
			int Min_air_temperature_for_night = Convert::ToInt32(Min_night_air_temperature->Text);
			Sign = "0";
			if (Min_air_temperature_for_night < 0) {
				Sign = "1";
				Min_air_temperature_for_night = -Min_air_temperature_for_night;
			}

			Summary += "52";
			if (Min_air_temperature_for_night < 10.0) Summary += Sign + "0" + Convert::ToString(Min_air_temperature_for_night);
			else Summary += Sign + Convert::ToString(Min_air_temperature_for_night);
			Summary += " ";


			//530f12f12


			Summary += "530";

			Summary += " ";


			//7R24R24R24/


			Summary += "7";

			Summary += "/ ";


			//88R24R24R24


			Summary += "88";

			Summary += " ";




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
