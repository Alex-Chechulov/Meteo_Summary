#include "Section_5.h"

//������ 5
									//������������� ������ ������� 5
String^ Struct_555()
{
	return "555 ";
}

//1EsnT'gT'g
									//1 � ������������� ����� ������
									//� � ��������� ����������� ����� ��� ���������� �������� ������� 
									//snT'gT'g � ����������� ������������ ����������� � ���� ���������� 
									//sn � ���� �����������
									//T'gT'g � �������� � �������� ������� � ��������� �� ������ �������
String^ Struct_1EsnTgTg(String^ Ok_Temperature_of_soil, int Ok_Condition_of_soil_surfase)
{
	String^ Summary;
	int Temperature_of_soil = Convert::ToInt32(Ok_Temperature_of_soil);
	String^ Sign = "0";
	if (Temperature_of_soil < 0) {
		Sign = "1";
		Temperature_of_soil = -Temperature_of_soil;
	}

	Summary += "1";
	if (Ok_Condition_of_soil_surfase < 10)Summary += Convert::ToString(Ok_Condition_of_soil_surfase);
	else Summary += "/";
	if (Temperature_of_soil < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_soil);
	else Summary += Sign + Convert::ToString(Temperature_of_soil);
	Summary += " ";
	return Summary;
}

//5snT24T24T24
						//5 � ������������� ����� ������
						//snT24T24T24 � ������� ����������� ������� �� ��������� �����, ��������������� � ���� �������� ������
						//sn � ���� �����������
						//T24T24T24 � �������� � �������� ������� � ��������� �� ������� ����� �������
String ^ Struct_5snT24T24T24(String^ Ok_Average_of_air_temperature)
{
	String^ Summary;
	double Average_of_air_temperature = Convert::ToDouble(Ok_Average_of_air_temperature);
	String^ Sign = "0";
	if (Average_of_air_temperature < 0) {
		Sign = "1";
		Average_of_air_temperature = -Average_of_air_temperature;
	}

	Summary += "5";
	if (Average_of_air_temperature < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
	else if (Average_of_air_temperature < 10.0) Summary += Sign + "0" + Convert::ToString(Average_of_air_temperature * 10.0);
	else Summary += Sign + Convert::ToString(Average_of_air_temperature * 10.0);
	Summary += " ";

	return Summary;
}

//52snT2T2
						//52 � ������������� ����� ������
						//snT2T2 � ����������� ����������� ������� �� ���� �� ������ 2 �� �� ����������� �����
						//sn � ���� �����������
						//T2T2 � �������� � �������� ������� � ��������� �� ������ �������
String^ Struct_52snT2T2(String^ Ok_Min_air_temperature_for_night)
{
	String^ Summary;
	int Min_air_temperature_for_night = Convert::ToInt32(Ok_Min_air_temperature_for_night);
	String^ Sign = "0";
	if (Min_air_temperature_for_night < 0) {
		Sign = "1";
		Min_air_temperature_for_night = -Min_air_temperature_for_night;
	}

	Summary += "52";
	if (Min_air_temperature_for_night < 10.0) Summary += Sign + "0" + Convert::ToString(Min_air_temperature_for_night);
	else Summary += Sign + Convert::ToString(Min_air_temperature_for_night);
	Summary += " ";
	return Summary;
}

//530f12f12
						//530 � ������������� ����� ������
						//f12f12 � ������������ �������� ����� ��� ������� �� ��������� ���������, ��������������� � ���� �������� ������
String^ Struct_530f12f12(String^ Ok_Maximum_of_wind_speed)
{
	String^ Summary;
	int Maximum_of_wind_speed = Convert::ToInt32(Ok_Maximum_of_wind_speed);

	Summary += "530";
	if (Maximum_of_wind_speed < 10)
		Summary += "0" + Convert::ToString(Maximum_of_wind_speed);
	else Summary += Convert::ToString(Maximum_of_wind_speed);
	Summary += " ";
	return Summary;
}

//7R24R24R24/
						//7 � ������������� ����� ������
						//R24R24R24 � ���������� �������, �������� �� �����
						//  / � ����� ����� (�������� �����������, ����� ������ ���� �����������, ��� ��� ���������)
double Rainfall_per_day1;
double Rainfall_per_day;
String^ Struct_7R24R24R24(String^ Ok_Rainfall_per_day)
{
	String^ Summary;
	Rainfall_per_day1 = Convert::ToDouble(Ok_Rainfall_per_day);
	Rainfall_per_day = Rainfall_per_day1;
	if (Rainfall_per_day < 1)Rainfall_per_day = Rainfall_per_day * 10 + 990;
	else if (Rainfall_per_day <= 989)Rainfall_per_day = (int)Rainfall_per_day;
	else if (Rainfall_per_day > 989)Rainfall_per_day = 989;


	Summary += "7";
	if (Rainfall_per_day < 10)Summary += "00" + Convert::ToString(Rainfall_per_day);
	else if (Rainfall_per_day < 100)Summary += "0" + Convert::ToString(Rainfall_per_day);
	else Summary += Convert::ToString(Rainfall_per_day);
	Summary += "/ ";
	return Summary;
}

//88R24R24R24
						//88 � ������������� ����� ������
						//R24R24R24 � ���������� ������� �� �����, ������������ 30 �� � �����
String^ Struct_88R24R24R24()
{
	String^ Summary;
	if (Rainfall_per_day1 >= 30)
	{
		Summary += "88";
		if (Rainfall_per_day < 100)Summary += "0" + Convert::ToString(Rainfall_per_day);
		else Summary += Convert::ToString(Rainfall_per_day);
		Summary += " ";
	}
	return Summary;
}

