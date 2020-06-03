/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteDepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteDepartmentForm.h
*********************************************************************/

#ifndef DeleteDepartmentForm_H
#define DeleteDepartmentForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonDelete
class ButtonDelete;

//## link itsDepartmentForm
class DepartmentForm;

//## package Default

//## class DeleteDepartmentForm
class DeleteDepartmentForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DeleteDepartmentForm();
    
    //## auto_generated
    ~DeleteDepartmentForm();
    
    ////    Operations    ////
    
    //## operation Delete()
    void Delete();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getNumberDepartment() const;
    
    //## auto_generated
    void setNumberDepartment(int p_NumberDepartment);
    
    //## auto_generated
    ButtonDelete* getItsButtonDelete() const;
    
    //## auto_generated
    void setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    DepartmentForm* getItsDepartmentForm() const;
    
    //## auto_generated
    void setItsDepartmentForm(DepartmentForm* p_DepartmentForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int NumberDepartment;		//## attribute NumberDepartment
    
    ////    Relations and components    ////
    
    ButtonDelete* itsButtonDelete;		//## link itsButtonDelete
    
    DepartmentForm* itsDepartmentForm;		//## link itsDepartmentForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _clearItsButtonDelete();
    
    //## auto_generated
    void __setItsDepartmentForm(DepartmentForm* p_DepartmentForm);
    
    //## auto_generated
    void _setItsDepartmentForm(DepartmentForm* p_DepartmentForm);
    
    //## auto_generated
    void _clearItsDepartmentForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteDepartmentForm.h
*********************************************************************/
