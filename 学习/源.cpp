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
//	s.name = "����";
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
//		cout << "��ʦ������" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << tArray[i].sArray[j].sName <<
//			" ѧ���ɼ���" << tArray[i].sArray[j].score << endl;
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
//		{"����", 23, "��"},
//		{"����", 22, "��"},
//		{"�ŷ�", 20, "��"},
//		{"����", 21, "��"},
//		{"����", 19, "Ů"},
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

//��������
//void func()
//{
//	cout << "func����" << endl;
//}
//
//void func(int a)
//{
//	cout << "func���� int a" << endl;
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
//	cout << "func(int &a) ����" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int &a) ����" << endl;
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
//	cout << "Բ���ܳ�Ϊ��" << c1.circum() << endl;
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
//		cout << "������" << name << "ѧ�ţ�" << id << endl;
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
//	p1.car = "car2";	�޷�����
//	p1.password = 123;	�޷�����
//	return 0;
//}

//class c1	Ĭ��˽��Ȩ��
//{
//	int a;
//};
//
//struct c2	Ĭ�Ϲ���Ȩ��
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
//			cout << "�������" << endl;
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
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "����԰��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
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
//	//���캯��
//	person()
//	{
//		cout << "person ���캯���ĵ���" << endl;
//	}
//	//��������
//	~person()
//	{
//		cout << "person��������������" << endl;
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
//	person()//�޲ι��캯��
//	{
//		cout << "person �޲ι��캯������" << endl;
//	}
//	person(int a)//�вι��캯��
//	{
//		age = a;
//		cout << "person �вι��캯������" << endl;
//	}
//	//�������캯��
//	person(const person &p)
//	{
//		age = p.age;
//		cout << "������������" << endl;
//	}
//	~person()
//	{
//		cout << "person ������������" << endl;
//	}
//	int age;
//};
// 
//void test01()
//{
//	//���ŷ�
//	person p;
//	person p2(10);
//	person p3(p2);
//
//	cout << "p2 age:" << p2.age << endl;
//	cout << "p3 age:" << p3.age << endl;
//
//	//��ʾ��
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
//		cout << "personĬ�Ϲ��캯������" << endl;
//	}
//	person(int age)
//	{
//		cout << "person�вκ�������" << endl;
//		m_age = age;
//	}
//	person(const person& p)
//	{
//		cout << "person������������" << endl;
//		m_age = p.m_age;
//	}
//	~person()
//	{
//		cout << "person������������" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//	cout << "p2 ����:" << p2.m_age << endl;
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

//���캯�����ù���

//class person
//{
//public:
//	//person()
//	//{
//	//	cout << "person��Ĭ�Ϲ��캯������" << endl;
//	//}
//	~person()
//	{
//		cout << "person��������������" << endl;
//
//	}
//	person(int age)
//	{
//		cout << "person���вκ�������" << endl;
//		m_age = age;
//	}
//	//person(const person& p)
//	//{
//	//	cout << "person�Ŀ�����������" << endl;
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


//�����ǳ����
//class person
//{
//public:
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯������" << endl;
//	}
//	person(int age, int height)
//	{
//		cout << "person���вι��캯������" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	person(const person& p)
//	{
//		cout << "person�������캯������" << endl;
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
//		cout << "person��������������" << endl;
//	}
//
//	int	m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	person p1(18, 160);
//	cout << "p1����Ϊ��" << p1.m_age 
//		<<"���Ϊ��" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2����Ϊ��" << p2.m_age 
//		<< "���Ϊ��" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}

//��ʼ���б�
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
//	//��ʼ���б��ʼ������
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


