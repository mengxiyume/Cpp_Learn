#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
//#include"../VisualStudio2012/2/Sales_data.h"

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string BookName = "未命名";
};

//20221121

//int main()
//{
//
//	//引用
//	//int a = 0;
//
//	//int& refa = a;		//reference引用
//	//					//refa与右值绑定bind
//	//
//	//std::cout << refa++ << std::endl;
//	//std::cout << a << std::endl;
//
//	// //int& refb;			//refb必须初始化
//	//
//	//int i1 = 0, i2 = 0;
//	//int& refi1 = i1, & refi2 = i2;
//
//	//refi1 = 200, refi2 = 120;
//
//	//std::cout << refi1 << std::endl << refi2 << std::endl;
//	////引用名就代表原名，和原名同样使用
//	//引用只能够绑定在对象上，且类型与原对象严格匹配，不能够绑定在某个字面量或者计算结果上
//	//int& ref = 10;	//引用初始化对象必须为可修改的左值
//	//double Double = 3.14;
//	//int& refDouble = Double;	//类型不同不能够绑架
//
//	//int i, & ri = i;
//	//i = 5; ri = 10;
//
//	//std::cout << i << ' ' << ri << std::endl;
//	////			10			10
//
//
//
//	//指针
//	/*
//	* 指针(pointer)是指向(point to) 另外一种类型的复合类型
//	* 与引用类似，指针也实现了对其它对象的间接访问
//	* 然而指针与引用相比又有很多不同点
//	* 其一：指针本身就是一个对象，允许指针赋值和拷贝
//	* 而且在指针的生命周期内它可以指向多个不同的对象
//	* 其二：指针无需在定义时赋初值，和其它类型一样，
//	* 在块定义域中的指针未初始化时也拥有一个不确定的值
//	* (ps.在块作用域外的变量未初始化时值为0)
//	*/
//
//	//定义指针类型的方法：
//	//声明为*d，d为变量名，如果定义多个指针变量，则每个变量前都应加*
//	// int *d;
//	//int* d1, * d2;		//两者皆为指向int对象的指针
//	//double dp, * dp2;	//dp为double型变量，dp2则为指向double对象的指针
//
//	////指针存放某个对象的地址
//	////获取地址需使用取地址操作符(&)
//
//	//int val = 42;
//	//int* pval = &val;	//定义一个指向int型对象的指针变量pval并将其初始化为val的地址
//
//	//int& refval = val;
//	//int* prefval = &refval;	//引用不是对象没有实际地址，所以没有指向引用的指针而是指向引用对象的指针
//
//	//指针的类型应与其指向的对象的类型严格对应，否则将会出现使用的错误
//
//	//指针值：
//	//指针值应属于一下四种状态：
//	//1．指向一个对象
//	//2. 指向紧邻对象所占空间的下一个位置
//	//3. 空指针，未指向任何空间
//	//4, 无效指针，不属于上述任何一种情况
//
//	//试图拷贝或以其它方式访问无效指针都将导致错误，编译器不会检查此类错误
//	//2.与3.指针都是有效指针，但未指向任何实体对象，贸然使用将会导致严重后果
//
//	////若指针指向了一个对象，则可以使用解引用操作符(*)来访问该对象
//	//int i = 1;
//	//int* pi = &i;
//	//std::cout << *pi << std::endl;
//	////为指针解引用可以访问指针指向的地址，为解引用的指针赋值将直接为指向的对象赋值
//	//*pi = 100;
//	//std::cout << i << std::endl;
//
//	//空指针
//	//空指针(null pointer)不指向任何对象
//	//在试图使用一个指针之前代码可以首先检测这个指针是否为空指针
//	// int *p1 = nullptr;
//	// int *p2 = 0;
//	// 需头文件#include<cstdlib>
//	// int *p3 = NULL;
//	//
//	//得到空指针最直接的方式是使用字面值nullptr来初始化指针
//	//nullptr是一个特殊的指针，它可以被初始化为任意其它类型的指针
//	//另一种得到空指针的方法就是直接初始化为0(个人不建议使用，因为使代码不够易读)
//	//过去的程序中还会用到一个名为 NULL 的预处理变量(preprocessor variable)来给指针赋值，这个变量在cstdlib中定义，它的值就是0
//	//将int变量直接赋值给指针是错误的操作，即时int的值为0也不行
//	//int zero = 0;
//	//int* pzero = zero;	//X
//
//	//赋值和指针
//	//指针和引用都能提供对其它对象的间接访问，然而在具体实现细节上二者有很大的不同
//	//其中最重要的一点就是引用本身并非一个对象，一旦定义了引用，就无法令其绑定到另外的对象
//	//之后每次的引用都是访问它最初绑定的那个对象
//	//指针和它存放的地址就没有这种限制了和其它任何变量一样，给指针赋值就是令它存放另一个地址，从而指向一个新的对象
//	//
//	//int i = 42;
//	//int* pi = 0;	//pi被初始化但并没有指向任何对象
//	//int* pi2 = &i;	//pi2被初始化并存放i的地址
//	//int* pi3;		//pi3被定义但并未初始化
//	//pi3 = pi2;		//pi2被赋值给pi3
//	//pi2 = 0;		//pi2被置为空指针
//
//	//其它指针操作
//	//只要指针拥有一个合法值，就能将它用在条件表达式中，如果指针为0，条件取false
//	//任何菲林（？）非零指针对应的条件都是true
//	//对于两个类型相同的合法指针，可以用相等操作符(==)或不等操作符(!=)来进行比肩，比较结果为bool值
//	//如果两个指针存放的地址相同则相等，反之则不等
//	//如果两个指针相等，则存放的指针有三种情况:
//	//1. 都为空
//	//2. 都指向同一个对象
//	//3. 都指向了同一个对象的下一个地址
//	//如果两个指针中一个指向了一个对象，另一个指针指向了另一个对象的下一个地址，这时这两个指针可能会相等
//	//上述指针的使用方法都为合法指针，非法指针的使用都将造成严重的后果
//
//	//void* 指针
//	//void* 是一种特殊的指针类型，可用于存放任意对象的地址，void* 指针存放的地址具体类型未知，且无法直接使用
//	//
//	//double obj = 3.14,
//	//	  * pd = &obj;
//	//void* pv = &obj;	//obj可以是任意类型的地址
//	//pv = pd;			//pv可以存放任意类型的地址
//	//void* 指针能做的事情很有限：拿它和别的指针比较，作为函数的输入或输出，或者赋给另外一个void* 指针
//	//不能直接操作void* 指针所指向的对象，因为指向对象的结果未知类型未知，也无法确定这个对象能够进行何种操作
//	//以void* 的视角来看内存空间仅仅是内存空间（听君一席话，如听一席话）
//	//我们无法直接访问void* 所指向的内存空间
//
//
//	//2.3.2节练习
//	////练习2.18:编写代码分别更改指针的值及指针所指向的变量的值
//	//int val = 0;
//	//int* pval = 0;
//	//std::cout << "val:" << val << std::endl;
//	//pval = &val;
//	//std::cout << "pval->" << *pval << std:: endl;
//	//*pval = 114514;
//	//std::cout << "val:" << val << ' ' << "pval->" << *pval << std::endl;
//	//练习2.19:说明指针和引用的主要区别
//	//指针本身就是一类对象而引用是获得对象的别名
//	//练习2.20:请描述下面这段代码的作用
//	//int i = 42;
//	//int* p1 = &i;
//	//*p1 = *p1 * *p1;
//	//将p1指向对象的值的平方赋给p1所指向的对象
//	//练习2.21:请解释下述定义。在这些定义中有非法吗，为什么
//	//int i = 0;
//	//(a)double* dp = &i;
//	//不能将int*类型指针值赋给double*类型变量dp
//	//(b)int *pi = i;
//	//不能键整型变量值当作指针变量直接赋给指针变量，即使这个变量的值为0
//	//(c)int *p = &i;
//	//创建一个整型指针p并初始化为i的地址
//	//练习2.22假设p是一个int型的指针，请说明下述代码的含义
//	//if (p)//...
//	// 判断p是否为空指针
//	//if (*p)//...
//	// 如果p为非空指针则判断p所指向的int型对象的值是否为0
//	//练习2.23给定指针p，你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因
//	//不能，因为我并不知道这个指针所指向对象的类型
//	//练习2.24在下面这段代码中为什么p合法而lp非法
//	//int i = 42;
//	//void* p = &i;
//	//long* lp = &i;
//	//void* 类型的指针变量可以存放任意类型指针变量的值，而其它类型指针变量只能存储其类型指针变量的值
//
//	
//	std::cout << "Hello World" << std::endl;
//	return 0;
//}

