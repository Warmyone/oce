// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectFromSingleView_HeaderFile
#define _IGESSelect_SelectFromSingleView_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_SelectFromSingleView_HeaderFile
#include <Handle_IGESSelect_SelectFromSingleView.hxx>
#endif

#ifndef _IFSelect_SelectDeduct_HeaderFile
#include <IFSelect_SelectDeduct.hxx>
#endif
class Interface_InterfaceError;
class Interface_EntityIterator;
class Interface_Graph;
class TCollection_AsciiString;


//! This selection gets in all the model, the entities which are <br>
//!           attached to the views given as input. Only Single Views are <br>
//!           considered. This information is kept from Directory Part <br>
//!           (View Item). <br>
class IGESSelect_SelectFromSingleView : public IFSelect_SelectDeduct {

public:

  //! Creates a SelectFromSingleView <br>
  Standard_EXPORT   IGESSelect_SelectFromSingleView();
  //! Selects the Entities which are attached to the Single View(s) <br>
//!           present in the Input <br>
  Standard_EXPORT     Interface_EntityIterator RootResult(const Interface_Graph& G) const;
  //! Returns the label, with is "Entities attached to single View" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectFromSingleView)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif