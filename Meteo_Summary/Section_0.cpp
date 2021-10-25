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
//поправить ибо вывод не учитывает колличество цифр
String^ IIiii(String^ Number_of_district, String^ Number_of_station)
{
	String^ Summary;

	Summary += Number_of_district;
	Summary += Number_of_station;
	Summary += " ";
	return Summary;
}