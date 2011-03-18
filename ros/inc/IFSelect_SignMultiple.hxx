// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SignMultiple_HeaderFile
#define _IFSelect_SignMultiple_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SignMultiple_HeaderFile
#include <Handle_IFSelect_SignMultiple.hxx>
#endif

#ifndef _TColStd_SequenceOfTransient_HeaderFile
#include <TColStd_SequenceOfTransient.hxx>
#endif
#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _IFSelect_Signature_HeaderFile
#include <IFSelect_Signature.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_IFSelect_Signature_HeaderFile
#include <Handle_IFSelect_Signature.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class IFSelect_Signature;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! Multiple Signature : ordered list of other Signatures <br>
//!           It concatenates on a same line the result of its sub-items <br>
//!           separated by sets of 3 blanks <br>
//!           It is possible to define tabulations between sub-items <br>
//!           Moreover, match rules are specific <br>
class IFSelect_SignMultiple : public IFSelect_Signature {

public:

  //! Creates an empty SignMultiple with a Name <br>
//!           This name should take expected tabulations into account <br>
  Standard_EXPORT   IFSelect_SignMultiple(const Standard_CString name);
  //! Adds a Signature. Width, if given, gives the tabulation <br>
//!           If <maxi> is True, it is a forced tabulation (overlength is <br>
//!           replaced by a final dot) <br>
//!           If <maxi> is False, just 3 blanks follow an overlength <br>
  Standard_EXPORT     void Add(const Handle(IFSelect_Signature)& subsign,const Standard_Integer width = 0,const Standard_Boolean maxi = Standard_False) ;
  //! Concatenates the values of sub-signatures, with their <br>
//!           tabulations <br>
  Standard_EXPORT     Standard_CString Value(const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;
  //! Specialized Match Rule <br>
//!           If <exact> is False, simply checks if at least one sub-item <br>
//!           matches <br>
//!           If <exact> is True, standard match with Value <br>
//!           (i.e. tabulations must be respected) <br>
  Standard_EXPORT   virtual  Standard_Boolean Matches(const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model,const TCollection_AsciiString& text,const Standard_Boolean exact) const;




  DEFINE_STANDARD_RTTI(IFSelect_SignMultiple)

protected:




private: 


TColStd_SequenceOfTransient thesubs;
TColStd_SequenceOfInteger thetabs;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif