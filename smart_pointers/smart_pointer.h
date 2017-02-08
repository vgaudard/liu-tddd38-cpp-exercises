/*
 * smart_pointer.h     Smart pointer, given code.
 */
#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

namespace IDA_Smart_Pointer
{

   class smart_pointer
   {
       public:
           smart_pointer();
           explicit smart_pointer(int* p);
           smart_pointer(smart_pointer const & other);
           smart_pointer(smart_pointer&& other) noexcept;
           ~smart_pointer();
           smart_pointer& operator=(smart_pointer const & rhs) &;
           smart_pointer& operator=(smart_pointer&& rhs) & noexcept;

           int& operator*() const;

           int* operator->() const;

           explicit operator bool() const;

           bool operator==(smart_pointer const &) const;
           bool operator==(int const *) const;
           bool operator!=(smart_pointer const &) const;
           bool operator!=(int const *) const;

       private:
           int* _ptr;

           void copy(const smart_pointer& p);
   };

} // namespace IDA_Smart_Pointer

#endif
