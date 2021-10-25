#pragma once
#ifndef SECTION_0_H
#define SECTION_0_H

String^ MiMiMjMj(String^ Code_letter_pointer)
{
	return Code_letter_pointer+" ";
}
String^ YYGGiw(ComboBox^ Data_calculation, ComboBox^ Time_calculation, ComboBox^ Type_speed, ComboBox^ Type_speed_dimension)
{
	String^ Summary;
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
	return Summary;
}
String^ IIiii(TextBox^ Number_district, TextBox^ Number_station)
{
	String^ Summary;
	String^ Number_of_district = Number_district->Text;
	String^ Number_of_station = Number_station->Text;
	Summary += Number_of_district;
	Summary += Number_of_station;
	Summary += " ";
	return Summary;
}
#endif