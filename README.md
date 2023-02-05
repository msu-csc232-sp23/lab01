# LAB01 - C++ Classes

1. All-in-one
2. Split (like book)
3. Split (expanded templates)

## Tasks

### Task 1: Base (Abstract) Class

```c++
class Point 
{
public:
  virtual bool is_origin( ) const = 0;
  virtual double distance_from_origin( ) const = 0;
};    
```
