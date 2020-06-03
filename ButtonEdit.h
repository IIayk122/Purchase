/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonEdit
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.h
*********************************************************************/

#ifndef ButtonEdit_H
#define ButtonEdit_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsEditDepartmentForm
class EditDepartmentForm;

//## link itsEditProductForm
class EditProductForm;

//## package Default

//## class ButtonEdit
class ButtonEdit {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonEdit();
    
    //## auto_generated
    ~ButtonEdit();
    
    ////    Operations    ////
    
    //## operation Edit()
    void Edit();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Button getEdit() const;
    
    //## auto_generated
    void setEdit(Button p_Edit);
    
    //## auto_generated
    EditDepartmentForm* getItsEditDepartmentForm() const;
    
    //## auto_generated
    void setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    EditProductForm* getItsEditProductForm() const;
    
    //## auto_generated
    void setItsEditProductForm(EditProductForm* p_EditProductForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    Button Edit;		//## attribute Edit
    
    ////    Relations and components    ////
    
    EditDepartmentForm* itsEditDepartmentForm;		//## link itsEditDepartmentForm
    
    EditProductForm* itsEditProductForm;		//## link itsEditProductForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    void _setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm);
    
    //## auto_generated
    void _clearItsEditDepartmentForm();
    
    //## auto_generated
    void __setItsEditProductForm(EditProductForm* p_EditProductForm);
    
    //## auto_generated
    void _setItsEditProductForm(EditProductForm* p_EditProductForm);
    
    //## auto_generated
    void _clearItsEditProductForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.h
*********************************************************************/
