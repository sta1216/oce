// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_FindEdges_HeaderFile
#define _LocOpe_FindEdges_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopTools_ListIteratorOfListOfShape_HeaderFile
#include <TopTools_ListIteratorOfListOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class Standard_NoSuchObject;
class Standard_NoMoreObject;
class TopoDS_Shape;
class TopoDS_Edge;



class LocOpe_FindEdges  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
      LocOpe_FindEdges();
  
      LocOpe_FindEdges(const TopoDS_Shape& FFrom,const TopoDS_Shape& FTo);
  
  Standard_EXPORT     void Set(const TopoDS_Shape& FFrom,const TopoDS_Shape& FTo) ;
  
        void InitIterator() ;
  
        Standard_Boolean More() const;
  
       const TopoDS_Edge& EdgeFrom() const;
  
       const TopoDS_Edge& EdgeTo() const;
  
        void Next() ;





protected:





private:



TopoDS_Shape myFFrom;
TopoDS_Shape myFTo;
TopTools_ListOfShape myLFrom;
TopTools_ListOfShape myLTo;
TopTools_ListIteratorOfListOfShape myItFrom;
TopTools_ListIteratorOfListOfShape myItTo;


};


#include <LocOpe_FindEdges.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif