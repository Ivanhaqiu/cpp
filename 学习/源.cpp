#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
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