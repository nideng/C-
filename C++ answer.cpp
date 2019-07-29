//第二章
//1.函数
//2.预处理器将iostream文件的内容添加到程序中，在源代码被编译之前，替代或添加文本；
//3、程序可以使用std名称空间中的定义；
//4、cout<<"Hello, world"<<endl;
//5.int cheeses;
//6.chesses=32;
//7.cin>>cheeses;
//8.cout<<"We have "<<cheeses<<" varieties of cheeses,"<<endl;
//9.需要提供一个类型为double的参数，函数将回返回一个int值；需要提供一个int类型的参数，不返回参数；不需要提供参数，将返回一个int类型的值；
//10.函数返回类型为void；


/*
#include <iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string name, adress;
	getline(cin, name);
	getline(cin, adress);
	cout << "your name is " << name << endl;
	cout << "your adress is " << adress << endl;
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
int main()
{
	double longs;
	cout << "请输入距离:";
	cin >> longs;
	cout << "距离为： " << longs * 220 << "码。";
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
void blind();
void run();
int main()
{
	blind();
	blind();
	run();
	run();
	return 0;
}
void blind()
{
	cout << "Three blind mice" << endl;
}
void run()
{
	cout << "See how they run" << endl;
}
*/


/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter your age:";
	int age;
	cin >> age;
	cout << "Your age includes " << age * 12 << " months" << endl;
	return 0;
}
*/


/*
#include <iostream>
using namespace std;
float temperature;
float Fahrenheit(float temperature);
int main()
{
	cout << "Please enter a Celsius value:";
	cin >> temperature;
	cout << temperature << " degrees Celsius is " << Fahrenheit(temperature) << " degrees Fahrenheit." << endl;
	return 0;
}
float Fahrenheit(float temperature)
{
	return temperature * 1.8+32;
}
*/


/*
#include <iostream>
using namespace std;
double light_years, astronomical_units;
void light_to_astron(double i);
int main()
{
	cout <<  "Enter the number of light years:";
	cin >> light_years;
	light_to_astron(light_years);
	cout << light_years << " light years =" << astronomical_units << " astronomical units." << endl;
	return 0;
}
void light_to_astron(double i)
{
	astronomical_units = light_years * 63240;
}
*/


/*
#include <iostream>
using namespace std;
int hours, minutes;
void time(int i,int j);
int main()
{
	cout << "Enter the number of hours:";
	cin >> hours;
	cout<< "Enter the number of minutes:";
	cin >> minutes;
	time(hours, minutes);
}
void time(int i,int j)
{
	cout << "Time: " << i << ":" << j << endl;
}
*/



//第三章
//1.有多种整数类型，可以根据特定需求选择最适合的类型。
//2.short i=80; unsigned int j=42110; long long k=3000000000;
//3.C++没有提供自动防止超出整型限制的功能，可以使用头文件climits来确定限制情况；
//4.33L为long类型，33为int类型；
//5.在ASCII中等价；
//6.char i=88;cout<<i<<endl;  cout.put(char(88)); cout<<char(88)<<endl;
//7.不会，会
//8.74，4，0，4.5，3
//9.（int）x1+(int)x2 或者int(x1)+int(x2)   (int)(x1+x2)
//10.int,float,char,char32_t,double

/*
#include <iostream>
using namespace std;
const int inch_to_feet=12;
int main()
{
	int inches, feets;
	cout << "Enter your heights(feet):___\b\b\b";
	cin >> feets;
	inches = feets / inch_to_feet;
	feets = feets % inch_to_feet;
	cout << "your heights is " << inches << " and " << feets << " feets." << endl;

}
*/

/*
#include <iostream>
#include<cmath>
using namespace std;
const int inch_to_feet = 12;
const double feet_to_metre = 0.0254;
const double kilogram_to_pound = 2.2;
int inches,feets;
double pound;
int main()
{
	cout << "Enter the inch part of your height:___\b\b\b";
	cin >> inches;
	cout << "Enter the feet part of your height:___\b\b\b";
	cin >> feets;
	cout << "Enter your weight(pound):___\b\b\b";
	cin >> pound;
	cout << "Your height is " << inches << " inch and " << feets << " feets." << endl;
	cout << "so your height is " << (double)(inches * inch_to_feet + feets) * feet_to_metre << " metre." << endl;
	cout << "your weight is " << pound / kilogram_to_pound << " kilogram." << endl;
	cout << "your BMI is " << pow((pound / kilogram_to_pound) / ((double)(inches * inch_to_feet + feets) * feet_to_metre), (double)2) << endl;
	return 0;

}
*/

/*
#include <iostream>
using namespace std;
const int degree_to_minute = 60;
const int minute_to_second = 60;
int main()
{
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	int degree, minute, second;
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc:";
	cin >> second;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << ((double)second) / degree_to_minute / minute_to_second + ((double)minute) / degree_to_minute + degree <<" degrees"<< endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
const int days_to_hours = 24;
const int hours_to_minutes = 60;
const int minutes_to_seconds = 60;
int main()
{
	cout << "Enter the number of seconds: ";
	long seconds;
	cin >> seconds;
	cout << seconds << " seconds = " << seconds / (minutes_to_seconds * hours_to_minutes * days_to_hours) << " days, "
		<< (seconds % (minutes_to_seconds * hours_to_minutes * days_to_hours)) / (minutes_to_seconds * hours_to_minutes)<< " hours, "
		<< ((seconds % (minutes_to_seconds * hours_to_minutes * days_to_hours)) % (minutes_to_seconds * hours_to_minutes)) / minutes_to_seconds << " minutes, "
		<< ((seconds % (minutes_to_seconds * hours_to_minutes * days_to_hours)) % (minutes_to_seconds * hours_to_minutes)) % minutes_to_seconds << " seconds" << endl;
	return 0;

}
*/


/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population: ";
	long long world, US;
	cin >> world;
	cout<< "Enter the population of the US: ";
	cin >> US;
	cout << "The population of the US is " << (double)US/ world * 100 << "% of the world population." << endl;
	return 0;

}
*/


/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the miles of distance you have driven: ";
	double miles;
	cin >> miles;
	cout << "Enter the gallons of gasoline you have used: ";
	double gailons;
	cin >> gailons;
	cout << "you can run " << miles / gailons << " miles per gallon." << endl;
	return 0;

}
*/


//第四章
//1.char actor[30];short betsie[100];float chuck[13];long double dipsea[64]
//2.array<char,30>actor; array<short,100>betsie;array<float,13>chuck;array<long double,64>dipsea
//3.int a[5]={1,3,5,7,9}
//4.int even=a[0]+a[4];
//5.cout<<ideas[1]<<endl;
//6.char a[13]="cheeeseburger";
//7.string a="Waldorf Salad";
/*8.struct fish
{
char name[20];
int weight;
double length;
}
*/
/*9. fish fishes
{
"pangtouyu",
30,
25.6
}
*/
//10.enum Response {No,Yes,Maybe};
//11. double *pt=&ted;cout<<*pt<<endl;
//12.float treacle[10]; float *pt=treacle; cout<<pt[0]<<pt[9]<<endl;
//13.cout<<"Enter a number:"<<endl;int i;cin>>i;int *pt=new int [i];vector<int> a(size);
//14.打印字符串地址；
/*15.struct fish
{
char name[20];
int weight;
double length;
}
fish *pt=new fish;
cin>>pt->name;
*/
//16.跳过空白，直到找到非空字符，然后读取字符，直到再次遇到空字符。即只读取一个单词，而不是整行。
/*17.
#include<iostream>
#include<string>
#include<vector>
#include<array>
const int size=10;
std::vector<std::string>a(size);
std::array<std::string,size>a;
*/

//第一题和第二题
/*
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout << "What is your first name? ";
	string first_name;
	getline(cin, first_name);
	cout<< "What is your last name? ";
	char last_name[20];
	cin.getline(last_name, 20);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1)<<endl;
	cout << "Age: " << age;
	return 0;
}
*/

/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout << "Enter your first name? ";
	char first_name[20];
	cin.getline(first_name, 20);
	cout << "What is your last name? ";
	char last_name[20];
	cin.getline(last_name, 20);
	strcat(last_name, ", ");
	strncat(last_name,first_name, 20);
	cout << "Here's the information in a single string: " << last_name << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "Enter your first name? ";
	string first_name;
	getline(cin, first_name);
	cout << "What is your last name? ";
	string last_name;
	getline(cin, last_name);

	cout << "Here's the information in a single string: " << last_name+", "+first_name << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int calories;
};
int main()
{
	CandyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << snack.brand << "\n" << snack.weight << "\n" << snack.calories << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int calories;
};
int main() {
	CandyBar candy[3]
	{ {"Mocha Munch",2.3,350},{"Mocha Munch1",4,450},{"Mocha Munch2",5,500} };
	for (int i = 0;i < 3; i++)
	{
		cout << candy[i].brand << "\n" << candy[i].weight << "\n" << candy[i].calories << endl;
	}
	return 0;
}
*/


/*
#include<iostream>
#include<string>
using namespace std;
struct pizza
{
	string companyname;
	double diameter, weights;
};
int main() {
	pizza *pt = new pizza;
	cout << "Enter the company name of pizza: ";
	getline(cin,pt->companyname);
	cout << "Enter the diameter of pizza: ";
	cin >> pt->diameter;
	cout << "Enter the weight of pizza: ";
	cin >> pt->weights;
	cout << "The pizza's information:\n" << "Belongs to " << pt->companyname << ";\n" << "diamter is " << pt->diameter << " inches.\n" << "weight is " << pt->weights << " kg." << endl;
	delete pt;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct pizza
{
	string companyname;
	double diameter, weights;
};
int main() {
	pizza* pt = new pizza;
	cout << "Enter the diameter of pizza: ";
	cin >> pt->diameter;
	cin.get();
	cout << "Enter the company name of pizza: ";
	getline(cin, pt->companyname);
	cout << "Enter the weight of pizza: ";
	cin >> pt->weights;
	cout << "The pizza's information:\n" << "Belongs to " << pt->companyname << ";\n" << "diamter is " << pt->diameter << " inches.\n" << "weight is " << pt->weights << " kg." << endl;
	delete pt;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int calories;
};
int main() {
	CandyBar* candy = new CandyBar[3];
	candy[0] = { "Mocha Munch", 2.3, 350 };
	candy[1] = { "Mocha Munch1", 4, 450 };
	candy[2]={"Mocha Munch2", 5, 500};
	for (int i = 0; i < 3; i++)
	{
		cout << candy[i].brand << "\n" << candy[i].weight << "\n" << candy[i].calories << endl;
	}
	delete [] candy;
	return 0;
}
*/


/*
#include<iostream>
#include<array>
using namespace std;
int main() {
	array<double, 4>grade;
	for (int i = 0; i < 3; i++) {
		cout << "Enter the grade of " << i+1 << " time: ";
		cin >> grade[i];
	}
	grade[3] = (grade[0] + grade[1] + grade[2]) / 3;
	cout << "The average grade is: " << grade[3] << endl;
	return 0;
}
*/


//第五章
//1.输入条件循环在进入输入循环体之前将评估测试表达式。如果条件为false，循环不会执行其循环体；退出条件循环在处理循环体之后评估测试表达式。即使测试表达式最初为false，循环也执行1次。for和while是输入条件循环，do while是退出条件循环。
//2.01234
//3.0369
//    12
//4.6
//  8
//5.k = 8
//6.
/*
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 65; i=i * 2)
	{
		cout << i << endl;
	}
	return 0;
}
*/
//7.将语句放在一对大括号中；
//8.有效，x=20;y=1;
//9.cin>>ch跳过空格，换行符和制表符，其他两种格式将读取这些字符