//�������Ϊ���Ա
//class Phone
//{
//public:
//
//	Phone(string PName)
//	{
//		cout << "phone�Ĺ��캯������" << endl;
//
//		m_pname = PName;
//	}
//	~Phone()
//	{
//		cout << "phone��������������" << endl;
//	}
//	string m_pname;
//};
//
//class Person
//{
//public:
//	//Phone m_phone = pName ��ʽת����
//	Person(string name, string pName) :m_name(name), m_phone(pName)
//	{
//		cout << "person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "person��������������" << endl;
//	}
//	string m_name;
//	Phone m_phone;
//};
//
////�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
//
//void test01()
//{
//	Person p("����", "ƻ��");
//
//	cout << p.m_name << "���ţ�" << p.m_phone.m_pname << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��̬��Ա����
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
//��̬��Ա����
//class Person
//{
//public:
//	static void func()
//	{
//		m_a = 100;
//		/*m_b = 200;*/
//		cout << "static void func ����" << endl;
//	}
//
//	static int m_a;
//	int m_b;
//private:
//	static void func2()
//	{
//		cout << "static void func2����" << endl;
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

//��Ա�����ͳ�Ա�����ֿ��洢
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

//this ָ��
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
//	cout << "p������Ϊ��" << p.age << endl;
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


//��ָ����ʳ�Ա����
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


//�������볣����
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
//	//������ֻ�ܵ��ó�����
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
//	//��Ԫ�������Է���˽�б���
//	friend void Friend(Building* building);
//public:
//	Building()
//	{
//		m_sittingroom = "����";
//		m_bedroom = "����";
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
//	cout << "friend �������ڷ��ʣ�" << building->m_sittingroom << endl;
//
//	cout << "friend �������ڷ��ʣ�" << building->m_bedroom << endl;
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


//��Ԫ��
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
//	m_sittingroom = "����";
//	m_bedroom = "����";
//}
//
//Friend::Friend()
//{
//	building = new Building;
//}
//
//void Friend::visit()
//{
//	cout << "Friend���ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "Friend���ڷ��ʣ�" << building->m_bedroom << endl;
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

//��Ա��������Ԫ
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
//	m_sittingroom = "����";
//	m_bedroom = "����";
//}
//
//Friend::Friend()
//{
//	building = new Building; 
//}
//
//void Friend::visit()
//{
//	cout << "visit �������ڷ��ʣ�" << building->m_sittingroom << endl;
//	cout << "visit1 �������ڷ��ʣ�" << building->m_bedroom << endl;
//}
//
//void Friend::visit02()
//{
//	cout << "visit2 �������ڷ��ʣ�" << building->m_sittingroom << endl;
//	//cout << "visit2 �������ڷ��ʣ�" << building->m_bedroom << endl;
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


//�Ӻ����������
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


//�������������
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


//�������������
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


//��ֵ���������
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
//	cout << "p1������Ϊ��" << *p1.m_age << endl;
//
//	cout << "p2������Ϊ��" << *p2.m_age << endl;
//
//	cout << "p3������Ϊ��" << *p3.m_age << endl;
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


//��ϵ���������
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
//		cout << "p1��p2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2����ȵ�" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�����������������--�º���
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
//	print("hello world");//ʹ��������������Ϊ�º���
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
//	//���� ��������
//	cout << MyAdd()(100, 100) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}


//�̳�-�����﷨
////class java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ" << endl;
////	}
////	void footer()
////	{
////		cout << "��������" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "javaѧ��" << endl;
////	}
////};
////
////class python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ" << endl;
////	}
////	void footer()
////	{
////		cout << "��������" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "pythonѧ��" << endl;
////	}
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "��ҳ" << endl;
////	}
////	void footer()
////	{
////		cout << "��������" << endl;
////	}
////	void left()
////	{
////		cout << "java, c++, python" << endl;
////	}
////	void content()
////	{
////		cout << "c++ѧ��" << endl;
////	}
////};
//
//
////�̳�ʵ��ҳ��
//class basepage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ" << endl;
//	}
//	void footer()
//	{
//		cout << "��������" << endl;
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
//		cout << "javaѧ��" << endl;
//	}
//};
//
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "pythonѧ��" << endl;
//	}
//};
//
//class Cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cppѧ��" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "javaҳ�����£�" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "_________________________" << endl;
//	cout << "pythonҳ�����£�" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "_________________________" << endl;
//	cout << "c++ҳ�����£�" << endl;
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


