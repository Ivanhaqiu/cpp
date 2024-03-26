#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include "circle.h"
#include "person.hpp"

using namespace std;

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//void printStudent1(student s)
//{
//	cout << s.name << s.age << s.score << endl;
//}
//
//void printStudent2(const student *p)
//{
//	cout << p->name << p->age << p->score << endl;
//}
//
//int main()
//{
//	struct student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 85;
//	printStudent1(s);
//	printStudent2(&s);
//	return 0;
//}

//struct Student
//{
//	string sName;
//	int score;
//};
//
//struct Teacher
//{
//	string tName;
//	struct Student sArray[5];
//};
//
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//
//		for (int k = 0; k < 5; k++)
//		{
//			tArray[i].sArray[k].sName = "Student_";
//			tArray[i].sArray[k].sName += nameSeed[k];
//
//			int random = rand()%61 + 40;
//			tArray[i].sArray[k].score = random;
//		}
//	}
//}
//
//void printInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
//			" 学生成绩：" << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printInfo(tArray, len);
//	return 0;
//}

//struct hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//void bubbleSort(struct hero arr[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len-1-i; j++)
//		{
//			if (arr[j].age>arr[j+1].age)
//			{
//				hero tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void printHero(struct hero arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i].name << '\t' << arr[i].age << '\t' << arr[i].sex << endl;
//	}
//}
//
//int main()
//{
//	struct hero arr[5] =
//	{
//		{"刘备", 23, "男"},
//		{"关羽", 22, "男"},
//		{"张飞", 20, "男"},
//		{"赵云", 21, "男"},
//		{"貂蝉", 19, "女"},
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	bubbleSort(arr, len);
//	printHero(arr, len);
//	return 0;
//}

//int* func()
//{
//	int *p = new int(10);
//	return p;
//}
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//
//
//	cout << *p << endl;
//
//	int* arr = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	return 0;
//}

//int& ref()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int &a = ref();
//	cout << a << endl;
//	cout << a << endl;
//	ref() = 1000;
//	cout << a << endl;
//	cout << a << endl;
//	return 0;
//}

//void show( const int& val)
//{
//	cout << val << endl;
//}
//
//int main()
//{
//	int a = 100;
//	show(a);
//	cout << a << endl;
//	return 0;
//}

//void func(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
//
//int main()
//{
//	func(10);
//	return 0;
//}

//函数重载
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func调用 int a" << endl;
//}
//
//int main()
//{
//	func();
//	func(10);
//	return 0;
//}

//void func(int& a)
//{
//	cout << "func(int &a) 调用" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int &a) 调用" << endl;
//}
//
//void func2(int a, int b = 10)
//{
//	cout << "func2 (int a, int b = 10)" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2 (int a)" << endl;
//}
//
//
//int main()
//{
//	//int a = 120;
//	//func(a);
//
//	//func(10);
//
//	func2(10, 5);
//	return 0;
//}

//const double pi = 3.14;
//
//class Circle
//{
//public:
//	int m_r;
//
//	double circum()
//	{
//		return 2 * pi * m_r;
//	}
//};
//
//int main()
//{
//	Circle c1;
//	c1.m_r = 10;
//
//	cout << "圆的周长为：" << c1.circum() << endl;
//	return 0;
//}

//class student
//{
//public:
//	string name;
//	int id;
//
//	void showinfo()
//	{
//		cout << "姓名：" << name << "学号：" << id << endl;
//	}
//
//	void setname(string sname)
//	{
//		name = sname;
//	}
//};
//
//int main()
//{
//	student s1;
//	s1.name = "zhang san";
//	s1.id = 12345;
//	s1.showinfo();
//	s1.setname("li si");
//	s1.showinfo();
//	return 0;
//}

//class person
//{
//public:
//	string name;
//
//protected:
//	string car;
//
//private:
//	int password;
//
//public:
//	void  func()
//	{
//		name = "zhang san";
//		car = "car";
//		password = 123456;
//	}
//};
//
//int main()
//{
//	person p1;
//	p1.name = "li si"; 
//	p1.car = "car2";	无法访问
//	p1.password = 123;	无法访问
//	return 0;
//}