/*
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b;
	int c = 0;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	for (int i = min(a, b); i <= max(a, b); i++)
	{
		c+=  i;
	}
	cout <<"The sum of numbers between "<< min(a,b) <<" and "<<max(a,b)
		<<" is: "<<c<<endl;
	return 0;
}
*/

/*
#include<iostream>
#include<array>
using namespace std;
const int ArSize = 101;
int main()
{
	array<long double,101> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum = 0;
	cout << "Enter an integer: ";
	cin >> num;
	while(num != 0)                                   //while ((cin >> num) && num != 0)
	{
		sum += num;
		cout << "so far the sum of input numbers is: " << sum << endl;
		cout << "Continue to enter an integer: ";
		cin >> num;
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int year;
	double Daphne[100];
	double Cleo[100];
	year = 0;
	Daphne[0] = 100;
	Cleo[0] = 100;
	do
	{
		Daphne[year + 1] = Daphne[year] + 10;
		Cleo[year + 1] = Cleo[year] * (1 + 0.05);
		year++;
	} while (Daphne[year] > Cleo[year]);
	cout << "After " << year << " years, the income of Cleo is higher than Daphne." << endl;
	cout << "The income of Daphne is " << Daphne[year] - 100 << endl;
	cout << "The income of Cleo is " << Cleo[year] - 100 << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
const int month_num = 12;
const char* months[month_num] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
int main()
{
	int sums = 0;
	int sales[month_num];
	for (int i = 0; i < month_num; i++)
	{
		cout << "Enter the sales of " << months[i] << ": ";
		cin >> sales[i];
		sums += sales[i];
	}
	cout << "The total sales of this year is: " << sums << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
const int month_num = 12;
const int year_num = 3;
const char* months[month_num] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
const char* years[year_num] = { "the first year","second year","third year" };
int main()
{
	int sums = 0;
	int sales[year_num][month_num];
	int year_sales[year_num];
	for (int i = 0; i < year_num; i++)
	{
		for(int j=0;j<month_num;j++)
		{
			cout << "Enter the sales of " << months[j] <<" in "<<years[i]<<": ";
			cin >> sales[i][j];
			sums += sales[i][j];
		}
		year_sales[i] = sums;
		cout << "The total sales of " << years[i] << " is: " << year_sales[i] << endl;
		sums = 0;
	}
	cout << "The total sales of this year is: " << year_sales[0]+year_sales[1]+year_sales[2] << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct car
{
	string producer;
	int year;
};
int main()
{
	cout << "How many cars do you wish to catalog? ";
	int num;
	(cin >> num).get();
	car* pt = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, pt[i].producer);
		cout << "Please enter the year made: ";
		(cin >> pt[i].year).get();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "Here is your collecton:";
		cout << pt[i].year << " " << pt[i].producer << endl;
	}
	delete[]pt;
	return 0;
}
*/


/*
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	char* word = new char[20];
	int sum = 0;
	cin >> word;
	while (strcmp(word, "done"))
	{
		sum++;
		cin >> word;
	}
	cout << "You entered a total of " << sum << " words." <<endl;
	delete[]word;
	return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	string word;
	int sum = 0;
	cin >> word;
	while (word!="done")
	{
		sum++;
		cin >> word;
	}
	cout << "You entered a total of " << sum << " words." << endl;
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	cout << "Enter number of rows:";
	int num;
	cin >> num;

	for (int i = 1; i <=num; i++)
	{

		for (int j = 1; j <= num-i; j++)
		{
			cout << ".";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/

//第六章
//1.if else版本的效率更高。例如，考虑当ch为空格时的情况。版本1对空格加1，然后看它是否为换行符。浪费效率。
//2.打印输入的字符串+1的数字；
//3.H$i$!$
// $S$e$n$d$ $Ct1 = 9, ct2 = 9
//4.weight>=115&&weight<125;
//  ch='q'||ch='Q';
//  x%2==0&&(x!=26);
//  x%2==0&&((x%26)!=0);
//  (donation>=1000&&donation<=2000)||(guest==1);
// (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')
//5.当x不为bool变量时，两者不同，否则相同；
//6.if（x>0） x=x;else if(x<0) x=-x; (x>0)?x;-x;
//  7.switch(ch)
//   {
//  case 'A':a_grade++;
//	  break;
//  case 'B':b_grade++;
//	  break;
//  case 'C':c_grade++;
//  	break;
//  case 'D': d_grade++;
//  		break;
//  default: f_grade++;
//	  break;
//  }

//8.如果使用整数标签，用户输入了非整数，程序将不能处理字符而高高挂起。如果使用字符标签，输入整数程序也能处理；
//9.int line=0;
//  char ch;
// while(cin.get(ch)&&ch!='Q')
//{
//if (ch == '\n')
//line++;
//}

/*
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout << "Enter text, and type @ to terminate input." << endl;
	while ((ch=cin.get())!='@')
	{
		if(islower(ch))
		{
			ch = toupper(ch);
			cout << ch;
		}
		else if (isupper(ch))
		{
			ch=tolower(ch);
			cout << ch;
		}
			
		else
			cout << ch;
	}
	return 0;
}
*/

