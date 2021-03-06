// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Voxel_Writer_HeaderFile
#define _Voxel_Writer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Voxel_VoxelFileFormat.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Voxel_BoolDS;
class Voxel_ColorDS;
class Voxel_FloatDS;
class TCollection_ExtendedString;


//! Writes a cube of voxels on disk.
class Voxel_Writer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! An empty constructor.
  Standard_EXPORT Voxel_Writer();
  
  //! Defines the file format for voxels.
  //! ASCII - slow and occupies more space on disk.
  //! BINARY - fast and occupies less space on disk.
  Standard_EXPORT   void SetFormat (const Voxel_VoxelFileFormat format) ;
  
  //! Defines the voxels (1bit).
  Standard_EXPORT   void SetVoxels (const Voxel_BoolDS& voxels) ;
  
  //! Defines the voxels (4bit).
  Standard_EXPORT   void SetVoxels (const Voxel_ColorDS& voxels) ;
  
  //! Defines the voxels (4bytes).
  Standard_EXPORT   void SetVoxels (const Voxel_FloatDS& voxels) ;
  
  //! Writes the voxels on disk
  //! using the defined format and file name.
  Standard_EXPORT   Standard_Boolean Write (const TCollection_ExtendedString& file)  const;




protected:





private:

  
  //! Writes 1bit voxels on disk in ASCII format.
  Standard_EXPORT   Standard_Boolean WriteBoolAsciiVoxels (const TCollection_ExtendedString& file)  const;
  
  //! Writes 4bit voxels on disk in ASCII format.
  Standard_EXPORT   Standard_Boolean WriteColorAsciiVoxels (const TCollection_ExtendedString& file)  const;
  
  //! Writes 4bytes voxels on disk in ASCII format.
  Standard_EXPORT   Standard_Boolean WriteFloatAsciiVoxels (const TCollection_ExtendedString& file)  const;
  
  //! Writes 1bit voxels on disk in BINARY format.
  Standard_EXPORT   Standard_Boolean WriteBoolBinaryVoxels (const TCollection_ExtendedString& file)  const;
  
  //! Writes 4bit voxels on disk in BINARY format.
  Standard_EXPORT   Standard_Boolean WriteColorBinaryVoxels (const TCollection_ExtendedString& file)  const;
  
  //! Writes 4bytes voxels on disk in BINARY format.
  Standard_EXPORT   Standard_Boolean WriteFloatBinaryVoxels (const TCollection_ExtendedString& file)  const;


  Voxel_VoxelFileFormat myFormat;
  Standard_Address myBoolVoxels;
  Standard_Address myColorVoxels;
  Standard_Address myFloatVoxels;


};







#endif // _Voxel_Writer_HeaderFile