//class c1	默认私有权限
//{
//	int a;
//};
//
//struct c2	默认公共权限
//{
//	int a;
//};
//
//int main()
//{
//	c1 c;
//	c.a = 123;
//	c2 b;
//	b.a = 123;
//	return 0;
//}

//class person
//{
//public:
//	void setName(string name)
//	{
//		m_name = name;
//	}
//	string getName()
//	{
//		return m_name;
//	}
//	int getAge()
//	{
//		return m_age;
//	}
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			m_age = 0;
//			cout << "输入错误" << endl;
//			return;
//		}
//		m_age = age;
//	}
//	void setLover(string lover)
//	{
//		lover = m_lover;
//	}
//private:
//	string m_name;
//	int m_age;
//	string m_lover;
//};
//
//int main()
//{
//	person p;
//	p.setName("zhang san");
//	cout << p.getName() << endl;
//	cout << p.getAge() << endl;
//	return 0;
//}

//class cube
//{
//public:
//	void setL(int l)
//	{
//		m_l = l;
//	}
//	int getL()
//	{
//		return m_l;
//	}
//	void setW(int w)
//	{
//		m_w = w;
//	}
//	int getW()
//	{
//		return m_w;
//	}
//
//	void setH(int h)
//	{
//		m_h = h;
//	}
//	int getH()
//	{
//		return m_h;
//	}
//	int getArea()
//	{
//		return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_w * m_h;
//	}
//	int getVolume()
//	{
//		return m_l * m_w * m_h;
//	}
//	bool isSameByClass(cube& c2)
//	{
//		if (m_l == c2.getL() && m_w == c2.getW() && m_h == c2.getH())
//		{
//			return true;
//		}
//		return 0;
//	}
//private:
//	int m_l;
//	int m_w;
//	int m_h;
//};
//
//bool isSame(cube& c1, cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return 0;
//}
//
//int main()
//{
//	cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "volume: " << c1.getVolume() << endl;
//	cout << "area: " << c1.getArea() << endl;
//
//	cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "is same" << endl;
//	}
//	else
//	{
//		cout << "not same" << endl;
//	}
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "is same by class" << endl;
//	}
//	else
//	{
//		cout << "not same by class" << endl;
//	}
//	return 0;
//}

//class point
//{
//public:
//	void setx(int x)
//	{
//		m_x = x;
//	}
//	int getx()
//	{
//		return m_x;
//	}
//	void sety(int y)
//	{
//		m_y = y;
//	}
//	int gety()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};

//class circle
//{
//public:
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	int getr()
//	{
//		return m_r;
//	}
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	point getcenter()
//	{
//		return m_center;
//	}
//private:
//	int m_r;
//	point m_center;
//};

//void isInCircle(circle& c, point& p)
//{
//	int distance =
//		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	int rdistance = c.getr() * c.getr();
//
//	if (distance == rdistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "点在园外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	circle c;
//	c.setr(10);
//	point center;
//	center.setx(10);
//	center.sety(0);
//	c.setcenter(center);
//
//	point p;
//	p.setx(10);
//	p.sety(10);
//
//	isInCircle(c, p);
//	return 0;

//class person
//{
//public:
//	//构造函数
//	person()
//	{
//		cout << "person 构造函数的调用" << endl;
//	}
//	//析构函数
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	person p;
//}
//
//int main()
//{
//	test01();
//	person p;
//
//	system("pause");
//	return 0;
//}

