/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonDelete
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonDelete.h
*********************************************************************/

#ifndef ButtonDelete_H
#define ButtonDelete_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsDeleteDepartmentForm
class DeleteDepartmentForm;

//## link itsDeleteOrderForm
class DeleteOrderForm;

//## link itsDeleteProductForm
class DeleteProductForm;

//## package Default

//## class ButtonDelete
class ButtonDelete {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonDelete();
    
    //## auto_generated
    ~ButtonDelete();
    
    ////    Operations    ////
    
    //## operation Delete()
    void Delete();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Button getDelete() const;
    
    //## auto_generated
    void setDelete(Button p_Delete);
    
    //## auto_generated
    DeleteDepartmentForm* getItsDeleteDepartmentForm() const;
    
    //## auto_generated
    void setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    DeleteOrderForm* getItsDeleteOrderForm() const;
    
    //## auto_generated
    void setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm);
    
    //## auto_generated
    DeleteProductForm* getItsDeleteProductForm() const;
    
    //## auto_generated
    void setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    Button Delete;		//## attribute Delete
    
    ////    Relations and components    ////
    
    DeleteDepartmentForm* itsDeleteDepartmentForm;		//## link itsDeleteDepartmentForm
    
    DeleteOrderForm* itsDeleteOrderForm;		//## link itsDeleteOrderForm
    
    DeleteProductForm* itsDeleteProductForm;		//## link itsDeleteProductForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    void _setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm);
    
    //## auto_generated
    void _clearItsDeleteDepartmentForm();
    
    //## auto_generated
    void __setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm);
    
    //## auto_generated
    void _setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm);
    
    //## auto_generated
    void _clearItsDeleteOrderForm();
    
    //## auto_generated
    void __setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm);
    
    //## auto_generated
    void _setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm);
    
    //## auto_generated
    void _clearItsDeleteProductForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonDelete.h
*********************************************************************/
