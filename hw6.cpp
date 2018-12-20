#include <iostream>
#include <string>
#include <fsteam>
#include "hw6.h" 

using namespace std;

class Userdata
{
  std::string user_name;
  int user_id;
  std::string user_phonenumber;
}

public: user()
{
  std:: string & input_name;
  int input_id;
  std:: string input_phonenumber;
  int input_zip_code;
  std:: string input_bloodtype;
  std:: string input_address;
}

userdata(input_name, std:: string_input_id, input_phonenumber)
{
  zipcode = input_zip_code
  bloodtype = input_bloodtype
  address = input_address
}

std:: string user::get_zip_code()
{
  return zipcode;
}
std:: string user::get_bloodtype()
{
  return bloodtype;
}
std:: string user::get_address()
{
  return address;
}

for(int i = 0; i < 5; i++)
{
  cout << "Enter name: " \n;
  cin >> file;
  myfile.open("file.h")
  if (myfile. is_open())
  {
    std:: getline(myfile, name);
    std:: getline(myfile, id);
    std:: getline(myfile, phonenumber);
    std:: getline(myfile, zipcode);
    std:: getline(myfile, bloodtype);
    std:: getline(myfile, address);
    myfile.close();
  }
  else
  cout << "unable to open file: " \n;

  list.push_back(user(name, id, phonenumber, zipCode, bloodType, address));
  cout << list.push_back(user) \n;
}
