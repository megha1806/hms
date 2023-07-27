#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
string userid,password,id,pass,date,problem, address,p_name;
int age,doc;
long long int number;
class loginn
{
	public:
	void login();
	void registr();
	void forgot();
};

class hospital
{
public:
    void payment();
    void hospital_details();
    void patient_search();
    void patient_appoint();
};

class doctor : public hospital
{
public:
    void view_doctors_list();
};


void hospital::payment()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,3);
    int amount;				
	cout<<"\t\t\tPatient Name: "<<p_name<<endl<<endl;
    cout<<"\t\t\tPatient Problem: "<<problem<<endl<<endl;
    cout<<"\t\t\tEnter Amount of treatment: ";
    cin>>amount;							
    cout<<endl;			
    cout<<"\t\t\tEnter Your Mobile Number: ";
    cin>>number;			
    cout<<endl;

    cout<<"\n\t\t\tPayment Successful, Thank You!"<<endl<<endl;
    cout<<"\t\t\t"<<p_name<<endl;
    cout<<"\t\t\tNitte Hospital and Research Centre"<<endl;
    cout<<"\t\t\t\tNitte,Karkala-574110"<<endl;
    cout<<"\t\t\t------------------------------------"<<endl;
    cout<<"\t\t\t|    Patient Name:          |"<<p_name<<endl;
    cout<<"\t\t\t|    Patient Problem:       |"<<problem<<endl;
    cout<<"\t\t\t|    Payment Amount:        |"<<amount<<endl;
    cout<<"\t\t\t|    Mobile:                |"<<number<<endl;
    cout<<"\t\t\t------------------------------------"<<endl;
    cout<<"\n\t\t\tThank You!"<<endl;

}

void hospital::hospital_details()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,4);
    cout<<"\t\t\tNitte Hospital and Research Centre is one of the foremost tertiary hospitals in India."<<endl;
    cout<<"\t\t\tThis leading institution provides state of the art health care treatment"<<endl;
    cout<<"\t\t\tand facilities across 30 major medical disciplines."<<endl;
    cout<<"\t\t\t\tThe hospital began in 2002 and today it stands as a unique center of medical excellence."<<endl;
    cout<<"\t\t\tThe hospital has well-equipped facilities and expert doctors. These hospitals are considered "<<endl;
    cout<<"\t\t\tthe best places for effective treatment.The doctors and nurses do their work with a dedication"<<endl;
    cout<<"\t\t\tand maintains the pleasant atmosphere of the hospital so that the patients feel"<<endl;
    cout<<"\t\t\tcomfortable and better"<<endl;
}

main()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,11);
    int choice;
    loginn l;
        cout<<"***********************\n\n\n";
        cout<<"           WELCOME TO NITTE HOSPITAL AND RESEARCH CENTRE             \n\n";
        cout<<"***********************\n\n\n";
        cout<<"                 HOSPITAL PORTAL LOGIN                              \n\n";
        cout<<"1.REGISTER"<<endl;
        cout<<"2.LOGIN"<<endl;
        cout<<"3.FORGOT PASSWORD"<<endl;
        cout<<"4.EXIT"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                         l.registr();
                        break;
                case 2:
                        l.login();
                        break;
                case 3:
                        l.forgot();
                        break;
                case 4:
						
                        cout<<"\t\t\t ThankYou!!!\n\n";
                        exit(0);
                        break;
                default:
                        system("cls");
                        cout<<"\tINVALID CHOICE! Please select from the options above\n"<<endl;
                        main();
        }
    }
    
