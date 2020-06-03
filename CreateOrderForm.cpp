/********************************************************************
	Rhapsody	: 9.0 
	Login		: llayk
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CreateOrderForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\CreateOrderForm.cpp
*********************************************************************/

//## auto_generated
#include "CreateOrderForm.h"
//## link itsButtonCreate
#include "ButtonCreate.h"
//## link itsOrdersForm
#include "OrdersForm.h"
//## package Default

//## class CreateOrderForm
CreateOrderForm::CreateOrderForm() {
    itsButtonCreate = NULL;
    itsOrdersForm = NULL;
}

CreateOrderForm::~CreateOrderForm() {
    cleanUpRelations();
}

void CreateOrderForm::Create() {
    //#[ operation Create()
    //#]
}

int CreateOrderForm::getAmount() const {
    return Amount;
}

void CreateOrderForm::setAmount(int p_Amount) {
    Amount = p_Amount;
}

int CreateOrderForm::getCodeOrder() const {
    return CodeOrder;
}

void CreateOrderForm::setCodeOrder(int p_CodeOrder) {
    CodeOrder = p_CodeOrder;
}

int CreateOrderForm::getCodeProduct() const {
    return CodeProduct;
}

void CreateOrderForm::setCodeProduct(int p_CodeProduct) {
    CodeProduct = p_CodeProduct;
}

Date CreateOrderForm::getDate() const {
    return Date;
}

void CreateOrderForm::setDate(Date p_Date) {
    Date = p_Date;
}

int CreateOrderForm::getNumberDepartment() const {
    return NumberDepartment;
}

void CreateOrderForm::setNumberDepartment(int p_NumberDepartment) {
    NumberDepartment = p_NumberDepartment;
}

ButtonCreate* CreateOrderForm::getItsButtonCreate() const {
    return itsButtonCreate;
}

void CreateOrderForm::setItsButtonCreate(ButtonCreate* p_ButtonCreate) {
    if(p_ButtonCreate != NULL)
        {
            p_ButtonCreate->_setItsCreateOrderForm(this);
        }
    _setItsButtonCreate(p_ButtonCreate);
}

OrdersForm* CreateOrderForm::getItsOrdersForm() const {
    return itsOrdersForm;
}

void CreateOrderForm::setItsOrdersForm(OrdersForm* p_OrdersForm) {
    if(p_OrdersForm != NULL)
        {
            p_OrdersForm->_setItsCreateOrderForm(this);
        }
    _setItsOrdersForm(p_OrdersForm);
}

void CreateOrderForm::cleanUpRelations() {
    if(itsButtonCreate != NULL)
        {
            CreateOrderForm* p_CreateOrderForm = itsButtonCreate->getItsCreateOrderForm();
            if(p_CreateOrderForm != NULL)
                {
                    itsButtonCreate->__setItsCreateOrderForm(NULL);
                }
            itsButtonCreate = NULL;
        }
    if(itsOrdersForm != NULL)
        {
            CreateOrderForm* p_CreateOrderForm = itsOrdersForm->getItsCreateOrderForm();
            if(p_CreateOrderForm != NULL)
                {
                    itsOrdersForm->__setItsCreateOrderForm(NULL);
                }
            itsOrdersForm = NULL;
        }
}

void CreateOrderForm::__setItsButtonCreate(ButtonCreate* p_ButtonCreate) {
    itsButtonCreate = p_ButtonCreate;
}

void CreateOrderForm::_setItsButtonCreate(ButtonCreate* p_ButtonCreate) {
    if(itsButtonCreate != NULL)
        {
            itsButtonCreate->__setItsCreateOrderForm(NULL);
        }
    __setItsButtonCreate(p_ButtonCreate);
}

void CreateOrderForm::_clearItsButtonCreate() {
    itsButtonCreate = NULL;
}

void CreateOrderForm::__setItsOrdersForm(OrdersForm* p_OrdersForm) {
    itsOrdersForm = p_OrdersForm;
}

void CreateOrderForm::_setItsOrdersForm(OrdersForm* p_OrdersForm) {
    if(itsOrdersForm != NULL)
        {
            itsOrdersForm->__setItsCreateOrderForm(NULL);
        }
    __setItsOrdersForm(p_OrdersForm);
}

void CreateOrderForm::_clearItsOrdersForm() {
    itsOrdersForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CreateOrderForm.cpp
*********************************************************************/