//20221122

//int main()
//{
//	//2.3.3 理解复合类型的声明
//	//如前所述 变量的定义包括一个基本数据类型(base type)和一组声明符。
//	//在同一条定义语句中，虽然基本数据类型只有一个，但声明符的形式却可以不同。
//	//也就是说，同一条定义语句可能定义出不同类型的变量:
//	// int i = 1024, * p = &i, & r = i;
//	//定义多个变量
//	//定义多个变量时，每一个类型修饰符都只作用于它身后的一个变量名
//	//标准写法为：
//	// int* p, * p1;
//	//或
//	// int* p;
//	// int* p1;
//	//指向指针的指针
//	//一般来说，修饰界定符的数量并没有限制
//	//指针是一类对象，在内存中也有自己的地址，因此也允许将一个指针的地址放入另一个指针中
//	//通过*的个数可以区分指针的级别，*是指针，**是指向指针的指针，***则是指向指针的指针的指针，以此类推
//	//int val = 10;
//	//int* pval = &val;
//	//int** ppval = &pval;
//	//std::cout << val << '\n'
//	//	<< *pval << '\n'
//	//	<< **ppval << std::endl;
//	//指向指针的引用
//	////指针是对象，所以存在指向指针的引用，而引用不是对象，所以不存在指向引用的指针
//	//int i = 42;
//	//int* pi = &i;		//pi是一个int型指针
//	//int*& rpi = pi;		//rpi是对指针pi的引用
//	//
//	//rpi = &i;			//rpi是对指针的引用，该语句作用是将i的地址赋给pi
//	//*rpi = 0;			//对rpi解引用就等同于对pi解引用
//	//要理解rpi是什么，最简单的方式就是从右至左阅读rpi的定义
//	//&证明rpi是一个引用，而int*证明rpi引用的是一个int的地址
//	//2.3.3练习
//	//说明下列变量的类型和值
//	//(a)int* pi, i, & r = i;
//	//pi是一个指向int型对象的指针，i是一个int型变量，r是对int型对象的引用
//	//(b)int i, * p = 0;
//	//i是一个int型变量，p是一个指向int型对象的空指针
//	//(c)int* ip, ip2;
//	//ip是一个指向int型对象的指针，ip2是一个int型变量
//
//	//2.4 const限定符
//	//const修饰的变量会拥有常属性，使其在初始化完成后将不能够被更改
//	//该类变量可用于缓冲区等
//	//该类变量可以防止被程序更改
//	//由于const修饰的变量一旦创建就不能够被修改，所以const修饰的变量必须初始化，初始哈值可以是任意表达式或函数
//	//初始化和const
//	//const与非const能执行的操作都差不多，除了不能够被赋值之外const能够完成非const能完成的大多数操作
//	//如果使用一个const对象去初始化另一个对象，那么另一个对象是不是const都无所谓
//	//const int Buffer = 512;
//	//const int b1 = Buffer;
//	//int b2 = Buffer;
//	//如果要在多个文件中共用同一个const对象而非各自建立一个新的const对象，只需在需要用到的地方都加上extern
//	//其它文件
//	// extern const int AT;
//	//初始化的文件
//	// extern const int AT = 114514;
//	//2.4节练习
//	//练习2.26下列有哪些句子是合法的，如果有不合法的句子，请说明为什么
//	// (a)const int buf;
//	//X 未初始化
//	// (b)int cnt = 0;
//	//V
//	// (c)const int sz = cnt;
//	//V
//	// (d)++cnt; ++sz;
//	//X sz为不可修改的const修饰的左值
//
//	std::cout << "Hello World" << std::endl;
//	return 0;
//}

