#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <fstream>
#include "circle.h"
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

//(143)写文件
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

