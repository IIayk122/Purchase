/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CreateOrderForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\CreateOrderForm.h
*********************************************************************/

#ifndef CreateOrderForm_H
#define CreateOrderForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonCreate
class ButtonCreate;

//## link itsOrdersForm
class OrdersForm;

//## package Default

//## class CreateOrderForm
class CreateOrderForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    CreateOrderForm();
    
    //## auto_generated
    ~CreateOrderForm();
    
    ////    Operations    ////
    
    //## operation Create()
    void Create();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAmount() const;
    
    //## auto_generated
    void setAmount(int p_Amount);
    
    //## auto_generated
    int getCodeOrder() const;
    
    //## auto_generated
    void setCodeOrder(int p_CodeOrder);
    
    //## auto_generated
    int getCodeProduct() const;
    
    //## auto_generated
    void setCodeProduct(int p_CodeProduct);
    
    //## auto_generated
    Date getDate() const;
    
    //## auto_generated
    void setDate(Date p_Date);
    
    //## auto_generated
    int getNumberDepartment() const;
    
    //## auto_generated
    void setNumberDepartment(int p_NumberDepartment);
    
    //## auto_generated
    ButtonCreate* getItsButtonCreate() const;
    
    //## auto_generated
    void setItsButtonCreate(ButtonCreate* p_ButtonCreate);
    
    //## auto_generated
    OrdersForm* getItsOrdersForm() const;
    
    //## auto_generated
    void setItsOrdersForm(OrdersForm* p_OrdersForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Amount;		//## attribute Amount
    
    int CodeOrder;		//## attribute CodeOrder
    
    int CodeProduct;		//## attribute CodeProduct
    
    Date Date;		//## attribute Date
    
    int NumberDepartment;		//## attribute NumberDepartment
    
    ////    Relations and components    ////
    
    ButtonCreate* itsButtonCreate;		//## link itsButtonCreate
    
    OrdersForm* itsOrdersForm;		//## link itsOrdersForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonCreate(ButtonCreate* p_ButtonCreate);
    
    //## auto_generated
    void _setItsButtonCreate(ButtonCreate* p_ButtonCreate);
    
    //## auto_generated
    void _clearItsButtonCreate();
    
    //## auto_generated
    void __setItsOrdersForm(OrdersForm* p_OrdersForm);
    
    //## auto_generated
    void _setItsOrdersForm(OrdersForm* p_OrdersForm);
    
    //## auto_generated
    void _clearItsOrdersForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CreateOrderForm.h
*********************************************************************/