//20221123

//int main()
//{
//	//4.2.1 const的引用
//	//可以把引用绑定到const对象上，就行绑定到其它对象上一样，我们称之为对常量的引用(reference const)
//	//与普通引用不同的是，常量引用不能被用作修改它所绑定的对象
//	//const int ci = 1024;
//	//const int& r1 = ci;
//	//r1 = 42;		//X r1是对常量的引用，无法更改
//	//int &r2 = ci;	//X	r2是非常量引用，ci为常量，类型不兼容
//	//术语：常量引用是对const的引用
//	//引用的对象是常量还是非常量可以决定其所能够参与的操作，却无论如何都不会影响到引用和对象的绑定关系本身
//	//初始化和对const的引用
//	//引用的类型必须与其引用的对象类型一致，但是有两个例外
//	//第一种情况就是初始化常量时允许用任意表达式作为其初始值，只要该表达式的类型能够转化成引用的类型即可
//	//允许为常量引用绑定非常量的对象，字面值，甚至是一个一般表达式：
//	//int i = 42;
//	//const int& r1 = i;	//允许将const int&绑定到普通int对象上
//	//const int& r2 = 42;
//	//const int& r3 = r2 * 2;
//	//int& r4 = r3 * 2;	//错误：r4是一个普通的非常量引用
//	////当绑定对象与绑定的类型不同时编译器会自动更改绑定时对象的类型用于绑定
//	//double dval = 3.14;
//	//const int& ri = dval;
//	////编译器会将以上代码更改为如下代码
//	//const int temp = dval;	//由双精度浮点生成一个临时整型常量
//	//const int& ri = temp;		//让ri绑定这个临时整型常量
//	//在这种情况下，ri绑定了一个临时量(temporary)对象
//	//所谓临时量就是编译器需要时临时创建的一个未命名对象，一般将临时量对象成为临时量
//	//对const的引用可能引用一个非const的对象
//	//常量引用仅对引用可参与的操作进行了限制，而未对被引用的对象能够参与的操作进行限制
//	//当引用的对象本身为非常量对象时允许通过其它途径更改被引用对象的值
//	//int i = 42;
//	//int& r1 = i;
//	//const int r2 = i;
//	//r1 = 0;
//	//r2 = 0;		//错误 r2是一个常量引用
//
//	//2.4.2 指针和const
//	//与引用一样，也可以令指针指向常量与非常量
//	//类似于常量引用，指向常量的指针(pointer to const)不能用于改变其所指对象的值
//	//想要存放常量对象的地址，只能使用指向常量的指针
//	//const double pi = 3.14;
//	////double* ptr = &pi;			//错误，ptr是一个普通指针
//	//const double* cptr = &pi;
//	////*cptr = 42;					//错误,ptr是一个常量指针
//	//指针的类型必须与所指向的对象一致，但有两个例外
//	//其一就是常量指针可以指向常量的同类型对象
//	//double dval = 3.14;
//	//const double* cptr = &dval;
//	//和常量引用一样，常量指针并没有规定指向常量的指针所指向的对象必须为常量对象
//	//指向常量的指针仅规定了不能够通过常量指针更改对象的值，并没有规定其它途径能否更改对象的值
//	//const指针
//	//指针是对象而引用不是，因此就像其它对象一样，允许把指针本身定为常量
//	//常量指针(const ponter)必须初始化，而一旦初始化，其内存放的那个指针就不能改变了
//	//int i = 174;
//	//int* const pi = &i;				//指向普通对象的常量指针
//	//const double dd = 198.168;
//	//const double* const pdd = &dd;	//指向常量对象的常量指针
//	//const放在中间表明const修饰的是指针变量本身而非指针指向的那个值
//	//2.4.2节练习
//	//练习2.27:下面哪些初始化是合法的，请说明原因
//	//(a)int i = -1, & r = 0;
//	// r不合法，不能对字面量引用
//	//(b)int* const p2 = &i2;
//	// 
//	//(c)const int i = -1, & r = 0;
//	// r不合法，不能对字面量引用
//	//(d)const int* const p3 = &i2;
//	// 
//	//(e)const int* p1 = &i2;
//	// 
//	//(f)const int& const r2;
//	// 不合法，r2未初始化
//	//(g)const int i2 = i, & r = i;
//	// 
//	//练习2.28:说明下面这些定义是什么意思，挑出其中不合法的
//	//(a)int i, *const cp;
//	// 定义一个整型变量i，定义一个整型常量指针cp，但未初始化，所以不合法
//	//(b)int* p1, * const p2;
//	// 定义一个指向int型对象的指针p1，定义一个常量指针p2但未初始化，不合法
//	//(c)const int ic, & r = ic;
//	// 定义一个整型常量ic，定义一个整型常量的引用r，绑定对象为ic
//	//(d)const int* const p3;
//	// 定义一个指向int对象的常量指针常量p3，但未初始化，不合法
//	//(e)const int* p;
//	// 定义一个指向int型对象的常量指针
//	//练习2.29:假设已有上一个练习定义的那些变量，则下列哪些语句是合法的？请说明原因
//	//(a)i = ic;
//	// 将整型常量ic的值赋给整型变量i，合法
//	//(b)p1 = p3;
//	// 将整型指针常量p3的值赋给整型指针变量p1，合法
//	//(c)p1 = &ic;
//	// 将整型常量ic的地址赋给整型指针p1，不合法
//	//(d)p3 = &ic;
//	// 将整型常量ic的地址赋给常量整型指针常量p3，不合法
//	//(e)p2 = p1;
//	// 将整型指针p1的值赋给常量整型指针p2，不合法
//	//(f)ic = *p3;
//	// 将常量整型指针常量解引用之后的值（也是常量）赋给整型常量，不合法
//
//	//2.4.3 顶层const
//	//用顶层const(top-level const)表示指针本身是常量
//	//用底层const(low-level const)表示指针所指向的对象是常量
//	//顶层const可以表示任意对象是常量
//	//而底层const则与指针和引用等复合类型的基本类型部分有关
//	//比较特殊的是，指针类既可以是顶层const也可以是底层const，这一点和其它类型区别明显
//	//int i = 0;
//	//int* const p1 = &i;			//不能改变p1的值，这是一个顶层const
//	//const int ci = 42;			//不能改变ci的值，这是一个顶层const
//	//const int* p2 = &ci;			//允许改变p2的值，这是一个底层const
//	//const int* const p3 = p2;		//靠右的const是顶层const，靠左的是底层const
//	//const int& r = ci;			//用于声明引用的const都是底层const
//	//当执行对象拷贝操作时，常量是顶层const还是底层const区别明显，其中，顶层const不受什么影响
//	//i = ci;		//拷贝ci的值，ci是一个顶层const，对此操作无影响
//	//p2 = p3;		//p2和p3指向的对象类型相同，p3顶层const的部分不影响
//	//执行拷贝操作并不会改变被拷贝对象的值，因此，拷入和拷出的对象是否常量都没有什么影响
//	//另一方面，底层const的限制却不能忽视，当执行对象的拷贝操作时，拷入和拷出的对象必须具有相同的底层const资格
//	//或者两个对象的数据类型能够转换，一般来说，非常量类型能转化为常量，反之则不能
//	//int* p = p3;			//错误，p3拥有底层const的定义，而p没有
//	//p2 = p3;				//正确，p2和p3都是底层const
//	//p2 = &i;				//正确，&i可以转化为const int*
//	//int &r = ci;			//错误，r并没有底层const
//	//const int& r2 = i;	//正确，i可以转化为const int
//	//p3既是顶层const也是底层const，拷贝p3时可以忽略p3时一个顶层const，但是必须清除它指向的对象必须时一个常量
//	//因此，不能用p3去初始化p，因为p指向的是一个普通顶端int
//	//另一方面，p3的值可以赋给p2，因为这两个指针都是底层const，尽管p3同时也是一个常量指针，但就这次赋值而言，并不会有什么影响
//	//2.4.3练习
//	//练习2.30: 对于下面这些语句，请说明对象被声明成了顶层const还是底层const
//	//int i = 0;
//	//const int v2 = 0;
//	////不能改变v2的值，顶层const
//	//int v1 = v2;
//	//int* p1 = &v1, & r1 = v1;
//	//const int* p2 = &v2, * const p3 = &i, & r2 = v2;
//	////可以改变p2的值，p2是底层const
//	////不能改变p3的值，p3是顶层const
//	////可以改变v2的值，r2是底层const
//	//练习2.31: 假设已有上一个练习中已做的声明，则下面哪些语句是合法的？请说明顶层const和底层const在每个句子中有何体现
//	//r1 = v2;
//	// 错误：r1为顶层const，不能被赋值
//	//p1 = p2;
//	// 错误：不能将const对象赋给非const对象
//	//p2 = p1;
//	// 正确：将普通对象赋给底层const对象
//	//p1 = p3;
//	// 不能将顶层const对象赋给普通对象
//	//p2 = p3;
//	// 将顶层const对象赋给底层const对象
//
//	std::cout << "Hello World" << std::endl;
//	return 0;
//}

