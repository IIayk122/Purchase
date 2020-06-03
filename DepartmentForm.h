/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DepartmentForm.h
*********************************************************************/

#ifndef DepartmentForm_H
#define DepartmentForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsAddDepartmentForm
class AddDepartmentForm;

//## link itsDeleteDepartmentForm
class DeleteDepartmentForm;

//## link itsEditDepartmentForm
class EditDepartmentForm;

//## link itsMainForm
class MainForm;

//## package Default

//## class DepartmentForm
class DepartmentForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DepartmentForm();
    
    //## auto_generated
    ~DepartmentForm();
    
    ////    Operations    ////
    
    //## operation OpenForm()
    void OpenForm();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Button getAdd() const;
    
    //## auto_generated
    void setAdd(Button p_Add);
    
    //## auto_generated
    Button getDelete() const;
    
    //## auto_generated
    void setDelete(Button p_Delete);
    
    //## auto_generated
    Button getEdit() const;
    
    //## auto_generated
    void setEdit(Button p_Edit);
    
    //## auto_generated
    Table getTableDepartments() const;
    
    //## auto_generated
    void setTableDepartments(Table p_TableDepartments);
    
    //## auto_generated
    AddDepartmentForm* getItsAddDepartmentForm() const;
    
    //## auto_generated
    void setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm);
    
    //## auto_generated
    DeleteDepartmentForm* getItsDeleteDepartmentForm() const;
    
    //## auto_generated
    void setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    EditDepartmentForm* getItsEditDepartmentForm() const;
    
    //## auto_generated
    void setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    MainForm* getItsMainForm() const;
    
    //## auto_generated
    void setItsMainForm(MainForm* p_MainForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    Button Add;		//## attribute Add
    
    Button Delete;		//## attribute Delete
    
    Button Edit;		//## attribute Edit
    
    Table TableDepartments;		//## attribute TableDepartments
    
    ////    Relations and components    ////
    
    AddDepartmentForm* itsAddDepartmentForm;		//## link itsAddDepartmentForm
    
    DeleteDepartmentForm* itsDeleteDepartmentForm;		//## link itsDeleteDepartmentForm
    
    EditDepartmentForm* itsEditDepartmentForm;		//## link itsEditDepartmentForm
    
    MainForm* itsMainForm;		//## link itsMainForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm);
    
    //## auto_generated
    void _setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm);
    
    //## auto_generated
    void _clearItsAddDepartmentForm();
    
    //## auto_generated
    void __setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    void _setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    void _clearItsDeleteDepartmentForm();
    
    //## auto_generated
    void __setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    void _setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    void _clearItsEditDepartmentForm();
    
    //## auto_generated
    void __setItsMainForm(MainForm* p_MainForm);
    
    //## auto_generated
    void _setItsMainForm(MainForm* p_MainForm);
    
    //## auto_generated
    void _clearItsMainForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DepartmentForm.h
*********************************************************************/
