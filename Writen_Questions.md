
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
