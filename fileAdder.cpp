/******************************************
 * **Author: Alexandria Marsh
 * **Date: January 23 2015
 * **Description: Read values from nums.txt and calculate sum of values
 * **      which will display in sum.txt.
 * *****************************/

#include <iostream>
#include <fstream>  //to use files
#include <string>

int main()
{

	double  num, 
		sum=0;

	//open input file
	std::ifstream input;
	input.open("nums.txt");

	//open output file
	std::ofstream output;
	output.open("sum.txt");
	
	//test if input file was opened
	if (input)
	{
	  std::cout<<"Input file successfully opened."<<std::endl;
	  while (input >> num)
	    {
		sum += num;
	    }	 
	  //write the sum amount to the file
	  output<<"The sum of the values is "<<sum<<"."<<std::endl; 	
	}

	else
	{
	  std::cout<<"Error opening Input file."<<std::endl;
	}

	//test if output file was opened
	if(output)
	{
	  std::cout<<"Output file successfully opened."<<std::endl;
	}
	else
	{
	  std::cout<<"Error opening Output file."<<std::endl;
	}  

	input.close();
	output.close();

	std::cout<<"The sum of the values is "<<sum<< "."<<std::endl;

	return 0;
}