//class person
//{
//public:
//	person()//无参构造函数
//	{
//		cout << "person 无参构造函数调用" << endl;
//	}
//	person(int a)//有参构造函数
//	{
//		age = a;
//		cout << "person 有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	person(const person &p)
//	{
//		age = p.age;
//		cout << "拷贝函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "person 析构函数调用" << endl;
//	}
//	int age;
//};
// 
//void test01()
//{
//	//括号法
//	person p;
//	person p2(10);
//	person p3(p2);
//
//	cout << "p2 age:" << p2.age << endl;
//	cout << "p3 age:" << p3.age << endl;
//
//	//显示法
//	person p1;
//	person p2 = person(10);
//	person p3 = person(p2);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//class person
//{
//public:
//	person()
//	{
//		cout << "person默认构造函数调用" << endl;
//	}
//	person(int age)
//	{
//		cout << "person有参函数调用" << endl;
//		m_age = age;
//	}
//	person(const person& p)
//	{
//		cout << "person拷贝函数调用" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "person析构函数调用" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//	cout << "p2 年龄:" << p2.m_age << endl;
//
//}
//
//void dowork(person p)
//{
//
//}
//
//void test02()
//{
//	person p;
//	dowork(p);
//}
//
//person dowork2()
//{
//	person p1;
//	return p1;
//}
//
//void test03()
//{
//	person p = dowork2();
//}
//
//int main()
//{
//	/*test01();*/
//	/*test02();*/
//	test03();
//	system("pause");
//	return 0;
//}

//构造函数调用规则

//class person
//{
//public:
//	//person()
//	//{
//	//	cout << "person的默认构造函数调用" << endl;
//	//}
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//
//	}
//	person(int age)
//	{
//		cout << "person的有参函数调用" << endl;
//		m_age = age;
//	}
//	//person(const person& p)
//	//{
//	//	cout << "person的拷贝函数调用" << endl;
//	//	m_age = p.m_age;
//	//}
//	int m_age;
//};
//
////void test01()
////{
////	person p;
////	p.m_age = 18;
////
////	person p2(p);
////	cout << "p2 age:" << p2.m_age << endl;
////}
//
//void test02()
//{
//	person p(28);
//	person p2(p);
//	cout << "p2 age:" << p2.m_age << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//深拷贝与浅拷贝
//class person
//{
//public:
//	person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//	person(int age, int height)
//	{
//		cout << "person的有参构造函数调用" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	person(const person& p)
//	{
//		cout << "person拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//
//	~person()
//	{
//		if (m_height!=NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "person的析构函数调用" << endl;
//	}
//
//	int	m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(18, 160);
//	cout << "p1年龄为：" << p1.m_age 
//		<<"身高为：" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2年龄为：" << p2.m_age 
//		<< "身高为：" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}

//初始化列表
//class person
//{
//public:
//	//person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//	//初始化列表初始化属性
//	person(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//private:
//
//};
//
//void test01()
//{
//	//person p(10, 20, 30);
//
//	person p(30,20,10);
//	cout << "m_a = " << p.m_a << endl;
//	cout << "m_b = " << p.m_b << endl;
//	cout << "m_c = " << p.m_c << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//类对象作为类成员
//class Phone
//{
//public:
//
//	Phone(string PName)
//	{
//		cout << "phone的构造函数调用" << endl;
//
//		m_pname = PName;
//	}
//	~Phone()
//	{
//		cout << "phone的析构函数调用" << endl;
//	}
//	string m_pname;
//};
//
//class Person
//{
//public:
//	//Phone m_phone = pName 隐式转换法
//	Person(string name, string pName) :m_name(name), m_phone(pName)
//	{
//		cout << "person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//	string m_name;
//	Phone m_phone;
//};
//
////当其他类对象作为本类成员，构造时先构造类对象，再构造自身
//
//void test01()
//{
//	Person p("张三", "苹果");
//
//	cout << p.m_name << "拿着：" << p.m_phone.m_pname << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//静态成员变量
//class Person
//{
//public:
//
//	static int m_a;
//private:
//	static int m_b;
//};
//
//int Person::m_a = 100;
//int Person::m_b = 200; 
//
////void test01()
////{
////	Person p;
////	cout << p.m_a << endl;
////	Person p2;
////	p2.m_a = 200;
////	cout << p2.m_a << endl;
////}
//
//void test02()
//{
//	//Person p;
//	//cout << p.m_a << endl;
//
//	cout << Person::m_a << endl;
//	cout << Person::m_b << endl;
//}
//
//int main()
//{
//	/*test01();*/
//	test02();
//	return 0;
//}
//
//
//静态成员函数
//class Person
//{
//public:
//	static void func()
//	{
//		m_a = 100;
//		/*m_b = 200;*/
//		cout << "static void func 调用" << endl;
//	}
//
//	static int m_a;
//	int m_b;
//private:
//	static void func2()
//	{
//		cout << "static void func2调用" << endl;
//	}
//};
//
//int Person::m_a = 0;
//void test01()
//{
//	Person p;
//	p.func();
//
//	Person::func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//成员变量和成员函数分开存储
//class Person
//{
//	int m_a;
//	static int m_b;
//	void func(){}
//	static void func2() {}
//};
//
//int Person::m_b = 10;
//
//void test01()
//{
//	Person p;
//
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//this 指针
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age; 
//		return *this;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person p(18);
//	cout << "p的年龄为：" << p.age << endl;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2 age: " << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//空指针访问成员函数
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is person class" << endl;
//	}
//
//	void showPersonAge()
//	{
// 		cout << "age = " << m_age << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	 
//	p->showClassName();
//	
//	p->showPersonAge();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//常函数与常对象
//class Person
//{
//public:
//	void showPerson() const
//	{
//		//this->m_a = 100;
//		this->m_b = 100;
//	}
//
//	void func()
//	{
//		m_a = 100;
//	}
//	int m_a;
//	mutable int m_b;
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//
//}
//
//void test02()
//{
//	const Person p;
//	//p.m_a = 100;
//	p.m_b = 200;
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();
//}
//
//int main()
//{	
//	return 0;
//}