/*
#include<iostream>
#include<cctype>
using namespace std;
const int Arsize = 10;
int main()
{
	double donation[Arsize];
	int temp;
	int i = 0;
	int sums = 0,count=0;
	cout << "Enter the donation(Program terminates when you make\n" << Arsize << " entries" << " or not enter a number." << endl;
	while (cin>>temp&&i < Arsize&&(!isdigit(temp)))
	{
		donation[i] = temp;
		sums += donation[i];
		++i;
	}
	if (i == 0)
	cout << "No data--bye" << endl;
	else
	{
		for (int j = 0; j < i; j++)
		{
			if (donation[j] > sums / i)
				count++;

		}
		cout << count << " of neighbors are greater than the average value." <<endl;
	}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore          p) pianist" << endl;
	cout << "t) tree               g) game" << endl;
	char ch;
	cin >> ch;
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> ch;
	}
	switch (ch)
		{
		case 'c': cout << "A maple is a carnivore."<<endl;
			break;
		case 'p':cout << "A maple is a pianist."<<endl;
			break;
		case 't':cout << "A maple is a tree." << endl;
			break;
		case 'g':cout << "A maple is a game." << endl;
			break;
		}
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
const int strsize = 30;
void display_choice();
char ch;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
bop member[5] = 
{
	{"Wimp Macho", "English Teacher", "DEMON", 0},
    {"Raki Rhodes", "Junior Programmer","BOOM",1},
    {"Celia Laitr","Super Star","MIPS",2},
    {"Hoppy Hipman","Analyst Trainee","WATE",1},
    {"Pat Hand","Police","LOOPY",2}
};
int main()
{
	display_choice();
	cout << "Enter your choice: ";
	while (cin >> ch && ch != 'q')
	{
		switch (ch)
		{
		case 'a':
			for (int i = 0; i < 5; i++)
			{
				cout << member[i].fullname << endl;
			};
			break;
		case 'b':
			for (int i = 0; i <5; i++)
			{
				cout << member[i].title << endl;
			};
			break;
		case 'c':
			for (int i = 0; i < 5; i++)
			{
				cout << member[i].bopname << endl;
			}
			break;
		case 'd':
			for(int i=0;i<5;i++)
			switch (member[i].preference)
			{
			case 0: cout << member[i].fullname << endl;
				break;
			case 1:cout << member[i].title << endl;
				break;
			case 2:cout << member[i].bopname << endl;
				break;
			}
		}
		cout << "Next choice: ";
	}
	cout << "Bye!" << endl;
	return 0;
	}
void display_choice()
{
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name      b.display by title" << endl;
	cout << "c. display by bopname    d.display by preference" << endl;
	cout << "q. quit" << endl;
}
*/