//20221124

//int main()
//{
//	//2.4.4 constexpr和常量表达式
//	//常量表达式(const expression)是指不会改变且在编译过程中就能够得到结果的表达式
//	//子面子属于常量表达式，用常量表达式初始化的const对象也是常量表达式
//	//一个对象（或表达式）是不是常量表达式由它的数据类型和初始值共同决定
//	//const int max_files = 20;			//是常量表达式
//	//const int limit = max_files + 1;	//是常量表达式
//	//int staff_size = 27;				//不是常量表达式
//	//const int sz = get_size();		//不是常量表达式
//	//当数据类型与初始值都为常量或者在编译时能够计算出的值时这个表达式为常量表达式
//	//constexpr变量
//	//C++11 新标准规定，允许将变量声明为constexpr类型以便编译器来验证变量的值是否为一个常量表达式
//	//声明为constexpr的变量一定是一个常量，且必须使用常量表达式初始化
//	//constexpr int mf = 20;			//20是产量表达式
//	//constexpr int limit = mf + 1;	//limit是常量表达式
//	//constexpr int sz = size();		//只有当size是一个constexpr函数时才是一条正确的声明语句
//	//新标准允许定义一种特殊的constexpr函数，这种函数应该足够简单以使得编译时就能够得到计算结果
//	//这样就能够使用constexpr函数去初始化constexpr变量了
//	//字面值类型
//	//常量表达式的值需要在编译时就得到计算，因此对声明constexpr时用到的类型必须有所限制
//	//因为这些值比较简单，容易得到，就把他们成为字面值类型(literal type)
//	//算数类型、引用和指针都属于字面值类型，自定义数据类型，IO库，string类则不属于字面值类型，也就不能被定义成constexpr
//	//尽管引用和指针都能被定义成constexpr，但它们的初始值却受到严格限制
//	//constexpr指针的初始值必须是nullptr或者0，或者是存储在某个固定地址中的对象
//	//函数体中定义的变量一般来说并非存放在固定地址中，因此constexpr指针并不能指向这样的变量
//	//相反的，定义在函数体外的对象地址固定不变
//	//constexpr和指针
//	//如果在constexpr声明中定义了一个指针，constexpr限定符仅对指针有效，与指针所指向的对象无关
//	//const int* p = nullptr;		//p是指向整型常量的指针
//	//constexpr int* q = nullptr;	//q是指向整数的常量指针
//	//constexpr将它所定义的对象置为了顶层const
//	//与其它指针类似，constexpr既可以指向一个常量也可以指向一个非常量
//	//{	//定义在函数外
//	//		int j = 0;
//	//		constexpr int i = 42;
//	//}
//	//constexpr int* np = nullptr;	//np是一个指向整型常量的指针，其值为空
//	//constexpr const int* p = &i;	//p是常量指针，指向整型常量i
//	//constexpr int p1 = &j;		//p1是常量指针，指向整数j
//	//2.4.4 节练习
//	//练习2.32: 下面的代码是否合法？如果非法，请设法将其修改正确
//	//int null = 0, * p = null;
//	// 非法，不能使用整型变量来初始化指针变量
//	// 改为 int null = 0, * p = nullptr;
//
//	//2.5 处理类型
//	//随着程序越来越复杂，程序中用到的类型也越来越复杂这种复杂性体现在两个方面
//	//一是一些类型难以拼写，它们的名字既难记又容易写错还无法明确体现其真是目的和含义
//	//二是有时候根本搞不清楚需要的类型到底是什么，程序员不得不回过头去从上下文中寻求帮助
//	//2.5.1 类型别名
//	//类型别名(type alias)是一个名字，它是某种类型的同义词
//	//它让复杂的类型名字变得简单明了、易于理解和使用
//	//还有助于让程序员清楚地知道使用该类型的真实目的
//	//有两种方法可以定义类型的别名
//	//传统的方法是使用关键字 typedef
//	//typedef double wages;
//	//typedef wages base, * p;	//p是double*的同义词
//	//其中，typedef作为声明语句中的基本数据类型的一部分出现
//	//含有typedef的声明语句定义的不再是变量名而是类型别名
//	//和以前的声明语句一样，这里的声明符也可以包含类型修饰
//	//新标准规定了一个新方法，使用别名声明(alias declaration)来定义类型的别名
//	//using SI = Sales_item()
//	//这种方法用关键字using作为别名声明的开始，其后紧跟别名和等号，作用是把等哈左侧的名字规定成等号右边类型的别名
//	//类型别名和类型等价，只要是类型名字能出现的地方，类型别名就能使用
//	//指针、常量和类型别名
//	//如果某个别名代指的是复合类型或常量，那么把它用到声明语句中会产生意想不到的后果
//	//typedef char* pstring;
//	//const pstring cstr = 0;
//	//const pstring* ps;		//ps是一个指针，它指向的对象是一个指向char的常量指针
//	//const pstring scst 不等于 const char* cstr
//	//指针声明符只在开头出现了一次，之后的声明都会变成普通的char类型
//
//	//2.5.2 auto类型说明符
//	//编程时常常需要把表达式的值赋给变量，如果不知道表达式的类型，则可以用到auto说明符
//	//C++11新标准引入了auto类型说明符，编译器会通过初始值的计算来推演表达式的类型，auto类型的变量必须有初始值
//	//auto item = va11 + va12;	//item的类型为 va11 + va12; 的值
//	//使用auto也能够定义多个变量，但一条声明语句只能声明一种类型的变量，所以多个变量的类型应同意
//	//复合类型，常量和auto
//	//编译器推断出来的auto类型有时候和初始值的类型并不完全一样，编译器会自动地改变结果类型使其更符合初始化规则
//	//当引用被作为auto初始值时真正参与初始化的其实时引用对象的值
//	//此时编译器以引用对象的类型作为auto的类型
//	//int i = 0, & r = i;
//	//auto a = r;		//类型为int a
//	////其次，auto一般会忽略掉顶层const，同时底层const则会保留下来
//	////比如初始值是一个指向常量的指针时
//	//const int ci = i, & cr = ci;
//	//auto b = ci;	//int
//	//auto c = cr;	//int
//	//auto d = &i;	//int*
//	//auto e = &ci;	//const int*
//	////如果希望auto推出的类型为一个顶层const，则需要明确指出
//	//const auto f = ci;
//	////还可以把引用的类型设置为auto，原来的初始化规则依然适用
//	//auto& g = ci;
//	////auto& h = 42;	//错误，不能为非常量引用绑定字面值
//	//const auto& j = 42;	//正确，可以为常量引用绑定字面值
//	////设置一个类型为auto的引用时初始值中的顶层常量属性任然保留，和往常一样，如果我们给初始值绑定一个引用，则此时的常量就不是顶层常量了
//	////要在一条语句中定义多个变量时，切记&和*都是属于某一个变量的，而非整数据类型的一部分，因此初始值必须时同一类型
//	//auto k = ci, & l = i;
//	//auto& m = ci, * p = &ci;
//	////auto& n = i, * p2 = &ci;	//错误，p2为int而&ci为const int
//	////2.5.2 练习
//	////练习 2.33:利用本节定义的变量，判断下列语句的运行结果
//	////a = 42; b = 42; c = 42;
//	////	正确	正确	正确
//	////d = 42; e = 42; g = 42;
//	////	错误	错误	错误
//	////练习 2.34 基于上一个练习中的变量和语句编写一段程序，输出变量赋值前后的内容你刚才的推断正确吗
//	//std::cout << "a:" << a << " b:" << b << " c:" << c << std::endl;
//	//std::cout << "d:" << d << " e:" << e << " g:" << g << std::endl;
//	//a = 42; b = 42; c = 42;
//	//std::cout << "a:" << a << " b:" << b << " c:" << c << std::endl;
//	////d,e,g编译运行会报错这里就不展示了
//	//判断下列定义推断出的类型是什么，然后编写程序进行验证
//	//const int i = 42;				//const int
//	//auto j = i;					//int
//	//const auto& k = i;			//const int
//	//auto *p = &i;					//const int*
//	//const auto j2 = i, &k2 = i;	//const int, const int
//	//	<-/
//
//	std::cout << "Hello World" << std::endl;
//	return 0;
//}