//class Building
//{
//	//友元函数可以访问私有变量
//	friend void Friend(Building* building);
//public:
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//
//	string  m_sittingroom;
//private:
//	string m_bedroom;
//
//};
//
//void Friend(Building *building)
//{
//	cout << "friend 函数正在访问：" << building->m_sittingroom << endl;
//
//	cout << "friend 函数正在访问：" << building->m_bedroom << endl;
//
//}
//
//void test01()
//{
//	Building building;	
//	Friend(&building);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//友元类
//class Building;
//class Friend
//{
//public:
//
//	void visit();
//	Friend();
//	Building* building;
//private:
//
//};
//
//class Building
//{
//	friend class Friend;
//public:
//	
//	Building();
//	string m_sittingroom;
//
//private:
//	string m_bedroom;
//};
//
//Building::Building()
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//
//Friend::Friend()
//{
//	building = new Building;
//}
//
//void Friend::visit()
//{
//	cout << "Friend正在访问：" << building->m_sittingroom << endl;
//	cout << "Friend正在访问：" << building->m_bedroom << endl;
//}
//
//void test()
//{
//	Friend gg;
//	gg.visit();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//成员函数做友元
//class Building;
//class Friend
//{
//public:
//	Friend();
//
//	void visit();
//	void visit02();
//
//	Building* building;
//};
//
//class Building
//{
//	friend void Friend::visit();
//public:
//	Building();
//	string m_sittingroom;
//	 
//private:
//	string m_bedroom;
//};
//
//Building::Building()
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//
//Friend::Friend()
//{
//	building = new Building; 
//}
//
//void Friend::visit()
//{
//	cout << "visit 函数正在访问：" << building->m_sittingroom << endl;
//	cout << "visit1 函数正在访问：" << building->m_bedroom << endl;
//}
//
//void Friend::visit02()
//{
//	cout << "visit2 函数正在访问：" << building->m_sittingroom << endl;
//	//cout << "visit2 函数正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	Friend gg;
//	gg.visit();
//	gg.visit02();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//加号运算符重载
//class Person
//{
//public:
//
//	int m_a;
//	int m_b;
//
//};
//
//Person operator+(Person& p1, Person& p2)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
//
//Person operator+(Person& p1, int num)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + num;
//	tmp.m_b = p1.m_b + num;
//	return tmp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	Person p2;
//	p2.m_a = 10;
//	p2.m_b = 10;
//
//	//Person p3 = p1.operator+(p2);
//
//	//Person p3 = operator+(p1, p2);
//	Person p3 = p1 + p2; 
//
//	Person p4 = p1 + 20;
//	cout << p3.m_a << endl << p3.m_b << endl;
//	cout << p4.m_a << endl << p4.m_b << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//左移运算符重载
//class Person
//{
//public:
//
//	int m_a;
//	int m_b;
//
//};
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "m_a = " << p.m_a << "m_b = " << p.m_b;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	p.m_a = 10;
//	p.m_b = 10;
//
//	cout << p << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//递增运算符重载
//class myInt
//{
//	friend ostream& operator<<(ostream& cout, myInt Int);
//public:
//	myInt()
//	{
//		m_num = 0;
//	}
//
//	myInt& operator++()
//	{
//		m_num++;
//		return *this;
//	}
//
//	myInt& operator++(int)
//	{
//		myInt tmp = *this;
//		m_num++;
//		return tmp;
//	}
//private:
//	int m_num;
//};
//
//ostream& operator<<(ostream& cout, myInt Int)
//{
//	cout << Int.m_num;
//	return cout;
//}
//
//void test01()
//{
//	myInt Int;
//	cout << ++Int << endl;
//}
//
//void test02()
//{
//	myInt Int1;
//	cout << Int1++ << endl;
//	cout << Int1 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//赋值运算符重载
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	Person& operator=(Person& p)
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//
//		m_age = new int(*p.m_age);
//		return *this;
//	}
//
//	int* m_age;
//};
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//	p3 = p2 = p1;
//
//	cout << "p1的年龄为：" << *p1.m_age << endl;
//
//	cout << "p2的年龄为：" << *p2.m_age << endl;
//
//	cout << "p3的年龄为：" << *p3.m_age << endl;
//
//}
//
//int main()
//{
//	test01();
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	c = b = a;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//	return 0;
//}


