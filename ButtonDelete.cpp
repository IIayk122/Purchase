/********************************************************************
	Rhapsody	: 9.0 
	Login		: llayk
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonDelete
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonDelete.cpp
*********************************************************************/

//## auto_generated
#include "ButtonDelete.h"
//## link itsDeleteDepartmentForm
#include "DeleteDepartmentForm.h"
//## link itsDeleteOrderForm
#include "DeleteOrderForm.h"
//## link itsDeleteProductForm
#include "DeleteProductForm.h"
//## package Default

//## class ButtonDelete
ButtonDelete::ButtonDelete() {
    itsDeleteDepartmentForm = NULL;
    itsDeleteOrderForm = NULL;
    itsDeleteProductForm = NULL;
}

ButtonDelete::~ButtonDelete() {
    cleanUpRelations();
}

void ButtonDelete::Delete() {
    //#[ operation Delete()
    //#]
}

Button ButtonDelete::getDelete() const {
    return Delete;
}

void ButtonDelete::setDelete(Button p_Delete) {
    Delete = p_Delete;
}

DeleteDepartmentForm* ButtonDelete::getItsDeleteDepartmentForm() const {
    return itsDeleteDepartmentForm;
}

void ButtonDelete::setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    if(p_DeleteDepartmentForm != NULL)
        {
            p_DeleteDepartmentForm->_setItsButtonDelete(this);
        }
    _setItsDeleteDepartmentForm(p_DeleteDepartmentForm);
}

DeleteOrderForm* ButtonDelete::getItsDeleteOrderForm() const {
    return itsDeleteOrderForm;
}

void ButtonDelete::setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm) {
    if(p_DeleteOrderForm != NULL)
        {
            p_DeleteOrderForm->_setItsButtonDelete(this);
        }
    _setItsDeleteOrderForm(p_DeleteOrderForm);
}

DeleteProductForm* ButtonDelete::getItsDeleteProductForm() const {
    return itsDeleteProductForm;
}

void ButtonDelete::setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm) {
    if(p_DeleteProductForm != NULL)
        {
            p_DeleteProductForm->_setItsButtonDelete(this);
        }
    _setItsDeleteProductForm(p_DeleteProductForm);
}

void ButtonDelete::cleanUpRelations() {
    if(itsDeleteDepartmentForm != NULL)
        {
            ButtonDelete* p_ButtonDelete = itsDeleteDepartmentForm->getItsButtonDelete();
            if(p_ButtonDelete != NULL)
                {
                    itsDeleteDepartmentForm->__setItsButtonDelete(NULL);
                }
            itsDeleteDepartmentForm = NULL;
        }
    if(itsDeleteOrderForm != NULL)
        {
            ButtonDelete* p_ButtonDelete = itsDeleteOrderForm->getItsButtonDelete();
            if(p_ButtonDelete != NULL)
                {
                    itsDeleteOrderForm->__setItsButtonDelete(NULL);
                }
            itsDeleteOrderForm = NULL;
        }
    if(itsDeleteProductForm != NULL)
        {
            ButtonDelete* p_ButtonDelete = itsDeleteProductForm->getItsButtonDelete();
            if(p_ButtonDelete != NULL)
                {
                    itsDeleteProductForm->__setItsButtonDelete(NULL);
                }
            itsDeleteProductForm = NULL;
        }
}

void ButtonDelete::__setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    itsDeleteDepartmentForm = p_DeleteDepartmentForm;
}

void ButtonDelete::_setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    if(itsDeleteDepartmentForm != NULL)
        {
            itsDeleteDepartmentForm->__setItsButtonDelete(NULL);
        }
    __setItsDeleteDepartmentForm(p_DeleteDepartmentForm);
}

void ButtonDelete::_clearItsDeleteDepartmentForm() {
    itsDeleteDepartmentForm = NULL;
}

void ButtonDelete::__setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm) {
    itsDeleteOrderForm = p_DeleteOrderForm;
}

void ButtonDelete::_setItsDeleteOrderForm(DeleteOrderForm* p_DeleteOrderForm) {
    if(itsDeleteOrderForm != NULL)
        {
            itsDeleteOrderForm->__setItsButtonDelete(NULL);
        }
    __setItsDeleteOrderForm(p_DeleteOrderForm);
}

void ButtonDelete::_clearItsDeleteOrderForm() {
    itsDeleteOrderForm = NULL;
}

void ButtonDelete::__setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm) {
    itsDeleteProductForm = p_DeleteProductForm;
}

void ButtonDelete::_setItsDeleteProductForm(DeleteProductForm* p_DeleteProductForm) {
    if(itsDeleteProductForm != NULL)
        {
            itsDeleteProductForm->__setItsButtonDelete(NULL);
        }
    __setItsDeleteProductForm(p_DeleteProductForm);
}

void ButtonDelete::_clearItsDeleteProductForm() {
    itsDeleteProductForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonDelete.cpp
*********************************************************************/