//�̳�-�̳з�ʽ
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
//		m_a = 1000; //m_a�ѱ��˽�У����ʲ���
//	}
//};
//
//int main()
//{
//
//	return 0;
//}


//�̳��еĶ���ģ��
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
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	cout << "size of son: " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�̳��й��������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "base �Ĺ��캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "base ����������" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "son �Ĺ��캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "son ����������" << endl;
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


//�̳�ͬ����Ա����
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
//		cout << "Base func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base func(int a)����" << endl;
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
//		cout << "Son func()����" << endl;
//	}
//
//	int m_a;
//};
//
////ͬ����Ա����
//void test01()
//{
//	Son s;
//	cout << "Son�� m_a = " << s.m_a << endl;
//	cout << "Base�� m_a = " << s.Base::m_a << endl;
//}
//
////ͬ����Ա����
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


//�̳��е�ͬ����̬��Ա����ʽ
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
//	cout << "ͨ��������ʣ�" << endl;
//	Son s;
//	cout << "Son�� m_a = " << s.m_a << endl;
//	cout << "Base�� m_a = " << s.Base::m_a << endl;
//
//	cout << "ͨ����������:" << endl;
//	cout << "Son�� m_a = " << Son::m_a << endl;
//	cout << "Base�� m_a = " << Son::Base::m_a << endl; 
//}
//
//void test02()
//{
//	cout << "ͨ��������ʣ�" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "ͨ����������: " << endl;
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


//��̳��﷨
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


//���μ̳������Լ��������
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


//(135)��̬�Ļ����﷨
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
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


//(136)��̬��ԭ������
// virtual���� ��ʵ�����һ��ָ��ָ���麯����
// �麯�����¼���麯���ĵĵ�ַ
// vfptr -> vftable
//

//(137)��Ͷ���-��̬-����1-��������
//��ͨд��
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
//���ö�̬ʵ�ּ�����
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

//(138)��Ͷ���-��̬-���麯���ͳ�����
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
//		cout << "func��������" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;	�������޷�ʵ��������
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

//(139)��Ͷ���-��̬-����2-������Ʒ
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
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "��������" << endl;
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

//(140)��Ͷ���-��̬-�������ʹ�������
//����������Ҫ����Ҳ��Ҫʵ��
//���˴��������������ڳ�����
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal������������" << endl;
//	//}
//	virtual void speak() = 0;
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//	string *m_Name;
//
//	~Cat()
//	{
//		if (m_Name!=nullptr)
//		{
//			cout << "Cat������������" << endl;
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
//	//����ָ��������ʱ �����������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(141/142)��Ͷ���-��̬-����3-������װ�������
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
//		cout << "Intel��CPU��ʼ������!" << endl;
//	}
//};
//
//class IntelGPU:public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel��GPU��ʼ��ʾ��!" << endl;
//	}
//};
//
//class IntelMemory:public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel��Memory��ʼ�洢��!" << endl;
//	}
//};
//
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ������!" << endl;
//	}
//};
//
//class LenovoGPU :public GPU
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo��GPU��ʼ��ʾ��!" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo��Memory��ʼ�洢��!" << endl;
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


//(143)д�ļ�
// 
//	ios::in			Ϊ���ļ�����
//	ios::out		Ϊд�ļ�����
//	ios::ate		��ʼλ�ã��ļ�β
//	ios::app		׷�ӷ�ʽд�ļ�
//	ios::trunc		����ļ�������ɾ�����ٴ���
//	ios::binary		������
// 
//void test01()
//{
//	ofstream ofs;
//
//	ofs.open("test.txt", ios::out | ios::app);
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(144)���ļ�
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//������
//	//��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
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