//关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age; 
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_name==p.m_name && this->m_age==p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_name != p.m_name || this->m_age != p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_name;
//	int m_age;
//};
// 
//void test01()
//{
//	Person p1("tom", 18);
//
//	Person p2("tom", 18);
//
//	if (p1==p2)
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//函数调用运算符重载--仿函数
//class Print
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//};
//
//void print02(string a)
//{
//	cout << a << endl;
//}
//
//void test01()
//{
//	Print print;
//	print("hello world");//使用起来像函数，称为仿函数
//	print02("hello world2");
//}
//
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int ret = myadd(100, 100);
//	cout << "ret = " << ret << endl;
//
//	//匿名 函数对象
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//继承-基本语法
////class java
////{
////public:
////	void header()
////	{
////		cout << "首页" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "java学科" << endl;
////	}
////};
////
////class python
////{
////public:
////	void header()
////	{
////		cout << "首页" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "python学科" << endl;
////	}
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "首页" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "c++学科" << endl;
////	}
////};
//
//
////继承实现页面
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "首页" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心" << endl;
//	}
//	void left()
//	{
//		cout << "java, c++, python" << endl;
//	}
//};
//
//class java:public basepage
//{
//public:
//	void content()
//	{
//		cout << "java学科" << endl;
//	}
//};
//
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python学科" << endl;
//	}
//};
//
//class Cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp学科" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "java页面如下：" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "_________________________" << endl;
//	cout << "python页面如下：" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "_________________________" << endl;
//	cout << "c++页面如下：" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//继承-继承方式
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son:public base1
//{
//public:
//	void func()
//	{
//		m_a = 10; //pulblic -> public
//		m_b = 10; //protected -> protected
//		//m_c = 10; //private -> can't access
//	}
//};
//
//void test01()
//{
//	son s1;
//	s1.m_a = 100;
//	//s1.m_b = 100; //protected cant access
//}
//
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son2:protected base2
//{
//public:
//	void func()
//	{
//		m_a = 100; //pulblic -> protected
//		m_b = 100; //protected -> protected
//		//m_c = 100; //private -> can't access
//	}
//};
//
//void test02()
//{
//	son2 s1;
//	s1.m_a = 100;
//	s1.m_b = 100;
//	s1.m_c = 100;
//}
//
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class son3:private base3
//{
//public:
//	void func()
//	{
//		m_a = 100; //pulblic -> private
//		m_b = 100; //protected -> private
//		m_c = 100; //private -> can't access
//	}
//};
//
//void test03()
//{
//	son3 s1;
//	s1.m_a = 100;
//	s1.m_b = 100;
//}
//
//class grandson :public son3
//{
//public:
//	void func()
//	{
//		m_a = 1000; //m_a已变成私有，访问不到
//	}
//};
//
//int main()
//{
//
//	return 0;
//}


