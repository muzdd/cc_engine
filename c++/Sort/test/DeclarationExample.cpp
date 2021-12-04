#include<iostream>

class A{
public:
  A():n2(0),n1(n2+2){
    std::cout<<"n+2:"<<n2+2<<std::endl; 
    std::cout<<"n2:"<<n2<<std::endl;
  }

  void print(){
    std::cout<<"n1==>"<<n1<<"\n"<<"n2===>"<<n2<<std::endl;
  }
private:
  int n2,n1;


};

int main(int argc,char* argv[]){
 A a;
 a.print(); //输出的结果与n1 n2的声明先后顺序有关，如果private声明为先n1，后n2那么输出的结果为n2=0，n1为随机数字，如果顺序反过来，那么n1=2，n2=0
return 0;
}