//20221125

int main()
{
	//decltype类型指示符
	//当我们只需要表达式的类型而不需要表达式的值时，就不能使用auto说明符了
	//C++11新规定了一种类型decltype就可以做到
	//这个说明符的作用是选择并返回操作数的数据类型，在此过程中，编译器分析表达式并的带它的类型，但不实际计算它的值
	//decltype(f()) sum = x;	//f的返回值的类型就是sum的类型
	//decltype处理顶层const和引用的方式和auto有些许不同，如果decltype使用的表达式是一个变量，则decltype返回该变量的类型（包括顶层const和引用在内）
	//const int ci = 0, & cj = ci;
	//decltype(ci)x = 0;
	//decltype(cj)y = x;
	//decltype(cj)z;		//错误，cj为引用，必须初始化
	//decltype和引用
	//如果使用的表达式不是一个变量，则decltype返回表达式结果对应的类型
	//有些表达式将向decltype返回一个引用类型，一般来说这种情况发生时意味着该表达式的结果对象能作为一条赋值语句的左值
	//int i = 42, * p = &i, & r = i;
	//decltype(r + 0)b;	//类型int
	//decltype(*p)b;		//错误，*p的类型为 int&
	//r+0时一个表达式，值的类型为int
	//*p为解引用一个指针，得到的结果为引用,引用必须初始化
	//如果表达式的内容为解引用操作，则decltype将得到解引用类型
	//解引用指针得到指针所指的对象，而且还能够给这个对象赋值，因此，decltype(*p)的结果类型就是 int& 而非 int
	//decltype 和 auto 的另一处重要区别是，decltype的结果类型与表达式密切相关
	//有一种情况需要特别注意：对于decltype所用的表达式来说，如果变量名加上了一对括号，则得到的类型与不加括号时会有不同
	//如果decltype使用的时一个不加括号的变量，则得到的结果就是该变量的类型，如果给变量加上了一层或多层括号，编译器就会把它当成一个表达式
	//变量是一种可以作为赋值语句左值的特殊表达式，所以这样的decltype就会得到引用类型
	//int i = 0;
	//decltype(i) a;		//int
	//decltype((i)) b;	//int&
	//切记: decltype((变量))（双层括号）的结果永远是引用
	//		decltype(变量)	的结果只有当变量本身就是一个引用时结果才会是一个引用
	//2.5.3节 练习
	//练习 2.36: 关于下面的代码，请指出每一个变量的类型以及程序结束时它们各自的值
	//int a = 3, b = 4;
	//// int		int
	//decltype(a) c = a;
	////	int
	//decltype((b)) d = a;
	////	int&
	//++c;
	//++d;
	//std::cout << "a:" << a << " b:" << b <<
	//	" c:" << c << " d:" << d << std::endl;
	//// a = 4, b = 4, c = 4, d = 4;
	//练习 2.37: 赋值是会产生引用的一类典型表达式，引用的类型就是左值的类型，也就是说，如果i是int，则表达式i = x 的值是int&
	//根据这一特点，请指出下面代码中每一个变量的类型和值
	//int a = 3, b = 4;
	////	int		int
	//decltype(a) c = a;
	////	int c = 3
	//decltype(a = b) d = a;
	//std::cout << "C: " << c << " D:" << d << std::endl;
	////	int&	d = a = 3
	//练习 2.38: 说明decltype指定类型和由auto指定类型有何区别。请举出一个例子：
	//decltype指定的类型与auto指定的类型一样：
	//再举一个例子，decltype指定的类型与auto指定的类型不一样：
	//1. decltype指定类型解为引用变量时decltype的结果类型为引用，而auto的结果类型为int
	//int i = 0, * pi = &i;
	//decltype(*pi) a;	//引用必须初始化，不初始化编译器报错
	//auto b = pi;
	//pi = &i;			//auto b为指向整型的指针
	//2.
	//int a = 10, b = 20;
	//decltype(a + b)c = 30;
	//auto d = a + b;
	//printf("c:%d d:%d\n", c, d);	//打印两个整型（C语言函数）
	//3.
	//int a = 10, * pa = &a;
	//decltype(*pa)rpa;		//rpa为一个引用类型
	//auto b = *pa;			//b为一个int类型

	//2.6 自定义数据结构
	//从最基本的层面理解，数据结构是把一组相关数据元素组织起来然后使用它们的策略和方法
	//C++语言允许用户以类的方式自定义数据类型，而库类型等也是以类的形式定义的

	//2.6.1 定义 Sales_data类型
	//尽管我们还写不出玩真的Sales_item类，但是可以尝试把那些元素组织到一起形成一个简单点的类
	//初步想法是用户能直接访问其中的数据元素，也能实现基本操作
	//既然我们筹划的这个数据结构不带有任何运算功能，就将它命名为Sales_data，以做区分
	//
	//初步定义如下
	//struct Sales_data
	//{
	//	std::string bookNO;
	//	unsigned units_sold = 0;
	//	double revenue = 0.0;
	//};
	//我们的类以关键字 struct 开始，紧跟着类名和类体（其中类体部分可为空）
	//类体由{ }包围形成了一个新的作用域，类内部定义的名字必须唯一，但是可以与类外部定义的名字重复
	//类体右侧的结束的}后必须写一个分号，因为类体后面可以紧跟变量名以表示对该类型对象的定义，所以分号必不可少
	// 想起一个歇后语		🦆睁眼—duck不闭
	//一般来说，最好不要把类的定义与变量的声明放在一起，这样无异于把两种不同的实体的定义混在了一条语句里
	//一会儿定义类，一会儿定义变量，显然有些被搅得乱七八糟（·^·）
	//类体定义类的 成员 , 我们的类只有 数据成员(data menber) 
	//定义类的数据成员的方法和定义普通变量一样
	//类的数据成员定义了类的对象的具体类容，每个对象都有自己的一份数据成员拷贝，修改一个对象的成员不会影响其他的对象
	//🦆🦆🦆🦆🦆
	//C++11 新标准规定，可以为数据成员提供一个 类初始值(in-class initializer)
	//创建对象时，类初始值将用于初始化类成员，没有初始值的成员将被默认初始化
	//类内初始值要么放在 = 右边，要么放在 { 内 }，不能使用 ( )
	//2.6.1节 练习
	//练习 2.39 编译下面的程序观察其运行结果，注意，如果忘记写类定义体后面的分号会发生什么情况？记录下相关信息，以后可能会有用
	//struct Foo{}
	//int main()
	//{
	//	return 0;
	//}
	//C2240	return无法从int转换为Foo
	//C3874	main的返回类型应为int而非Foo
	//C2628	Foo后面接int是非法的
	//猜测：Foo将main函数作为参数进行了初始化声明
	//练习2.40 根据自己的理解写出Sales_data类，最好与书中的例子有所不同
	//struct Sales_Data
	//{
	//	std::string BookNo;
	//	unsigned units_sold = 0;
	//	double revenue = 0.0;
	//	std::string BookName = "未命名";
	//};

	//2.6.2 使用Sales_data类
	//添加两个Sales_data 对象
	//Sales_data data1, data2;
	////读入data1和data2的代码
	////检查data1和data2的ISBN是否相同的代码
	////如果相同，求data1和data2的总和
	////Sales_data 对象读入数据
	////关于string的操作：
	//// >>	读入字符串
	//// <<	写出字符串
	//// ==	比较字符串
	////一笔交易
	//double price = 0;	//书的单价，用于计算销售收入
	////读入第一笔交易：ISBN、销售数量、单价
	//std::cin >> data1.bookNo >> data1.units_sold >> price;
	////计算销售收入
	//data1.revenue = data1.units_sold * price;
	////成员操作符( . )，访问成员
	////读入第二笔交易
	//std::cin >> data2.bookNo >> data2.units_sold >> price;
	//data2.revenue = data2.units_sold * price;
	////输出两个Sales_data对象的和
	////剩下的工作就是检查两笔交易涉及的ISBN编号是否相同了
	////如果相同输出它们的和
	////如果不同则输出一条报错信息
	//if (data1.bookNo == data2.bookNo)
	//{
	//	unsigned totaCnt = data1.units_sold + data2.units_sold;
	//	double totalRevenue = data1.revenue + data2.revenue;
	//	//输出： ISBN、总销售量、总销售额、平均价格
	//	std::cout << data1.bookNo << " " << totaCnt
	//		<< " " << totalRevenue << " ";
	//	if (totaCnt != 0)
	//	{
	//		std::cout << totalRevenue / totaCnt << std::endl;
	//	}
	//	else
	//	{
	//		std::cout << "(no sales)" << std::endl;
	//	}
	//	return 0;	//标示成功
	//}
	//else		//两笔交易的ISBN号不同
	//{
	//	std::cerr<< "Data must refer to the ISBN" << std::endl;
	//	return -1;	//标示失败
	//}
	//
	//2.6.2节 练习
	//练习2.41: 使用你自己的Sales_data 类重写第1.5.1节、1.5.2节和1.6节的练习，眼下先把Sales_data类的定义放在和main函数同一个文件里
	//编写程序读取多个Sales_data对象，输出和
	//Sales_data TmpData;
	//double sum = 0;
	//double price = 0;
	//do {
	//	std::cin >> TmpData.bookNo >> TmpData.units_sold >> price;
	//	sum += TmpData.units_sold * price;
	//	std::cout << "Continue?<Y:N";
	//	char ret = ' ';
	//	std::cin >> ret;
	//	if (ret == 'N')
	//	{
	//		break;
	//	}
	//} while (true);
	//std::cout << "Sum = " << sum << std::endl;

	std::cout << "Hello World" << std::endl;
	return 0;
}