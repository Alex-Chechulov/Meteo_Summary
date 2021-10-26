#include "Section_0.h"

String^ MiMiMjMj(String^ Code_letter_pointer)
{
	return Code_letter_pointer + " ";
}
String^ YYGGiw(String^ Data, String^ Time, String^ Type_speed_wind, String^ Type_speed_wind_dimension)
{
	String^ Summary;
	
	int Type_wind = 0;
	if (Type_speed_wind == "м/с")Type_wind += 0;
	else if (Type_speed_wind == "узлы")Type_wind += 3;
	if (Type_speed_wind_dimension == "Расчетная оценка")Type_wind += 0;
	else if (Type_speed_wind_dimension == "Инструментальное измерение")Type_wind += 1;

	Summary += Data;
	Summary += Time;
	Summary += Convert::ToString(Type_wind);
	Summary += " ";
	return Summary;
}
String^ IIiii(int Number_of_district, int Number_of_station)
{
	String^ Summary;
	if (Number_of_district < 10)Summary += "0" + Convert::ToString(Number_of_district);
	else Summary += Convert::ToString(Number_of_district);
	if (Number_of_station < 10)Summary += "00" + Convert::ToString(Number_of_station);
	else if (Number_of_station < 100)Summary += "0" + Convert::ToString(Number_of_station);
	else Summary += Convert::ToString(Number_of_station);
	Summary += " ";
	return Summary;
}