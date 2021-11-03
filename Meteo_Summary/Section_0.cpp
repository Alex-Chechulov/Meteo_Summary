#include "Section_0.h"

//–аздел 0
//MiMiMjMj Ѕуквенный указатель кода. ƒл€ информации, передаваемой в коде  Ќ-01 SYNOP
String^ MiMiMjMj(String^ Code_letter_pointer)
{
	return Code_letter_pointer + " ";
}
//YYGGiw ƒата и срок наблюдени€ по ¬—¬:
						//YY Ц число мес€ца, GG Ц срок наблюдени€ в часах,
						//iw Ц указатель единиц сообщаемой в сводке скорости ветра
String^ YYGGiw(String^ Data, String^ Time, String^ Type_speed_wind, String^ Type_speed_wind_dimension)
{
	String^ Summary;
	
	int Type_wind = 0;
	if (Type_speed_wind == "м/с")Type_wind += 0;
	else if (Type_speed_wind == "узлы")Type_wind += 3;
	if (Type_speed_wind_dimension == "–асчетна€ оценка")Type_wind += 0;
	else if (Type_speed_wind_dimension == "»нструментальное измерение")Type_wind += 1;

	Summary += Data;
	Summary += Time;
	Summary += Convert::ToString(Type_wind);
	Summary += " ";
	return Summary;
}
//IIiii »ндексный номер станции:
									//II Ц номер района,
									//iii Ц номер станции в пределах района II
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