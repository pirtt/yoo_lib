#include <iostream>
#include "singleton.h"

using namespace std;


class SS : public Singleton<SS>
{
public:
    SS()
    {
        cout<<"SS::init"<<endl;
    }
    int flag;
protected:
    friend class ObjMgr<SS>;
    virtual void initSingleton()
    {
     flag = 100;
    }
};

int main(int argc, char *argv[])
{
    SS &s = SS::getInstance();
    return 0;
}