//继承中的对象模型
//class base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son :public base
//{
//public:
//	int m_d;
//};
//
//void test01()
//{
//	//16
//	//父类中所有非静态成员属性都会被子类继承下去
//	cout << "size of son: " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//继承中构造和析构顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "base 的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "base 的析构函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "son 的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "son 的析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;
//	Son son;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//继承同名成员处理
//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//
//	void func()
//	{
//		cout << "Base func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base func(int a)调用" << endl;
//	}
//
//	int m_a;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//	
//	void func()
//	{
//		cout << "Son func()调用" << endl;
//	}
//
//	int m_a;
//};
//
////同名成员变量
//void test01()
//{
//	Son s;
//	cout << "Son下 m_a = " << s.m_a << endl;
//	cout << "Base下 m_a = " << s.Base::m_a << endl;
//}
//
////同名成员函数
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//继承中的同名静态成员处理方式
//class Base
//{
//public:
//	static int m_a;
//
//	static void func()
//	{
//		cout << "Base-static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base-static void func(int a)" << endl;
//	}
//
//};
//int Base:: m_a = 100;
//
//class Son :public Base
//{
//public:
//	static int m_a;
//
//	static void func()
//	{
//		cout << "Son-static void func()" << endl;
//	}
//
//};
//int Son::m_a = 200;
//
//void test01()
//{
//	cout << "通过对象访问：" << endl;
//	Son s;
//	cout << "Son下 m_a = " << s.m_a << endl;
//	cout << "Base下 m_a = " << s.Base::m_a << endl;
//
//	cout << "通过类名访问:" << endl;
//	cout << "Son下 m_a = " << Son::m_a << endl;
//	cout << "Base下 m_a = " << Son::Base::m_a << endl; 
//}
//
//void test02()
//{
//	cout << "通过对象访问：" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "通过类名访问: " << endl;
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(100);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//多继承语法
//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//
//	int m_a;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_a = 200;
//	}
//
//	int m_a;
//};
//
//class Son :public Base, public Base2
//{
//public:
//	Son()
//	{
//		m_c = 300;
//		m_d = 400;
//	}
//
//	int m_c;
//	int m_d;
//};
//
//void test01()
//{
//	Son s;
//
//	cout << "sizeof(Son) = " << sizeof(s) << endl;
//
//	cout << "Base::m_a = " << s.Base::m_a << endl;
//	cout << "Base2::m_a = " << s.Base2::m_a << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//菱形继承问题以及解决方法
//class Animal 
//{
//public:
//	int m_age;
//};
//
//class Sheep :virtual public Animal
//{
//
//};
//
//class Tuo :virtual public Animal
//{
//
//};
//
//class SheepTuo: public Sheep, public Tuo
//{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_age = 18;
//	st.Tuo::m_age = 28;
//
//	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
//	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}


//(135)多态的基本语法
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//void doSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog); 
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(136)多态的原理剖析
// virtual函数 其实存放了一个指针指向虚函数表
// 虚函数表记录了虚函数的的地址
// vfptr -> vftable
//

