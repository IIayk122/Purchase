/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteOrderForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteOrderForm.h
*********************************************************************/

#ifndef DeleteOrderForm_H
#define DeleteOrderForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonDelete
class ButtonDelete;

//## link itsOrdersForm
class OrdersForm;

//## package Default

//## class DeleteOrderForm
class DeleteOrderForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DeleteOrderForm();
    
    //## auto_generated
    ~DeleteOrderForm();
    
    ////    Operations    ////
    
    //## operation Delete()
    void Delete();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCodeOrder() const;
    
    //## auto_generated
    void setCodeOrder(int p_CodeOrder);
    
    //## auto_generated
    ButtonDelete* getItsButtonDelete() const;
    
    //## auto_generated
    void setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    OrdersForm* getItsOrdersForm() const;
    
    //## auto_generated
    void setItsOrdersForm(OrdersForm* p_OrdersForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int CodeOrder;		//## attribute CodeOrder
    
    ////    Relations and components    ////
    
    ButtonDelete* itsButtonDelete;		//## link itsButtonDelete
    
    OrdersForm* itsOrdersForm;		//## link itsOrdersForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _clearItsButtonDelete();
    
    //## auto_generated
    void __setItsOrdersForm(OrdersForm* p_OrdersForm);
    
    //## auto_generated
    void _setItsOrdersForm(OrdersForm* p_OrdersForm);
    
    //## auto_generated
    void _clearItsOrdersForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteOrderForm.h
*********************************************************************/
