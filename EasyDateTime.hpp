/*! Basic date time class for elementary purposes. 
* \file EasyDateTime.hpp
* \author Maksym Rasakhatskyi
* \version 1.0 31/03/20
*/

#ifndef DATETIME_HPP
#define DATETIME_HPP

#include <ctime>
#include <iostream>
#include <string>

/*! Basic date time class for elementary purposes. */
class DateTime
{
public:
	/*! Number of years - 2000.*/
    unsigned short Years;
	
	/*! Number of months.*/
    unsigned char Months;
	
	/*! Number of days.*/
	unsigned char Days;
	
	/*! Number of hours.*/
	unsigned char Hours;
	
	/*! Number of minutes.*/
	unsigned char Minutes;
	
	/*! Number of secons.*/
	unsigned char Seconds;
	
	/*! Integer that contains time.*/
    int Time;

	/*! Constructor. Defines everything as 0.*/
    DateTime();
	
	/*! Constructor. Sets time by integer time value.
	\param time Special integer time value.
	*/
    DateTime(int time);
	
	/*! Constructor. Parses time from format "yyyy-MM-dd HH:mm:ss".
	* \param time String date time value in format "yyyy-MM-dd HH:mm:ss".
	*/	
	DateTime(std::string time);
	
	/*! Constructor. Sets each variable.
	* \param year Year.
	* \param month Month 1-12.
	* \param day Day 1-31.
	* \param hour Hour 0-23.
	* \param minute Minute 0-59.
	* \param second Second 0-59.
	*/	
    DateTime(int year, int month, int day, int hour, int minute, int second);
	
	
    ~DateTime();

	/*! Converts date time to string format "yyyy-MM-dd HH:mm:ss".
	* \returns Date in string format.
	*/
    std::string ToString();
	
	/*! Allows modify date and time.
	* \param year Year.
	* \param month Month 1-12.
	* \param day Day 1-31.
	* \param hour Hour 0-23.
	* \param minute Minute 0-59.
	* \param second Second 0-59.
	*/
    void SetTime(int year, int month, int day, int hour, int minute, int second);
	
	/*! Comparison operator date BEFORE.
	* \returns true if left date is less than right.
	*/
    bool operator <(DateTime right);
	
	/*! Comparison operator date AFTER.
	* \returns true if left date is more than right.
	*/
    bool operator >(DateTime right);
	
	/*! Comparison operator date EQUAL.
	* \returns true if left date is equal to right.
	*/
    bool operator ==(DateTime right);
};

#endif //DATETIME_HPP