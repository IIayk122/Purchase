/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EditDepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EditDepartmentForm.h
*********************************************************************/

#ifndef EditDepartmentForm_H
#define EditDepartmentForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonEdit
class ButtonEdit;

//## link itsDepartmentForm
class DepartmentForm;

//## package Default

//## class EditDepartmentForm
class EditDepartmentForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EditDepartmentForm();
    
    //## auto_generated
    ~EditDepartmentForm();
    
    ////    Operations    ////
    
    //## operation Edit()
    void Edit();
    
    ////    Additional operations    ////
    
    //## auto_generated
    long getNameDepartment() const;
    
    //## auto_generated
    void setNameDepartment(long p_NameDepartment);
    
    //## auto_generated
    int getNumberDepartment() const;
    
    //## auto_generated
    void setNumberDepartment(int p_NumberDepartment);
    
    //## auto_generated
    ButtonEdit* getItsButtonEdit() const;
    
    //## auto_generated
    void setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    DepartmentForm* getItsDepartmentForm() const;
    
    //## auto_generated
    void setItsDepartmentForm(DepartmentForm* p_DepartmentForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    long NameDepartment;		//## attribute NameDepartment
    
    int NumberDepartment;		//## attribute NumberDepartment
    
    ////    Relations and components    ////
    
    ButtonEdit* itsButtonEdit;		//## link itsButtonEdit
    
    DepartmentForm* itsDepartmentForm;		//## link itsDepartmentForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _clearItsButtonEdit();
    
    //## auto_generated
    void __setItsDepartmentForm(DepartmentForm* p_DepartmentForm);
    
    //## auto_generated
    void _setItsDepartmentForm(DepartmentForm* p_DepartmentForm);
    
    //## auto_generated
    void _clearItsDepartmentForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EditDepartmentForm.h
*********************************************************************/
