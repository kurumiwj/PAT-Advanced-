#include <iostream>
#include <cstdio>
using namespace std;

struct currency{    //���ң�ʮ�߸�������(Sickle)��һ����¡(Galleon)����ʮ�Ÿ�����(Knut)��һ������
    int Galleon;
    int Sickle;
    int Knut;
};
int main(){
    int charge,Galleon,Sickle,Knut;
    currency p,a; //pΪӦ���ļ�Ǯ��aΪʵ���ļ�Ǯ
    scanf("%d.%d.%d",&p.Galleon,&p.Sickle,&p.Knut);
    scanf("%d.%d.%d",&a.Galleon,&a.Sickle,&a.Knut);
    int money_p=p.Knut+p.Sickle*29+p.Galleon*17*29,money_a=a.Knut+a.Sickle*29+a.Galleon*17*29;
    if(money_a>=money_p){
        charge=money_a-money_p;
        Galleon=charge/(29*17);
        charge%=(29*17);
        Sickle=charge/29;
        charge%=29;
        Knut=charge;
        printf("%d.%d.%d\n",Galleon,Sickle,Knut);
    }else{
        charge=money_p-money_a;
        Galleon=charge/(29*17);
        charge%=(29*17);
        Sickle=charge/29;
        charge%=29;
        Knut=charge;
        printf("-%d.%d.%d\n",Galleon,Sickle,Knut);
    }
    system("pause");
    return 0;
}