//(145)C++�ļ�����-�������ļ�-д�ļ�
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
//	Person p = { "����", 18 };
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


//(146)C++�ļ�����-�������ļ�-���ļ�
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
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//	cout << "����: " << p.m_name << " ����:	" << p.m_age << endl;
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


//(168)ģ��-����ģ������﷨
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
////����ģ��
//template<typename T>	//����ģ�壬T��һ��ͨ����������
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
//	//���ú���ģ�彻�������ַ�ʽʹ�ú���ģ��
//	
//	//1.�Զ������Ƶ�
//	//mySwap(a, b);
//	
//	//2.��ʾָ������
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


//(169)ģ��-����ģ��ע������
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);	��ȷ
//	//mySwap(a, c);	����
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.ģ�����ȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//
//void test02()
//{
//	//func():	����
//	func<int>();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//(170)ģ��-����ģ�尸��-��������
////��������ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b; 
//	b = temp;
//}
//
////�����㷨
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
////�ṩ��ӡ����ģ��
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
//	//����char����
//	char charArr[] = "badcfe";
//	int sz = sizeof(charArr) / sizeof(char);
//	mySort(charArr, sz);
//	printArr(charArr, sz);
//}
//
//void test02()
//{
//	//����int����
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

//(171)ģ��-��ͨģ���뺯��ģ������
////1.��ͨ�������ÿ��Է�����ʽ����ת��
////2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
////3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
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
//	//�Զ������Ƶ�
//	//cout << myAdd02(a, c) << endl;
//
//	//��ʽָ������
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//(172)ģ��-��ͨ�����뺯��ģ����ù���
////1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
////2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
////3.����ģ����Է�����������
////4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "������ͨ�ĺ���" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 10);
//
//	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
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


//(173)ģ��-ģ��ľ�����
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
////���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
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


//(174)ģ��-��ģ������﷨
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


//(175)ģ��-��ģ���뺯��ģ������
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
////1.��ģ��û���Զ������Ƶ�ʹ��
//void test01()
//{
//	//Perosn p("Tom", 99); �����޷��Զ������Ƶ�
//
//	Person<string, int> p("Tom", 99);
//	p.showPerson();
//}
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
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


//(176)ģ��-��ģ���г�Ա��������ʱ��
////��ģ���еĳ�Ա����������һ��ʼ�ʹ����ģ��ڵ���ʱ��ȥ����
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


//(177)ģ��-��ģ���������������
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
//		cout << "����: " << this->m_name << " ���䣺" << this->m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
////1.ָ����������
//void printPerson1(Person<string, int>&p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson1(p);
//}
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
//	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printPerson2(p);
//}
//
////3.������ģ�廯
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//	cout << "T���������ͣ�" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
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


//(178)ģ��-��ģ����̳�
//template<class T>
//class Base
//{
//	T m;
//};
//
////class Son : public Base	//���󣬱���֪�������е�T���ͣ����ܼ̳и�����
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
////��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1����������Ϊ: " << typeid(T1).name() << endl;
//		cout << "T2����������Ϊ: " << typeid(T2).name() << endl;
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


//(179)ģ��-��ģ���Ա��������ʵ��
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
//	//	cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//	//}
//	T1 m_name;
//	T2 m_age;
//};
//
////���캯������ʵ��
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
////��Ա��������ʵ��
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
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


//(180)ģ��-��ģ����ļ���д
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
//	cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
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

//(181)ģ��-��ģ������Ԫ	ȫ�ֺ�������ʵ��-ֱ��������������Ԫ����		ȫ�ֺ�������ʵ��-��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//
//template<class T1,class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ�� --- ������" << p.m_name << "���䣺" << p.m_age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
//	}
//	//ȫ�ֺ��� ����ʵ��
//	//�ӿ�ģ������б�
//	//�����ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
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
////1��ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("tom", 20);
//
//	printPerson(p);
//}
//
////2��ȫ�ֺ���������ʵ��
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