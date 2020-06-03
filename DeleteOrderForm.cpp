/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteOrderForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteOrderForm.cpp
*********************************************************************/

//## auto_generated
#include "DeleteOrderForm.h"
//## link itsButtonDelete
#include "ButtonDelete.h"
//## link itsOrdersForm
#include "OrdersForm.h"
//## package Default

//## class DeleteOrderForm
DeleteOrderForm::DeleteOrderForm() {
    itsButtonDelete = NULL;
    itsOrdersForm = NULL;
}

DeleteOrderForm::~DeleteOrderForm() {
    cleanUpRelations();
}

void DeleteOrderForm::Delete() {
    //#[ operation Delete()
    //#]
}

int DeleteOrderForm::getCodeOrder() const {
    return CodeOrder;
}

void DeleteOrderForm::setCodeOrder(int p_CodeOrder) {
    CodeOrder = p_CodeOrder;
}

ButtonDelete* DeleteOrderForm::getItsButtonDelete() const {
    return itsButtonDelete;
}

void DeleteOrderForm::setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(p_ButtonDelete != NULL)
        {
            p_ButtonDelete->_setItsDeleteOrderForm(this);
        }
    _setItsButtonDelete(p_ButtonDelete);
}

OrdersForm* DeleteOrderForm::getItsOrdersForm() const {
    return itsOrdersForm;
}

void DeleteOrderForm::setItsOrdersForm(OrdersForm* p_OrdersForm) {
    if(p_OrdersForm != NULL)
        {
            p_OrdersForm->_setItsDeleteOrderForm(this);
        }
    _setItsOrdersForm(p_OrdersForm);
}

void DeleteOrderForm::cleanUpRelations() {
    if(itsButtonDelete != NULL)
        {
            DeleteOrderForm* p_DeleteOrderForm = itsButtonDelete->getItsDeleteOrderForm();
            if(p_DeleteOrderForm != NULL)
                {
                    itsButtonDelete->__setItsDeleteOrderForm(NULL);
                }
            itsButtonDelete = NULL;
        }
    if(itsOrdersForm != NULL)
        {
            DeleteOrderForm* p_DeleteOrderForm = itsOrdersForm->getItsDeleteOrderForm();
            if(p_DeleteOrderForm != NULL)
                {
                    itsOrdersForm->__setItsDeleteOrderForm(NULL);
                }
            itsOrdersForm = NULL;
        }
}

void DeleteOrderForm::__setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    itsButtonDelete = p_ButtonDelete;
}

void DeleteOrderForm::_setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(itsButtonDelete != NULL)
        {
            itsButtonDelete->__setItsDeleteOrderForm(NULL);
        }
    __setItsButtonDelete(p_ButtonDelete);
}

void DeleteOrderForm::_clearItsButtonDelete() {
    itsButtonDelete = NULL;
}

void DeleteOrderForm::__setItsOrdersForm(OrdersForm* p_OrdersForm) {
    itsOrdersForm = p_OrdersForm;
}

void DeleteOrderForm::_setItsOrdersForm(OrdersForm* p_OrdersForm) {
    if(itsOrdersForm != NULL)
        {
            itsOrdersForm->__setItsDeleteOrderForm(NULL);
        }
    __setItsOrdersForm(p_OrdersForm);
}

void DeleteOrderForm::_clearItsOrdersForm() {
    itsOrdersForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteOrderForm.cpp
*********************************************************************/
