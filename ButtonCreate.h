/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonCreate
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonCreate.h
*********************************************************************/

#ifndef ButtonCreate_H
#define ButtonCreate_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsCreateOrderForm
class CreateOrderForm;

//## package Default

//## class ButtonCreate
class ButtonCreate {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonCreate();
    
    //## auto_generated
    ~ButtonCreate();
    
    ////    Operations    ////
    
    //## operation Create()
    void Create();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Button getCreate() const;
    
    //## auto_generated
    void setCreate(Button p_Create);
    
    //## auto_generated
    CreateOrderForm* getItsCreateOrderForm() const;
    
    //## auto_generated
    void setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    Button Create;		//## attribute Create
    
    ////    Relations and components    ////
    
    CreateOrderForm* itsCreateOrderForm;		//## link itsCreateOrderForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm);
    
    //## auto_generated
    void _setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm);
    
    //## auto_generated
    void _clearItsCreateOrderForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonCreate.h
*********************************************************************/
