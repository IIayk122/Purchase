/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteProductForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteProductForm.cpp
*********************************************************************/

//## auto_generated
#include "DeleteProductForm.h"
//## link itsButtonDelete
#include "ButtonDelete.h"
//## link itsProductForm
#include "ProductForm.h"
//## package Default

//## class DeleteProductForm
DeleteProductForm::DeleteProductForm() {
    itsButtonDelete = NULL;
    itsProductForm = NULL;
}

DeleteProductForm::~DeleteProductForm() {
    cleanUpRelations();
}

void DeleteProductForm::Delete() {
    //#[ operation Delete()
    //#]
}

int DeleteProductForm::getCodeProduct() const {
    return CodeProduct;
}

void DeleteProductForm::setCodeProduct(int p_CodeProduct) {
    CodeProduct = p_CodeProduct;
}

ButtonDelete* DeleteProductForm::getItsButtonDelete() const {
    return itsButtonDelete;
}

void DeleteProductForm::setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(p_ButtonDelete != NULL)
        {
            p_ButtonDelete->_setItsDeleteProductForm(this);
        }
    _setItsButtonDelete(p_ButtonDelete);
}

ProductForm* DeleteProductForm::getItsProductForm() const {
    return itsProductForm;
}

void DeleteProductForm::setItsProductForm(ProductForm* p_ProductForm) {
    if(p_ProductForm != NULL)
        {
            p_ProductForm->_setItsDeleteProductForm(this);
        }
    _setItsProductForm(p_ProductForm);
}

void DeleteProductForm::cleanUpRelations() {
    if(itsButtonDelete != NULL)
        {
            DeleteProductForm* p_DeleteProductForm = itsButtonDelete->getItsDeleteProductForm();
            if(p_DeleteProductForm != NULL)
                {
                    itsButtonDelete->__setItsDeleteProductForm(NULL);
                }
            itsButtonDelete = NULL;
        }
    if(itsProductForm != NULL)
        {
            DeleteProductForm* p_DeleteProductForm = itsProductForm->getItsDeleteProductForm();
            if(p_DeleteProductForm != NULL)
                {
                    itsProductForm->__setItsDeleteProductForm(NULL);
                }
            itsProductForm = NULL;
        }
}

void DeleteProductForm::__setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    itsButtonDelete = p_ButtonDelete;
}

void DeleteProductForm::_setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(itsButtonDelete != NULL)
        {
            itsButtonDelete->__setItsDeleteProductForm(NULL);
        }
    __setItsButtonDelete(p_ButtonDelete);
}

void DeleteProductForm::_clearItsButtonDelete() {
    itsButtonDelete = NULL;
}

void DeleteProductForm::__setItsProductForm(ProductForm* p_ProductForm) {
    itsProductForm = p_ProductForm;
}

void DeleteProductForm::_setItsProductForm(ProductForm* p_ProductForm) {
    if(itsProductForm != NULL)
        {
            itsProductForm->__setItsDeleteProductForm(NULL);
        }
    __setItsProductForm(p_ProductForm);
}

void DeleteProductForm::_clearItsProductForm() {
    itsProductForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteProductForm.cpp
*********************************************************************/