/*
#include<iostream>
using namespace std;
double tvarps(int tvarp);
int main()
{
	cout << "Enter your income, inputing a negative number or nondigit to terminate the program:";
	int tvarp;
	while (cin >> tvarp && tvarp >= 0)
	{
		cout << "Your tax is " << tvarps(tvarp) << " tvarps." << endl;
		cout << "Continue to enter the income " << endl;
	}
	cout << "Bye" << endl;
	return 0;
}
double tvarps(int tvarp)
{
	if (tvarp <= 5000)
		return (double)0;
	else if (tvarp >= 5001 && tvarp <= 15000)
		return (double)(tvarp - 5000) * 0.1;
	else if (tvarp >= 15001 && tvarp <= 35000)
		return (double)((tvarp - 15000) * 0.15 + 10000 * 0.1);
	else return (double)((tvarp - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1);
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
struct donator
{
	string name;
	double donate_limit;
};
int main()
{
	cout << "Please input the total number of donators: ";
	int num;
	cin >> num;
	cin.get();
	donator* pt = new donator[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Input the donator's name: ";
		getline(cin, pt[i].name);
		cout << "Input the " << pt[i].name << "'s donate limit: ";
		cin >> pt[i].donate_limit;
		cin.get();
	}
	cout << "Grand Patrons" << endl;
	int temp = 0;
	for (int i=0;i < num;i++)
	{
		if (pt[i].donate_limit > 10000)
		{
			cout << pt[i].name << endl;
			temp++;
		}

	}
			if (temp == 0)
			cout << "none" << endl;
	cout << "Patrons" << endl;
	
	for (int i = 0; i < num; i++)
	{
		if (pt[i].donate_limit <= 10000)
		{
			cout << pt[i].name << endl;
			temp++;
		}
	}
	
		if (temp == 0)
			cout << "none" << endl;
	delete[]pt;
	return 0;
}

*/

/*
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
	cout << "Enter words (q to quit):" << endl;
	string ch;
	int vowel_sums = 0;
	int consonant_sums = 0;
	int other_sum = 0;
	while (cin>>ch&&ch!= "q")
	{
		if (isalpha(ch[0]))
		{
			if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u')
				vowel_sums++;
			else consonant_sums++;
		}
		else other_sum++;
	}
	cout << vowel_sums << " words beginning with vowels" << endl;
	cout << consonant_sums << " words beginning with consonants" << endl;
	cout << other_sum << " others" << endl;
	return 0;
}
*/

/*
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	ifstream infile;
	infile.open("seven_chapter.txt");
		if (!infile.is_open())
		{
			cout << "Could not open the file seven_chapter" << endl;
			cout << "Program terminating." << endl;
			exit(EXIT_FAILURE);
		}
		char ch;
		int sums = 0;
		infile >> ch;
		while (infile.good())
		{
			sums++;
			infile >> ch;
	}
		if (infile.eof())
			cout << "End of file reached." << endl;
		else if (infile.fail())
			cout << "Input terminated by data mismatch." << endl;
		else
			cout << "Input terminated for unknown reason." << endl;
		if (sums == 0)
			cout << "No data processd." << endl;
		else
			cout << "There are " << sums << " chars in the file." << endl;

}
*/

/*
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
struct donator
{
	string name;
	double donate_limit;
};
int main()
{
	ifstream infile;
	infile.open("donate_information.txt");
	int num;
	infile >> num;
	infile.get();
	int i = 0;
	donator* pt = new donator[num];
	while (infile.good())
	{
		
		getline(infile,pt[i].name);
		infile >> pt[i].donate_limit;
		infile.get();
		i++;
	}
	cout << "Grand Patrons" << endl;
	int temp = 0;
	for (int i = 0; i < num; i++)
	{
		if (pt[i].donate_limit > 10000)
		{
			cout << pt[i].name << endl;
			temp++;
		}

	}
	if (temp == 0)
		cout << "none" << endl;
	cout << "Patrons" << endl;

	for (int i = 0; i < num; i++)
	{
		if (pt[i].donate_limit <= 10000)
		{
			cout << pt[i].name << endl;
			temp++;
		}
	}

	if (temp == 0)
		cout << "none" << endl;
	delete[]pt;
	return 0;
}
*/