// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_Assembly_HeaderFile
#define _STEPConstruct_Assembly_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_StepShape_ShapeRepresentation_HeaderFile
#include <Handle_StepShape_ShapeRepresentation.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepGeom_Axis2Placement3d_HeaderFile
#include <Handle_StepGeom_Axis2Placement3d.hxx>
#endif
#ifndef _Handle_StepRepr_NextAssemblyUsageOccurrence_HeaderFile
#include <Handle_StepRepr_NextAssemblyUsageOccurrence.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Handle_StepShape_ContextDependentShapeRepresentation_HeaderFile
#include <Handle_StepShape_ContextDependentShapeRepresentation.hxx>
#endif
class StepShape_ShapeDefinitionRepresentation;
class StepShape_ShapeRepresentation;
class Standard_Transient;
class StepGeom_Axis2Placement3d;
class StepRepr_NextAssemblyUsageOccurrence;
class Interface_InterfaceModel;
class StepShape_ContextDependentShapeRepresentation;


//! This operator creates an item of an assembly, from its <br>
//!           basic data : a ShapeRepresentation, a Location ... <br>
//! <br>
//!           Three ways of coding such item from a ShapeRepresentation : <br>
//!           - do nothing : i.e. informations for assembly are ignored <br>
//!           - create a MappedItem <br>
//!           - create a RepresentationRelationship (WithTransformation) <br>
class STEPConstruct_Assembly  {
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

  
  Standard_EXPORT   STEPConstruct_Assembly();
  //! Initialises with starting values <br>
//!           Ax0 : origin axis (typically, standard XYZ) <br>
//!           Loc : location to which place the item <br>//! Makes a MappedItem <br>
//!           Resulting Value is returned by ItemValue <br>
  Standard_EXPORT     void Init(const Handle(StepShape_ShapeDefinitionRepresentation)& aSR,const Handle(StepShape_ShapeDefinitionRepresentation)& SDR0,const Handle(StepGeom_Axis2Placement3d)& Ax0,const Handle(StepGeom_Axis2Placement3d)& Loc) ;
  //! Make a (ShapeRepresentationRelationship,...WithTransformation) <br>
//!           Resulting Value is returned by ItemValue <br>
  Standard_EXPORT     void MakeRelationship() ;
  //! Returns the Value <br>
//!           If no Make... has been called, returns the starting SR <br>
  Standard_EXPORT     Handle_Standard_Transient ItemValue() const;
  //! Returns the location of the item, computed from starting aLoc <br>
  Standard_EXPORT     Handle_StepGeom_Axis2Placement3d ItemLocation() const;
  //! Returns NAUO object describing the assembly link <br>
  Standard_EXPORT     Handle_StepRepr_NextAssemblyUsageOccurrence GetNAUO() const;
  //! Checks whether SRR's definition of assembly and component contradicts <br>
//!          with NAUO definition or not, according to model schema (AP214 or AP203) <br>
//! <br>
  Standard_EXPORT   static  Standard_Boolean CheckSRRReversesNAUO(const Handle(Interface_InterfaceModel)& Model,const Handle(StepShape_ContextDependentShapeRepresentation)& CDSR) ;





protected:





private:



Handle_StepShape_ShapeDefinitionRepresentation thesdr;
Handle_StepShape_ShapeDefinitionRepresentation thesdr0;
Handle_StepShape_ShapeRepresentation thesr;
Handle_StepShape_ShapeRepresentation thesr0;
Handle_Standard_Transient theval;
Handle_StepGeom_Axis2Placement3d theloc;
Handle_StepGeom_Axis2Placement3d theax0;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif