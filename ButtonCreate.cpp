/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonCreate
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonCreate.cpp
*********************************************************************/

//## auto_generated
#include "ButtonCreate.h"
//## link itsCreateOrderForm
#include "CreateOrderForm.h"
//## package Default

//## class ButtonCreate
ButtonCreate::ButtonCreate() {
    itsCreateOrderForm = NULL;
}

ButtonCreate::~ButtonCreate() {
    cleanUpRelations();
}

void ButtonCreate::Create() {
    //#[ operation Create()
    //#]
}

Button ButtonCreate::getCreate() const {
    return Create;
}

void ButtonCreate::setCreate(Button p_Create) {
    Create = p_Create;
}

CreateOrderForm* ButtonCreate::getItsCreateOrderForm() const {
    return itsCreateOrderForm;
}

void ButtonCreate::setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm) {
    if(p_CreateOrderForm != NULL)
        {
            p_CreateOrderForm->_setItsButtonCreate(this);
        }
    _setItsCreateOrderForm(p_CreateOrderForm);
}

void ButtonCreate::cleanUpRelations() {
    if(itsCreateOrderForm != NULL)
        {
            ButtonCreate* p_ButtonCreate = itsCreateOrderForm->getItsButtonCreate();
            if(p_ButtonCreate != NULL)
                {
                    itsCreateOrderForm->__setItsButtonCreate(NULL);
                }
            itsCreateOrderForm = NULL;
        }
}

void ButtonCreate::__setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm) {
    itsCreateOrderForm = p_CreateOrderForm;
}

void ButtonCreate::_setItsCreateOrderForm(CreateOrderForm* p_CreateOrderForm) {
    if(itsCreateOrderForm != NULL)
        {
            itsCreateOrderForm->__setItsButtonCreate(NULL);
        }
    __setItsCreateOrderForm(p_CreateOrderForm);
}

void ButtonCreate::_clearItsCreateOrderForm() {
    itsCreateOrderForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonCreate.cpp
*********************************************************************/
