#include "User.h"
#include <string>

std::string User::Change_Password(std::string login, std::string passoword,std::string new_password)
{
	if (User::Check_Login(login,passoword) == true)
	{
		this->password = new_password;
		return "DONE, Password has been changed!";
	}
	else
	{
		return "Unable to authorize! Check your password and try again!";
	}

}
User::User(std::string login, std::string passoword, std::string first_name, std::string second_name, int number_phone, std::string adress, int post_code)
{
	this->login = login;
	this->password = password;
	this->first_name = first_name;
	this->second_name = second_name;
	this->number_phone = number_phone;
	this->adress = adress;
	this->post_code = post_code;
}
bool User::Check_Login(std::string login, std::string passoword)
{
	if (this->login == login && this->password == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}
