#ifndef SMARTPOINTER_HH
#define SMARTPOINTER_HH

namespace SmartPtr{
template <class T>
class SmartPointer
{
private:
  T* rawPtr;
public:
    SmartPointer(T* ptr);
    ~SmartPointer();
};
template <class T> SmartPointer<T>::SmartPointer (T* ptr) {
    rawPtr = ptr;
}
template <class T> SmartPointer<T>::~SmartPointer() {
 delete rawPtr;   
}
}
#endif

