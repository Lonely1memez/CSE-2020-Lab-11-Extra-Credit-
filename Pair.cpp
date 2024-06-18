// Pair.cpp
#ifndef PAIR_H_
#define PAIR_H_

template <typename K, typename V>
class Pair
{
 public:

  Pair() {}

  Pair(K thekey):key(thekey)
  {}

  Pair(K thekey, V theval):key(thekey), value(theval) 
  {}

  K& getKey()
  {
    return key;  
  }

  V& getValue()
  {
    return value;  
  }

  void setKey(K k)
  {
     key = k;
  }  

  bool operator == (const Pair<K,V>& rhs) const
  {
    return  key == rhs.key;
  }

  bool operator != (const Pair<K,V>& rhs) const
  {
    return key != rhs.key;
  }

  bool operator < (const Pair<K,V>& rhs) const
  {
    return key < rhs.key;
  }

  bool operator > (const Pair<K,V>& rhs) const
  {
    return key > rhs.key;
  }

 private:
  K key;
  V value;
};
#endif	