void hospital::patient_appoint()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,14);
	system("cls");
    int docname;
    fstream file;
    cout << "\t\t\tEnter Name: ";
    cin.ignore();
    getline(cin,p_name);
    cout << "\t\t\tEnter Age.: ";
    cin >> age;
    cout << "\t\t\tEnter problem: ";
    cin.ignore();
    getline(cin,problem);
    cout << "\t\t\tEnter address: ";
    getline(cin,address);
    cout << "\t\t\tEnter Contact No: ";
    cin>>number; 
    cout <<"\t\t\tenter date:";
    cin>>date;
    SetConsoleTextAttribute(hc,3);
	cout<<"\n\t\t\tSelect A Doctor For Appoint: \n\t\t\t1. Dr. Lauren Alana Dsouza \n\t\t\t2. Dr. Sushmitha M \n\t\t\t3. Dr. Megha S \n\t\t\t4. Dr. Shashwathi N \n\t\t\t5. Dr. Manasa Rao \n\t\t\t6. Dr. Ashwitha Nayak T \n\t\t\t7. Dr. Ashwiz \n\t\t\t8. Dr. Manan \n\t\t\t9. Dr. Ranjith Kumble \n\t\t\t10. Dr. Pratyush Padmashali\n";
		        cin>>docname;
		        if(docname==1)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << ","<< " Dr. Lauren Alana Dsouza"<< ","  << address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==2)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem  <<","<< "Dr. Sushmitha M "<< "," << address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==3)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem <<","<< "Dr. Megha S " << "," << address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==4)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem <<","<< "Dr. Shashwathi N"<< ","  << address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==5)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem <<","<< "Dr. Manasa Rao "<< "," << address << ";" << number << "," << date  <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==6)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << "," << "Dr. Ashwitha Nayak T"<<","<< address << ";" << number << "," << date  <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==7)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << ","<< " Dr. Ashwiz" <<"," << address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==8)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << "," << " Dr. Manan Shridhar Shetty"<<","<< address << ";" << number << "," << date  <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==9)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << "," << "Dr. Ranjith Kumble" <<","<< address << ";" << number << "," << date <<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else if(docname==10)
		        {
		        	file.open("patientdetails.txt", ios::app | ios::out);
		        	file << p_name << "," << age << "," << problem << ","  << "Dr. Pratyush Padmashali" <<","<< address << ";" << number << "," << date<<"\n";
		        	cout<<"\t\t\tOkay, Thank You!!!. We'll call you for confirmed Appointment after sometime!"<<endl;
		        	file.close();
				}
				else
				{
					cout<<"Default";
				}
}
void hospital_menu()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,5);
	int answer, x;
	int docname;
	hospital obj;
	doctor pat;
	fstream file;
	while(1)
	{	
        system("cls");
        cout<<"\t\t\t\t\t\t____________"<<endl<<endl;
        cout<<"\n\t\t\t\t\t\tWELCOME! HOW CAN WE HELP YOU?"<<endl;
        cout<<"\t\t\t\t\t\t____________"<<endl<<endl;
        cout<<"\t\t\t\t\t\t1. Hospital Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t2. Doctors list"<<endl<<endl;
        cout<<"\t\t\t\t\t\t3. Appointment Booking(OPD)"<<endl<<endl;
        cout<<"\t\t\t\t\t\t4. Treatment Payment"<<endl<<endl;
        cout<<"\t\t\t\t\t\t5. Patient Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t6. Exit"<<endl<<endl;
        cout<<"\n\t\t\t\t\tEnter your choice: ";
        cin>>answer;
    	switch(answer)
    	{
    	case 1: cout<<"\n\t\t\t1. Hospital Details"<<endl;
        cout<<"\t\t\t__________"<<endl<<endl;
        obj.hospital_details();
        break;
        case 2: cout<<"\n\t\t\t1. Doctors list"<<endl;
        cout<<"\t\t\t__________"<<endl<<endl;
        pat.view_doctors_list();
        break;
        case 3:
		        pat.patient_appoint();
		        break;
		       
        case 4: cout<<"\n\t\t\t3. Treatment Payment"<<endl;
        cout<<"\t\t\t_________"<<endl<<endl;
        obj.payment();
        break;
        case 5:cout<<"\n\t\t\t4. Patient Details"<<endl;
        cout<<"\t\t\t_________"<<endl<<endl;
        obj.patient_search();
        case 6:
        	exit(0);
        default:
            cout<<"\t\t\t INVALID CHOICE. Try Again!"<<endl<<endl;
            break;
    }
    Sleep(2000);
    cout<<"\n\t\t\tDo you want to go to the hospital menu?: Press 'n' or 'N' for no ";
    x=getch();

    if(x == 'n' || x == 'N')
    {
        exit(0);
    }
    else
    {
    	hospital_menu();
	}
}
}


void loginn::login()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,7);
        int count;
        string userid,password,id,pass;
        system("cls");
        cout<<"please enter the following details"<<endl;
		cout<<"USERNAME :";
	    cin>>userid;
		cout<<"PASSWORD :";
		cin>>password;
		cout<<"The entered password is:\n"<<password;
		
		ifstream input("database.txt");
        while(input>>id>>pass)
        {
            if(id==userid && pass==password)
				{
                        count=1;
                }
    	}
        input.close();
        if(count==1)
        {
        	cout<<"\nHELLO"<<userid<<"\nLOGIN SUCCESSFUL \nThanks for logging in...\n";
        	Sleep(3000);
        	hospital_menu();
		}
		else
		{
			cout<<"LOGIN ERROR! PLease check your username and password!";
			Sleep(3000);
			forgot();
		}
}

