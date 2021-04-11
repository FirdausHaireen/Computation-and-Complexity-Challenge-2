/* Name: Muhammad Nur Firdaus Bin Muhamed Haireen 
Matric No: 1815259*/
#include <iostream>
using namespace std;

void accepted()
{
 	cout << "You will have to quarantine";
	exit;   

}

void rejected()
{
 	cout << "You don't have to quarantine";
	exit;   
}

void fifthquest()
{
    char answer;
    cout << "Are you experiencing any symptoms? (Y/N) ";
    cin >> answer;
    if (answer == 'y' ||  answer == 'Y')
    {
    	 accepted();
	}
	
	else
	{
		 accepted();
	}
}

void fourthquest()
{
    char answer;
    cout << "Were you wearing a mask? (Y/N) ";
    cin >> answer;
    if (answer == 'n' ||  answer == 'N')
    {
    	 fifthquest();
	}
	
	else
	{
		 accepted();
	}
}

void thirdquest()
{
    char answer;
    cout << "Was the person wearing a mask? (Y/N) ";
    cin >> answer;
    if (answer == 'n' ||  answer == 'N')
    {
    	 fourthquest();
	}
	
	else
	{
		 rejected();
	}
}

void secquest()
{
    char answer;
    cout << "Was the contact longer than 15 mins? (Y/N) ";
    cin >> answer;
    if (answer == 'y' ||  answer == 'Y')
    {
    	 thirdquest();
	}
	
	else
	{
		 rejected();
	}
}

void firstquest()
{
	char answer;
    cout << "Do you have a close contact with a Covid paitent? (Y/N) ";
    cin >> answer;
    if (answer == 'y' ||  answer == 'Y')
    {
    	secquest();
	}
	
	else
	{
		rejected();
	}
	
}

int main()
{
	cout << "This is the Covid 19 risk assessment, do answer the questions honestly. Thank you :)\n";
	cout << "Do note that Y is for Yes and N is for No when asnwering the questions. \n";
	firstquest();
	return 0;
}

