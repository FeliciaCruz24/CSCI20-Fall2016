class MyClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num_ to 0
   */
  MyClass();
  /*
   * Output our member variable using cout
   */
  void Output();
 private:
  int num_;
};

MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}