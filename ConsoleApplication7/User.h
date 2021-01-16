#pragma once
#include <string>

class User
{
private:
	std::string password;
	std::string login;
	int age; 
	std::string adress;
	std::string first_name;
	std::string second_name;
	std::string mail;
	int post_code;
	int number_phone;


public:
	User(std::string login,std::string passoword, std::string first_name, std::string second_name, int number_phone, std::string adress, int post_code); // constructor
	std::string Change_Password(std::string login, std::string passoword, std::string new_password);
	bool Check_Login(std::string login, std::string passoword);

protected:




};

