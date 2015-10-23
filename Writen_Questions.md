
## Name: Mina Sherif Henry
## BN: 33846
-
**1. What does a derived class inherit from a base class?**
it iherites all its properties and methods, except for the overridden methods

**2. What doesn’t a derived class inherit from a base class?**
all the overridden methods as well as the constructors

**3. Suppose the return type for the baseDMA::operator=() function were defined as
void instead of baseDMA &.What effect, if any, would that have? What if the return
type were baseDMA instead of baseDMA &?**
method with *void* return type, won't work for chain submition, while function with *baseDMA baseDMA::operator&=()* will work with chaing submition same would *baseDMA baseDMA::operator =()* except this will copy the object instead of referencing it

**4. In what order are class constructors and class destructors called when a derivedclass
object is created and deleted?**
the base class constructor is called before the derived class constructor when the object is created, but the derived class destructor is called before the base class destructor when the object is deleted

**5. If a derived class doesn’t add any data members to the base class, does the derived
class require constructors?**
ye

**6. Suppose a base class and a derived class both define a method with the same name
and a derived-class object invokes the method.What method is called?**
the method of the derived class

**7. When should a derived class define an assignment operator?**
when it uses different data members than the base class, and if it initializes memory location for dynamic array

**8. Can you assign the address of an object of a derived class to a pointer to the base
class? Can you assign the address of an object of a base class to a pointer to the
derived class?**
