#include <iostream>

using namespace std;

class Car
{
  static const unsigned int brendSIZE = 200;
  static const unsigned int modelSIZE = 200;

  char brend[brendSIZE];
  char model[modelSIZE];
  double hp;
  int price;

  bool initCharStr(const char* str, char* _dest, unsigned int LENGTH) {
    if (str == nullptr || strlen(str) + 1 > LENGTH || !strcmp(str, ""))
      return false;

    strcpy(_dest, str);
    return true;
  }

public:

  Car():hp(-1), price(-1) {
    setModel("unset");
    setBrend("unset");
  }

  Car(const char* brend, const char* model = nullptr, double _hp = -1){
    if(!setModel(model))
      setModel("unset");
    if (!setBrend(brend))
      setBrend("unset");
    if (!setHp(_hp))
      hp = -1;
  }

  bool setBrend(const char* str) {
    return initCharStr(str, brend, brendSIZE);
  }
  const char* getBrand() {
    return brend;
  }

  bool setModel(const char* str) {
    return initCharStr(str, model, modelSIZE);
  }
  const char* getModel() {
    return model;
  }

  bool setHp(double hp) {
    if (hp < 0)
      return 0;

    this->hp = hp;
    return 1;
  }
  double getHp() {
    return hp;
  }
  
  bool setPrice(int price) {
    if (price < 0)
      return 0;
    this->price = price;
    return 1;
  }
  int getPrice() {
    return price;
  }

  void show()
  {
    cout << "----------\n  " << brend << "\n  " << model << "\n  " << hp << "\n----------\n";
  }
};

class Catalog {

  unsigned int SIZE;
  Car* arr = nullptr;

public:

  Catalog() :SIZE(0) {}
  ~Catalog() {
    if (arr != nullptr)
      delete[] arr;
  }

  unsigned int getSize() { return SIZE; }
  
  bool insert(const Car& obj, unsigned int index) {
    if (index > SIZE)
      return 0;
  
    Car* buff = new Car[SIZE+1];

    for (size_t i = 0; i < index; i++)
      buff[i] = arr[i];
    buff[index] = obj;
    for (size_t i = index+1; i <= SIZE; i++)
      buff[i] = arr[i-1];

    if (arr != nullptr)
      delete[] arr;

    arr = buff;
    SIZE++;

    return 1;

  }

  bool pushBack(const Car& obj) {
    return insert(obj, getSize());
  }
  bool pushFront(const Car& obj) {
    return insert(obj, 0);
  }
  bool pushRight(const Car& obj) {
    return insert(obj, getSize());
  }
  bool pushLeft(const Car& obj) {
    return insert(obj, 0);
  }
  
  bool rm(unsigned int index) {
    
    if (index >= SIZE)
      return 0;
    
    Car* buff = new Car[SIZE - 1];

    for (size_t i = 0; i < index; i++)
      buff[i] = arr[i];
    for (size_t i = index+1; i < SIZE; i++)
      buff[i-1] = arr[i];

    if (arr != nullptr)
      delete[] arr;

    arr = buff;
    SIZE--;

    return 1;
  }

  void showAll() {
    for (size_t i = 0; i < SIZE; i++)
    {
      cout << "---- " << i + 1 << " ----" << endl;
      arr[i].show();
    }
  }

  void p() {
    cout << this << endl;
  }

};

int main()
{
  Catalog catalog;

  catalog.pushBack (Car("BMW", "X5M", 600));
  catalog.pushRight(Car("Mersedes-Bens", "W222", 630));
  catalog.pushFront(Car("BMW", "M2 750i", 370));
  catalog.pushLeft(Car("Mersedes-Bens", "G63", 544));
  catalog.showAll();

  catalog.rm(1);

  catalog.showAll();

  Catalog* p = &catalog;
  p->showAll();

  cout << p << endl;
  catalog.p();
}