//(137)类和对象-多态-案例1-计算器类
//普通写法
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		else if (oper == "-")
//		{
//			return m_num1 - m_num2;
//		}
//		else if (oper == "*")
//		{
//			return m_num1 * m_num2;
//		}
//	}
//
//	int m_num1;
//	int m_num2;
//};
//void test01()
//{
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 10;
//
//	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getResult("+") << endl;
//
//	cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getResult("-") << endl;
//
//	cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getResult("*") << endl;
//}
//
//利用多态实现计算器
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_num1;
//	int m_num2;
//};
//class AddCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
// };
//class SubCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//}; 
//class MultiCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//void test02()
//{
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 100;
//	abc->m_num2 = 10;
//
//	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	abc = new SubCalculator;
//	abc->m_num1 = 100;
//	abc->m_num2 = 10;
//
//	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	abc = new MultiCalculator;
//	abc->m_num1 = 100;
//	abc->m_num2 = 10;
//
//	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//(138)类和对象-多态-纯虚函数和抽象类
//class Base
//{
//public:
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;	抽象类无法实例化对象
//	//Son s;
//	Base* base = new Son;
//	base->func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//(139)类和对象-多态-案例2-制作饮品
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
//
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//	cout << "________________________" << endl;
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//(140)类和对象-多态-虚析构和纯虚析构
//纯虚析构需要声明也需要实现
//有了纯虚析构，类属于抽象类
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal析构函数调用" << endl;
//	//}
//	virtual void speak() = 0;
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	string *m_Name;
//
//	~Cat()
//	{
//		if (m_Name!=nullptr)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = nullptr;
//		}
//	}
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类指针在析构时 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(141/142)类和对象-多态-案例3-电脑组装需求分析
//class CPU
//{
//public:
//	virtual void calculate() = 0; 
//};
//
//class GPU
//{
//public:
//	virtual void display() = 0;
//}; 
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class Computer
//{
//public:
//	Computer(CPU* cpu, GPU* gpu, Memory* memory)
//	{
//		m_cpu = cpu;
//		m_gpu = gpu;
//		m_memory = memory;
//	}
//
//	void work()
//	{
//		m_cpu->calculate();
//		m_gpu->display();
//		m_memory->storage();
//	}
//	~Computer()
//	{
//		if (m_cpu==NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		else if (m_gpu == NULL)
//		{
//			delete m_gpu;
//			m_gpu = NULL;
//		}
//		else if (m_memory == NULL)
//		{
//			delete m_memory;
//			m_memory = NULL;
//		}
//	}
//private:
//	CPU* m_cpu;
//	GPU* m_gpu;
//	Memory* m_memory;
//};
//
//class IntelCPU:public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel的CPU开始计算了!" << endl;
//	}
//};
//
//class IntelGPU:public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel的GPU开始显示了!" << endl;
//	}
//};
//
//class IntelMemory:public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的Memory开始存储了!" << endl;
//	}
//};
//
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了!" << endl;
//	}
//};
//
//class LenovoGPU :public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的GPU开始显示了!" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的Memory开始存储了!" << endl;
//	}
//};
//
//void test01()
//{
//	CPU* intelCPU = new IntelCPU;
//	GPU* intelGPU = new IntelGPU;
//	Memory* intelMemory = new IntelMemory;
//
//	Computer *intelComputer = new Computer(intelCPU, intelGPU, intelMemory);
//	intelComputer->work();
//	delete intelComputer;
//
//	Computer* lenovoComputer = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
//	lenovoComputer->work();
//	delete lenovoComputer;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(143)写文件
// 
//	ios::in			为读文件而打开
//	ios::out		为写文件而打开
//	ios::ate		初始位置：文件尾
//	ios::app		追加方式写文件
//	ios::trunc		如果文件存在先删除，再创建
//	ios::binary		二进制
// 
//void test01()
//{
//	ofstream ofs;
//
//	ofs.open("test.txt", ios::out | ios::app);
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(144)读文件
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//读数据
//	//第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第四种
//	//char c;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c << endl;
//	//}
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(145)C++文件操作-二进制文件-写文件
//class Person
//{
//public:
//
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01()
//{
//	ofstream ofs;
//	ofs.open("person.txt",ios::out | ios::binary);
//
//	Person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(146)C++文件操作-二进制文件-读文件
//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("person.txt", ios::in | ios::binary);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//	cout << "姓名: " << p.m_name << " 年龄:	" << p.m_age << endl;
//
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//int main()
//{
//	int x = 53191;
//	char a[64] = { "2" };
//	cout << sizeof(int) << " " << sizeof(short) << endl;
//	cout << _itoa(x, a, 2) << endl;;
//	short sx = (short)x;
//	cout << _itoa(sx, a, 2) << endl;
//	int isx = (int)sx;
//	cout << _itoa(isx, a, 2) << endl;
//	return 0;
//}


