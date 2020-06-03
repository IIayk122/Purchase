/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EditProductForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EditProductForm.cpp
*********************************************************************/

//## auto_generated
#include "EditProductForm.h"
//## link itsButtonEdit
#include "ButtonEdit.h"
//## link itsProductForm
#include "ProductForm.h"
//## package Default

//## class EditProductForm
EditProductForm::EditProductForm() {
    itsButtonEdit = NULL;
    itsProductForm = NULL;
}

EditProductForm::~EditProductForm() {
    cleanUpRelations();
}

void EditProductForm::Edit() {
    //#[ operation Edit()
    //#]
}

int EditProductForm::getCodeProduct() const {
    return CodeProduct;
}

void EditProductForm::setCodeProduct(int p_CodeProduct) {
    CodeProduct = p_CodeProduct;
}

long EditProductForm::getNameProduct() const {
    return NameProduct;
}

void EditProductForm::setNameProduct(long p_NameProduct) {
    NameProduct = p_NameProduct;
}

long EditProductForm::getUnits() const {
    return Units;
}

void EditProductForm::setUnits(long p_Units) {
    Units = p_Units;
}

ButtonEdit* EditProductForm::getItsButtonEdit() const {
    return itsButtonEdit;
}

void EditProductForm::setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(p_ButtonEdit != NULL)
        {
            p_ButtonEdit->_setItsEditProductForm(this);
        }
    _setItsButtonEdit(p_ButtonEdit);
}

ProductForm* EditProductForm::getItsProductForm() const {
    return itsProductForm;
}

void EditProductForm::setItsProductForm(ProductForm* p_ProductForm) {
    if(p_ProductForm != NULL)
        {
            p_ProductForm->_setItsEditProductForm(this);
        }
    _setItsProductForm(p_ProductForm);
}

void EditProductForm::cleanUpRelations() {
    if(itsButtonEdit != NULL)
        {
            EditProductForm* p_EditProductForm = itsButtonEdit->getItsEditProductForm();
            if(p_EditProductForm != NULL)
                {
                    itsButtonEdit->__setItsEditProductForm(NULL);
                }
            itsButtonEdit = NULL;
        }
    if(itsProductForm != NULL)
        {
            EditProductForm* p_EditProductForm = itsProductForm->getItsEditProductForm();
            if(p_EditProductForm != NULL)
                {
                    itsProductForm->__setItsEditProductForm(NULL);
                }
            itsProductForm = NULL;
        }
}

void EditProductForm::__setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    itsButtonEdit = p_ButtonEdit;
}

void EditProductForm::_setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(itsButtonEdit != NULL)
        {
            itsButtonEdit->__setItsEditProductForm(NULL);
        }
    __setItsButtonEdit(p_ButtonEdit);
}

void EditProductForm::_clearItsButtonEdit() {
    itsButtonEdit = NULL;
}

void EditProductForm::__setItsProductForm(ProductForm* p_ProductForm) {
    itsProductForm = p_ProductForm;
}

void EditProductForm::_setItsProductForm(ProductForm* p_ProductForm) {
    if(itsProductForm != NULL)
        {
            itsProductForm->__setItsEditProductForm(NULL);
        }
    __setItsProductForm(p_ProductForm);
}

void EditProductForm::_clearItsProductForm() {
    itsProductForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EditProductForm.cpp
*********************************************************************/
