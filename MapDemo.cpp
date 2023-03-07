#include <iostream>
#include <map>  

using namespace std;

class Session {
public:
    int esmefd;
    int smppfd;
    int id; //ESME Identified is used for id
    public:
    void displayObject () {
        cout << "[esmefd:" << esmefd << "], [smppfd: " << smppfd << "], [id : " << id << "]"  << endl;
    }
};

map<int, Session *> map1;
int main()
{
    std::map<int,Session*>::iterator it;
    Session *a=new Session();
    a->esmefd=1;
    a->id=1111;
    int id=a->id;
    map1.insert(pair<int,Session *>(id,a));
    
    it = map1.find(id);
  if (it != map1.end()) {
      it->second->displayObject();
      it->second->smppfd=2;
      it->second->displayObject();
  }
    return 0;
}
