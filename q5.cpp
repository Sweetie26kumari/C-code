#include <iostream>  
using namespace std;  
struct profile  
{  
int id;  
};  
struct employee  
{  
profile p;  
};  
int main()  
{  
employee e;  
int &ref=e.p.id;  
ref=34;  
std::cout << e.p.id << std::endl;  
}  