void loginn:: registr()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,3);
		string ruserid,rpassword,rid,rpass;
        system("cls");
        cout<<"Enter the username:";
        cin>>ruserid;
        cout<<"Enter the password:";
        cin>>rpassword;
    	ofstream f1("database.txt",ios::app);
        f1<<ruserid<<' '<<rpassword<<endl;
        cout<<"\n***REGISTRATION SUCCESSFUL***\n";
        Sleep(2000);
        system("cls");
        main();
}

void loginn:: forgot()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,8);
        int option;
        system("cls");
        cout<<"Did you forget?? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>option;
        switch(option)
        {
                case 1:
                {
                        int count=0;
                        string searchuserid,sid,spass;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuserid;

                        ifstream f2("database.txt");
                        while(f2>>sid>>spass)
                        {
                                if(sid==searchuserid)
                                {
                                        count=1;
                                }
                        }
                        f2.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<spass;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
 
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
				case 2:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        main();
        }
}

void doctor::view_doctors_list()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,2);
    cout<<"\t\t\t1.  Dr. Lauren Alana Dsouza  \t\t*Ophthalmologist*"<<endl<<endl;
    cout<<"\t\t\t2.  Dr. Sushmitha M          \t\t*Cardiac Surgeon*"<<endl<<endl;
    cout<<"\t\t\t3.  Dr. Megha S              \t\t*Endocrinologist*"<<endl<<endl;
    cout<<"\t\t\t4.  Dr. Shashwathi N         \t\t*Medical Gastroenterology*"<<endl<<endl;
    cout<<"\t\t\t5.  Dr. Manasa Rao           \t\t*Nephrologist*"<<endl<<endl;
    cout<<"\t\t\t6.  Dr. Ashwitha Nayak T     \t\t*Neurologist*"<<endl<<endl;
    cout<<"\t\t\t7.  Dr. Ashwiz               \t\t*Oncologist*"<<endl<<endl;
    cout<<"\t\t\t8.  Dr. Manan Shridhar Shetty\t\t*Pediatrician*"<<endl<<endl;
    cout<<"\t\t\t9.  Dr. Ranjith B K          \t\t*Plastic Surgeon*"<<endl<<endl;
    cout<<"\t\t\t10. Dr. Pratyush Padmashali \t\t*Emergency Medicine*"<<endl<<endl;
    Sleep(3000);
    hospital_menu();
}

void hospital::patient_search()
{
	HANDLE hc=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hc,11);
	char line[500];
    string search;
    int i,x;

    cout<<endl<<"Patient Details"<<endl<<endl;

    ifstream infile;

    infile.open("patientdetails.txt");
    cout<<"\t\t\tEnter the name of the patient you want to search: ";
    cin.ignore();
    getline(cin,search);
	
    if (infile.is_open())
	{
        while ( !infile.eof())
        {
            infile.getline(line, 500, ','); 
            for (i = 0;line[i] == search[i];i++)
            {
                if (search[i] == '\0')
                {
                    cout << "\t\t\tMatch found!" << endl;
                    cout <<"\t\t\tPatient name:"<< line << endl;
                    infile.getline(line, 500, ',');
                    cout <<"\t\t\tAge:"<< line << endl;
                    infile.getline(line, 500, ',');
                    cout <<"\t\t\tProblem:"<< line << endl;
                    infile.getline(line, 500, ',');
                    cout <<"\t\t\tDoctor visited:" << line << endl;
                    infile.getline(line, 500, ';');
                    cout <<"\t\t\tAddress:"<< line << endl;
                    infile.getline(line, 500, ',');
                     cout <<"\t\t\tNumber:" << line << endl;
                    infile.getline(line, 500, '\n'); 
                    cout <<"\t\t\tDate:" <<line << endl;
                    Sleep(2000);
				    cout<<"\n\t\t\tDo you want to go to the hospital menu?: Press 'n' or 'N' for no ";
				    x=getch();
				
				    if(x == 'n' || x == 'N')
				    {
				        exit(0);
				    }
				    else
				    {
				    	hospital_menu();
					}
				                    
                }
            }
           
            for (int j = 0;j < 3;j++) 
			infile.getline(line, 500, ',');
            infile.getline(line, 500, '\n');
        }
        cout << "Match not found!" << endl;
        Sleep(2000);
        hospital_menu();
    }
    else
    {
        cout << "Unable to open the file" << endl;
        hospital_menu();
        Sleep(2000);
    }
    infile.close();
}
