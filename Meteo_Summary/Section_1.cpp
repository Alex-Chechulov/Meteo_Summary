#include "Section_1.h"

//������ 1
			//iRixhVV 
									//iR � ��������� ������� � ������ ������ 6RRRtR, ��������� ���� ������� (������������� 
											//���������� ��� ��������������) � ������� � ������ ������ 7wwW1W2
									//h � ������ ������ ������� ����� ������ �������(CL ��� CM);
									//VV � ����������������� ��������� ���������
int Ok_6RRRtr = 0;
int Ok_7wwW1W2 = 0;
int Height_of_cloud = 0;
String^ iRixhVV(String^ Availability_6RRRtr, String^ Availability_7wwW1W2, String^ Type_of_station, String^ Ok_Cloud_height, String^ OkS_Visibility_range_cloud)
{


	String^ Summary;

	if (Availability_6RRRtr == "�������� � ������ 1 � 3")Ok_6RRRtr = 0;
	else if (Availability_6RRRtr == "�������� � ������ 1")Ok_6RRRtr = 1;
	else if (Availability_6RRRtr == "�������� � ������ 3")Ok_6RRRtr = 2;
	else if (Availability_6RRRtr == "�� �������� (������� �� ����)")Ok_6RRRtr = 3;
	else if (Availability_6RRRtr == "�� �������� (���������� ������� �� ����������)")Ok_6RRRtr = 4;

	
	if (Availability_7wwW1W2 == "��������") Ok_7wwW1W2 = 1;
	else if (Availability_7wwW1W2 == "�� �������� (��� ������� ���������� ��������)") Ok_7wwW1W2 = 2;
	else if (Availability_7wwW1W2 == "�� �������� (���������� �� �������������)") Ok_7wwW1W2 = 3;

	if (Type_of_station == "������������� ����������") Ok_7wwW1W2 += 0;
	else if (Type_of_station == "��������������") Ok_7wwW1W2 += 3;

	
	if (Ok_Cloud_height != "/")
	{
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

	double Visibility_range_cloud = Convert::ToDouble(OkS_Visibility_range_cloud);
	int Ok_Visibility_range_cloud = 0;
	if (Visibility_range_cloud <= 5.0)Ok_Visibility_range_cloud = 10 * Visibility_range_cloud;
	else if (Visibility_range_cloud <= 30.0)Ok_Visibility_range_cloud = 50 + Visibility_range_cloud;
	else if (Visibility_range_cloud <= 70.0)Ok_Visibility_range_cloud = (Visibility_range_cloud - 30) / 5 + 80;
	else if (Visibility_range_cloud > 70.0)Ok_Visibility_range_cloud = 89;

	Summary += Convert::ToString(Ok_6RRRtr);
	Summary += Convert::ToString(Ok_7wwW1W2);
	Summary += Ok_Cloud_height;
	if (Ok_Visibility_range_cloud < 10)Summary += "0" + Convert::ToString(Ok_Visibility_range_cloud);
	else Summary += Convert::ToString(Ok_Visibility_range_cloud);
	Summary += " ";
	return Summary;
}

//Nddff
									//N � ����� ���������� ������� ���� ������
									//������� ����������� ����� � ���� ����������
									//������� �������� ����� � ���� ���������� � �/� 
int Ok_Number_of_clouds = 0;
int Speed_of_wind = 0;
String^ Nddff(String^ Number_of_clouds, String^ Ok_Direction_of_wind, String^ Ok_Speed_of_wind)
{
	String^ Summary;
	if (Number_of_clouds == "0 (������� ���)")Ok_Number_of_clouds =0;
	else if (Number_of_clouds == "1 ��� �����(�� �� 0)")Ok_Number_of_clouds = 1;
	else if (Number_of_clouds == "2�3")Ok_Number_of_clouds = 2;
	else if (Number_of_clouds == "4")Ok_Number_of_clouds = 3;
	else if (Number_of_clouds == "5")Ok_Number_of_clouds = 4;
	else if (Number_of_clouds == "6")Ok_Number_of_clouds = 5;
	else if (Number_of_clouds == "7�8")Ok_Number_of_clouds = 6;
	else if (Number_of_clouds == "9 ��� �����(�� �� 10 ���� ��������)")Ok_Number_of_clouds = 7;
	else if (Number_of_clouds == "10 (��� ���������)")Ok_Number_of_clouds = 8;
	else if (Number_of_clouds == "���������� ���������� �� - �� ������ ������ ��� ������ ����������������� ������� ������������ ���������")Ok_Number_of_clouds = 9;
	else if (Number_of_clouds == "���������� ���������� �� ������ �������� ����� ���������(����� �������� �����) ��� ���������� �� �������������")Ok_Number_of_clouds = 10;

	

	int Direction_of_wind = Convert::ToInt32(Ok_Direction_of_wind);
	if (Direction_of_wind <= 4)Direction_of_wind = 360;
	Direction_of_wind = ((Direction_of_wind - 5) / 10) + 1;

	Speed_of_wind = Convert::ToInt32(Ok_Speed_of_wind);

	if (Ok_Number_of_clouds < 10)Summary += Convert::ToString(Ok_Number_of_clouds);
	else Summary += "/";
	if (Direction_of_wind < 10)
		Summary += "0" + Convert::ToString(Direction_of_wind);
	else Summary += Convert::ToString(Direction_of_wind);
	if (Speed_of_wind < 10)
		Summary += "0" + Convert::ToString(Speed_of_wind);
	else Summary += Convert::ToString(Speed_of_wind);
	Summary += " ";
	return Summary;
}

//1snTTT
									//1 - ������������� ����� ������
									//����������� ������� (sn � ����, TTT � �������� � �������� ������� � ��������� �� ������� ����� �������)
String^ Struct_1snTTT(String ^ Ok_Temperature_of_air)
{
	String^ Summary;
	double Temperature_of_air = Convert::ToDouble(Ok_Temperature_of_air);
	String^ Sign = "0";
	if (Temperature_of_air < 0) {
		Sign = "1";
		Temperature_of_air = -Temperature_of_air;
	}

	Summary += "1";
	if (Temperature_of_air < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Temperature_of_air * 10.0);
	else if (Temperature_of_air < 10.0) Summary += Sign + "0" + Convert::ToString(Temperature_of_air * 10.0);
	else Summary += Sign + Convert::ToString(Temperature_of_air * 10.0);
	Summary += " ";
	return Summary;
}

//2snTdTdTd
									//2 � ������������� ����� ������
									//snTdTdTd � ����� ���� (sn � ����, TdTdTd � �������� � �������� ������� � ��������� �� ������� �����).
String^ Struct_2snTdTdTd(String^ Ok_Point_of_dew)
{
	String^ Summary;
	double Point_of_dew = Convert::ToDouble(Ok_Point_of_dew);
	String^ Sign = "0";
	if (Point_of_dew < 0) {
		Sign = "1";
		Point_of_dew = -Point_of_dew;
	}

	Summary += "2";
	if (Point_of_dew < 1.0) Summary += Sign + "0" + "0" + Convert::ToString(Point_of_dew * 10.0);
	else if (Point_of_dew < 10.0) Summary += Sign + "0" + Convert::ToString(Point_of_dew * 10.0);
	else Summary += Sign + Convert::ToString(Point_of_dew * 10.0);
	Summary += " ";
	return Summary;
}

// 3PoPoPoPo
									//3 � ������������� ����� ������
									//PoPoPoPo � �������� ������� �� ������ ������� � ��� � ��������� �� ������� �����
String^ Struct_3PoPoPoPo(String^ Ok_Air_pressure_on_station)
{
	String^ Summary;
	double Air_pressure_on_station = Convert::ToDouble(Ok_Air_pressure_on_station);
	Air_pressure_on_station = Air_pressure_on_station - 1000;

	Summary += "3";
	if (Air_pressure_on_station < 1)Summary += "000" + Convert::ToString(Air_pressure_on_station * 10);
	else if (Air_pressure_on_station < 10)Summary += "00" + Convert::ToString(Air_pressure_on_station * 10);
	else if (Air_pressure_on_station < 100)Summary += "0" + Convert::ToString(Air_pressure_on_station * 10);
	else Summary += Convert::ToString(Air_pressure_on_station * 10);
	Summary += " ";
	return Summary;
}

//4PPPP
						//4 � ������������� ����� ������
						//PPPP � �������� �������, ����������� � �������� ������ ����, � ��� � ��������� �� ������� �����
String ^ Struct_4PPPP(String^ Ok_Air_pressure_on_sea_level)
{
	String^ Summary;
	double Air_pressure_on_sea_level = Convert::ToDouble(Ok_Air_pressure_on_sea_level);
	Air_pressure_on_sea_level = Air_pressure_on_sea_level - 1000;

	Summary += "4";
	if (Air_pressure_on_sea_level < 1)Summary += "000" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else if (Air_pressure_on_sea_level < 10)Summary += "00" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else if (Air_pressure_on_sea_level < 100)Summary += "0" + Convert::ToString(Air_pressure_on_sea_level * 10);
	else Summary += Convert::ToString(Air_pressure_on_sea_level * 10);
	Summary += " ";
	return Summary;
}

//5appp 
						//5 � ������������� ����� ������
						//a � �������������� ���������� ��������� �� ��������� 3 ����;
						//ppp � �������� ���������� ��������� �� ��������� 3 ���� � ��� � ��������� �� ������� �����. 
String^ Struct_5appp(String^ Ok_Characteristic_of_baric_tendency,String^ Ok_Value_of_pressere_trend)
{
	String^ Summary;

	int Characteristic_of_baric_tendency;
	if (Ok_Characteristic_of_baric_tendency == "���� ����� �������(���� ������ �������)")Characteristic_of_baric_tendency = 0;
	else if (Ok_Characteristic_of_baric_tendency == "���� ����� ��� ���������")Characteristic_of_baric_tendency = 1;
	else if (Ok_Characteristic_of_baric_tendency == "���� ����� ����� ������� ����")Characteristic_of_baric_tendency = 2;
	else if (Ok_Characteristic_of_baric_tendency == "���� (����������� ��� �������������)")Characteristic_of_baric_tendency = 3;
	else if (Ok_Characteristic_of_baric_tendency == "������� ����� ����(���� ������ �������)")Characteristic_of_baric_tendency = 4;
	else if (Ok_Characteristic_of_baric_tendency == "��� ��������� ����� ����")Characteristic_of_baric_tendency = 5;
	else if (Ok_Characteristic_of_baric_tendency == "���� ����� ����� ������� ����")Characteristic_of_baric_tendency = 6;
	else if (Ok_Characteristic_of_baric_tendency == "������ (��� ��������) ���")Characteristic_of_baric_tendency = 7;
	else if (Ok_Characteristic_of_baric_tendency == "������� ����� ����(������� ������ �����)")Characteristic_of_baric_tendency = 8;
	else if (Ok_Characteristic_of_baric_tendency == "������� ����� ��� ���������")Characteristic_of_baric_tendency = 9;
	else if (Ok_Characteristic_of_baric_tendency == "������� ����� ����� ������� �������")Characteristic_of_baric_tendency = 10;
	else if (Ok_Characteristic_of_baric_tendency == "������� (����������� ��� �������������)")Characteristic_of_baric_tendency = 11;
	else if (Ok_Characteristic_of_baric_tendency == "���� ����� �������(������� ������ �����)")Characteristic_of_baric_tendency = 12;
	else if (Ok_Characteristic_of_baric_tendency == "��� ��������� ����� �������")Characteristic_of_baric_tendency = 13;
	else if (Ok_Characteristic_of_baric_tendency == "������� ����� ����� ������� �������")Characteristic_of_baric_tendency = 14;

	if (Characteristic_of_baric_tendency == 0)Characteristic_of_baric_tendency = 0;
	else if (Characteristic_of_baric_tendency == 1 || Characteristic_of_baric_tendency == 2)Characteristic_of_baric_tendency = 1;
	else if (Characteristic_of_baric_tendency == 3)Characteristic_of_baric_tendency = 2;
	else if (Characteristic_of_baric_tendency == 4 || Characteristic_of_baric_tendency == 5 || Characteristic_of_baric_tendency == 6)Characteristic_of_baric_tendency = 3;
	else if (Characteristic_of_baric_tendency == 7)Characteristic_of_baric_tendency = 4;
	else if (Characteristic_of_baric_tendency == 8)Characteristic_of_baric_tendency = 5;
	else if (Characteristic_of_baric_tendency == 9 || Characteristic_of_baric_tendency == 10)Characteristic_of_baric_tendency = 6;
	else if (Characteristic_of_baric_tendency == 11)Characteristic_of_baric_tendency = 7;
	else if (Characteristic_of_baric_tendency == 12 || Characteristic_of_baric_tendency == 13 || Characteristic_of_baric_tendency == 14)Characteristic_of_baric_tendency = 8;

	double Value_of_pressere_trend = Convert::ToDouble(Ok_Value_of_pressere_trend);

	Summary += "5";
	Summary += Convert::ToString(Characteristic_of_baric_tendency);
	if (Value_of_pressere_trend < 1)Summary += "00" + Convert::ToString(Value_of_pressere_trend * 10);
	else if (Value_of_pressere_trend < 10)Summary += "0" + Convert::ToString(Value_of_pressere_trend * 10);
	else Summary += Convert::ToString(Value_of_pressere_trend * 10);
	Summary += " ";

	return Summary;
}

//6RRRtR
									//6 � ������������� ����� ������
									//RRR � ���������� �������, �������� �� ������ tR
									//tR � ����������������� �������, �� ������� �������� ���������� �������, ��������� �� ����� RRR
String ^ Struct_6RRRtR(String ^ Ok_Number_of_precipitation, String ^ Duration_of_precipitation)
{
	String^ Summary;
	double Number_of_precipitation = Convert::ToDouble(Ok_Number_of_precipitation);
	if (Number_of_precipitation < 1)Number_of_precipitation = Number_of_precipitation * 10 + 990;
	else if (Number_of_precipitation <= 989)Number_of_precipitation = (int)Number_of_precipitation;
	else if (Number_of_precipitation > 989)Number_of_precipitation = 989;
	
	String^ Ok_Duration_of_precipitation;
	if (Duration_of_precipitation == "6")Ok_Duration_of_precipitation = "1";
	else if (Duration_of_precipitation == "12")Ok_Duration_of_precipitation = "2";
	else if (Duration_of_precipitation == "18")Ok_Duration_of_precipitation = "3";
	else if (Duration_of_precipitation == "24")Ok_Duration_of_precipitation = "4";
	else if (Duration_of_precipitation == "1")Ok_Duration_of_precipitation = "5";
	else if (Duration_of_precipitation == "2")Ok_Duration_of_precipitation = "6";
	else if (Duration_of_precipitation == "3")Ok_Duration_of_precipitation = "7";
	else if (Duration_of_precipitation == "9")Ok_Duration_of_precipitation = "8";
	else if (Duration_of_precipitation == "15")Ok_Duration_of_precipitation = "9";
	else Ok_Duration_of_precipitation = "/";

	Summary += "6";
	if (Number_of_precipitation < 10)Summary += "00" + Convert::ToString(Number_of_precipitation);
	else if (Number_of_precipitation < 100)Summary += "0" + Convert::ToString(Number_of_precipitation);
	else Summary += Convert::ToString(Number_of_precipitation);
	Summary += Ok_Duration_of_precipitation;
	Summary += " ";

	return Summary;
}

//7wwW1W2
						//7 � ������������� ����� ������
						//ww � ������� ������ (������ � ���� ���������� ��� � ������� ���������� ���� ����� ������ ����������)
						//W1W2 - ��������� ������ (������ � ������ ����� ������� ����������)
int Current_of_weather = 0;
int Past_of_weather = 0;
String^ Struct_7wwW1W2(String^ Ok_Current_of_weather, String^ Ok_Past_of_weather)
{
	String^ Summary;
	Current_of_weather = Convert::ToInt32(Ok_Current_of_weather);
	Past_of_weather = Convert::ToInt32(Ok_Past_of_weather);
	if (Ok_7wwW1W2 == 1)
	{
		Summary += "7";
		if (Current_of_weather < 10)Summary += "0" + Convert::ToString(Current_of_weather);
		else Summary += Convert::ToString(Current_of_weather);
		if (Past_of_weather < 10)Summary += "0" + Convert::ToString(Past_of_weather);
		else Summary += Convert::ToString(Past_of_weather);

		Summary += " ";
	}
	return Summary;
}

//8NhCLCMCH
						//8 � ������������� ����� ������
						//Nh � ���������� ������� CL ��� CM, ���� ������� CL ���
						//CL � ������ ������������� �������� � ������ ������� �����(����� ���������������)
						//CM � ������ �������� ����� � �������-�������� ������
						//CH � ������ �������� �����
String^ Struct_8NhCLCMCH(String^ Exact_amount_of_clouds, String^ Basement_of_clouds, String^ Middle_layer_of_clouds, String^ Top_of_cloud)
{
	String^ Summary;
	
	int Ok_Exact_amount_of_clouds;
	if (Exact_amount_of_clouds == "0 (������� ���)")Ok_Exact_amount_of_clouds = 0;
	else if (Exact_amount_of_clouds == "1 ��� �����(�� �� 0)")Ok_Exact_amount_of_clouds = 1;
	else if (Exact_amount_of_clouds == "2�3")Ok_Exact_amount_of_clouds = 2;
	else if (Exact_amount_of_clouds == "4")Ok_Exact_amount_of_clouds = 3;
	else if (Exact_amount_of_clouds == "5")Ok_Exact_amount_of_clouds = 4;
	else if (Exact_amount_of_clouds == "6")Ok_Exact_amount_of_clouds = 5;
	else if (Exact_amount_of_clouds == "7�8")Ok_Exact_amount_of_clouds = 6;
	else if (Exact_amount_of_clouds == "9 ��� �����(�� �� 10 ���� ��������)")Ok_Exact_amount_of_clouds = 7;
	else if (Exact_amount_of_clouds == "10 (��� ���������)")Ok_Exact_amount_of_clouds = 8;
	else if (Exact_amount_of_clouds == "���������� ���������� �� - �� ������ ������ ��� ������ ����������������� ������� ������������ ���������")Ok_Exact_amount_of_clouds = 9;
	else if (Exact_amount_of_clouds == "���������� ���������� �� ������ �������� ����� ���������(����� �������� �����) ��� ���������� �� �������������")Ok_Exact_amount_of_clouds = 10;

	int Ok_Basement_of_clouds;
	if (Basement_of_clouds == "������� ���")Ok_Basement_of_clouds = 0;
	else if (Basement_of_clouds == "������� �������")Ok_Basement_of_clouds = 1;
	else if (Basement_of_clouds == "������� ������� ��� ������� ������")Ok_Basement_of_clouds = 2;
	else if (Basement_of_clouds == "������-�������� �����")Ok_Basement_of_clouds = 3;
	else if (Basement_of_clouds == "�������-������� ��������������")Ok_Basement_of_clouds = 4;
	else if (Basement_of_clouds == "�������-������� ����������������")Ok_Basement_of_clouds = 5;
	else if (Basement_of_clouds == "�������� �������������� ��� ���������������� ��� ����������-��������")Ok_Basement_of_clouds = 6;
	else if (Basement_of_clouds == "�������� ����������-��������")Ok_Basement_of_clouds = 7;
	else if (Basement_of_clouds == "������� � �������-�������")Ok_Basement_of_clouds = 8;
	else if (Basement_of_clouds == "������-�������� ���������")Ok_Basement_of_clouds = 9;
	else if (Basement_of_clouds == "���������� ����������")Ok_Basement_of_clouds = 10;

	int Ok_Middle_layer_of_clouds;
	if (Middle_layer_of_clouds == "������� ���")Ok_Middle_layer_of_clouds = 0;
	else if (Middle_layer_of_clouds == "�������������� ��������������")Ok_Middle_layer_of_clouds = 1;
	else if (Middle_layer_of_clouds == "�������������� ���������������� ��� �������-��������")Ok_Middle_layer_of_clouds = 2;
	else if (Middle_layer_of_clouds == "������������� ���������������� ��������������  ���� ����")Ok_Middle_layer_of_clouds = 3;
	else if (Middle_layer_of_clouds == "������������� ���������������� ���������������� ��� ������������")Ok_Middle_layer_of_clouds = 4;
	else if (Middle_layer_of_clouds == "������������� ���������������� �������������� � ���� ���� (�����) ����� (��� ���������� ����) ��� ������������� ���������������� ���������������� ��������� ����")Ok_Middle_layer_of_clouds = 5;
	else if (Middle_layer_of_clouds == "������������� �������������� �������������� �� ������� ��� � �������� �������")Ok_Middle_layer_of_clouds = 6;
	else if (Middle_layer_of_clouds == "������������� ���������������� ���������������� ���� ���� ��� ������������� ���������������� �������������� ��������� ���� ��� ������������� ������ � ��������������� ��� �������-���������")Ok_Middle_layer_of_clouds = 7;
	else if (Middle_layer_of_clouds == "������������� �������������� ������������ ��� �������������")Ok_Middle_layer_of_clouds = 8;
	else if (Middle_layer_of_clouds == "������������� ��� ����������� ���� ����")Ok_Middle_layer_of_clouds = 9;
	else if (Middle_layer_of_clouds == "���������� ����������")Ok_Middle_layer_of_clouds = 10;

	int Ok_Top_of_cloud;
	if (Top_of_cloud == "������� ���")Ok_Top_of_cloud = 0;
	else if (Top_of_cloud == "�������� ����������� ���������� ������� �� �������������")Ok_Top_of_cloud = 1;
	else if (Top_of_cloud == "�������� ������� ������������")Ok_Top_of_cloud = 2;
	else if (Top_of_cloud == "�������� ������� �������������� �� ��������� �������������� �������")Ok_Top_of_cloud = 3;
	else if (Top_of_cloud == "�������� ����������� ������ � ����� ����������� � ���������������� �� ����� ����")Ok_Top_of_cloud = 4;
	else if (Top_of_cloud == "�������-�������� �����������")Ok_Top_of_cloud = 5;
	else if (Top_of_cloud == "�������-��������  �������������� ���������������� �� ���� � ����������� < 10 ������ ������ �������� ������ ������� ��� ���������� > 45 ����")Ok_Top_of_cloud = 6;
	else if (Top_of_cloud == "�������-��������  �������������� 10 ������")Ok_Top_of_cloud = 7;
	else if (Top_of_cloud == "�������-��������  �������������� �� ���������������� �� ���� < 10 ������")Ok_Top_of_cloud = 8;
	else if (Top_of_cloud == "�������-�������")Ok_Top_of_cloud = 9;
	else if (Top_of_cloud == "���������� ����������")Ok_Top_of_cloud = 10;

	Summary += "8";
	if (Ok_Exact_amount_of_clouds <10)Summary += Convert::ToString(Ok_Exact_amount_of_clouds);
	else Summary += "/";
	if (Ok_Basement_of_clouds <10)Summary += Convert::ToString(Ok_Basement_of_clouds);
	else Summary += "/";
	if (Ok_Middle_layer_of_clouds <10)Summary += Convert::ToString(Ok_Middle_layer_of_clouds);
	else Summary += "/";;
	if (Ok_Top_of_cloud < 10)Summary += Convert::ToString(Ok_Top_of_cloud);
	else Summary += "/";
	Summary += " ";

	return Summary;
}