//(168)模板-函数模板基本语法
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>	//申明模板，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	
//	//swapInt(a, b);
//	//利用函数模板交换，两种方式使用函数模板
//	
//	//1.自动类型推导
//	//mySwap(a, b);
//	
//	//2.显示指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//
//	swapDouble(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//(169)模板-函数模板注意事项
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.自动类型推导，必须推导出一致的数据类型T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);	正确
//	//mySwap(a, c);	错误
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.模板必须确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//
//void test02()
//{
//	//func():	错误
//	func<int>();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//(170)模板-函数模板案例-数组排序
////交换函数模板
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b; 
//	b = temp;
//}
//
////排序算法
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i+1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印数组模板
//template<class T>
//void printArr(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int sz = sizeof(charArr) / sizeof(char);
//	mySort(charArr, sz);
//	printArr(charArr, sz);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = {5,7,3,0,3,1,8};
//	int sz = sizeof(intArr) / sizeof(int);
//	mySort(intArr, sz);
//	printArr(intArr, sz);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}

//(171)模板-普通模板与函数模板区别
////1.普通函数调用可以发生隐式类型转换
////2.函数模板 用自动类型推导，不可以发生隐式类型转换
////3.函数模板 用显示指定类型，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导
//	//cout << myAdd02(a, c) << endl;
//
//	//显式指定类型
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(172)模板-普通函数与函数模板调用规则
////1.如果函数模板和普通函数都可以调用，优先调用普通函数
////2.可以通过空模板参数列表 强制调用 函数模板
////3.函数模板可以发生函数重载
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "调用普通的函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 10);
//
//	//如果函数模板产生更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//
//	myPrint(c1, c2);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(173)模板-模板的局限性
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//template <class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////利用具体化Person的版本实现代码，具体化优先调用
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//(174)模板-类模板基本语法
//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->m_name << " age: " << this->m_age << endl;;
//	}
//
//	NameType m_name;
//	AgeType m_age;
//};
//
//void test01()
//{
//	Person<string, int> p1("Tom", 99);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(175)模板-类模板与函数模板区别
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->m_name << " age: " << this->m_age << endl;
//	}
//
//	NameType m_name;
//	AgeType m_age;
//};
//
////1.类模板没有自动类型推到使用
//void test01()
//{
//	//Perosn p("Tom", 99); 错误，无法自动类型推导
//
//	Person<string, int> p("Tom", 99);
//	p.showPerson();
//}
////2.类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string> p2("Jerry", 66);
//	p2.showPerson();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//(176)模板-类模板中成员函数创建时机
////类模板中的成员函数并不是一开始就创建的，在调用时才去创建
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class myClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	myClass<Person2>m;
//	//m.func1();
//	m.func2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(177)模板-类模板对象做函数参数
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "姓名: " << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
////1.指定传入类型
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1的数据类型：" << typeid(T1).name() << endl;
//	cout << "T2的数据类型：" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T的数据类型：" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
//	printPerson3(p);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	return 0;
//}


//(178)模板-类模板与继承
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son : public Base	//错误，必须知道父类中的T类型，才能继承给子类
//class Son : public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活指定父类中T类型，子类也需要变类模板
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为: " << typeid(T1).name() << endl;
//		cout << "T2的数据类型为: " << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>s2;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}


//(179)模板-类模板成员函数类外实现
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_name = name;
//	//	this->m_age = age;
//	//}
//
//	void showPerson();
//	//{
//	//	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//	//}
//	T1 m_name;
//	T2 m_age;
//};
//
////构造函数类外实现
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
////成员函数类外实现
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//}
//
//void test01()
//{
//	Person<string, int> P("tom", 20);
//	P.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(180)模板-类模板分文件编写
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_name;
//	T2 m_age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("tom", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//(181)模板-类模板与友元	全局函数类内实现-直接在类内申明友元即可		全局函数类外实现-需要提前让编译器知道全局函数的存在
//
//template<class T1,class T2>
//class Person;
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现 --- 姓名：" << p.m_name << "年龄：" << p.m_age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
//	}
//	//全局函数 类外实现
//	//加空模板参数列表
//	//如果是全局函数 是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//		
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//
//
////1、全局函数在类内实现
//void test01()
//{
//	Person<string, int>p("tom", 20);
//
//	printPerson(p);
//}
//
////2、全局函数在类外实现
//void test02()
//{
//	Person<string, int> p("jerry", 20);
//
//	printPerson2(p);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(182)