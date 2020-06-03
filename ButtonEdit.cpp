/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonEdit
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.cpp
*********************************************************************/

//## auto_generated
#include "ButtonEdit.h"
//## link itsEditDepartmentForm
#include "EditDepartmentForm.h"
//## link itsEditProductForm
#include "EditProductForm.h"
//## package Default

//## class ButtonEdit
ButtonEdit::ButtonEdit() {
    itsEditDepartmentForm = NULL;
    itsEditProductForm = NULL;
}

ButtonEdit::~ButtonEdit() {
    cleanUpRelations();
}

void ButtonEdit::Edit() {
    //#[ operation Edit()
    //#]
}

Button ButtonEdit::getEdit() const {
    return Edit;
}

void ButtonEdit::setEdit(Button p_Edit) {
    Edit = p_Edit;
}

EditDepartmentForm* ButtonEdit::getItsEditDepartmentForm() const {
    return itsEditDepartmentForm;
}

void ButtonEdit::setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    if(p_EditDepartmentForm != NULL)
        {
            p_EditDepartmentForm->_setItsButtonEdit(this);
        }
    _setItsEditDepartmentForm(p_EditDepartmentForm);
}

EditProductForm* ButtonEdit::getItsEditProductForm() const {
    return itsEditProductForm;
}

void ButtonEdit::setItsEditProductForm(EditProductForm* p_EditProductForm) {
    if(p_EditProductForm != NULL)
        {
            p_EditProductForm->_setItsButtonEdit(this);
        }
    _setItsEditProductForm(p_EditProductForm);
}

void ButtonEdit::cleanUpRelations() {
    if(itsEditDepartmentForm != NULL)
        {
            ButtonEdit* p_ButtonEdit = itsEditDepartmentForm->getItsButtonEdit();
            if(p_ButtonEdit != NULL)
                {
                    itsEditDepartmentForm->__setItsButtonEdit(NULL);
                }
            itsEditDepartmentForm = NULL;
        }
    if(itsEditProductForm != NULL)
        {
            ButtonEdit* p_ButtonEdit = itsEditProductForm->getItsButtonEdit();
            if(p_ButtonEdit != NULL)
                {
                    itsEditProductForm->__setItsButtonEdit(NULL);
                }
            itsEditProductForm = NULL;
        }
}

void ButtonEdit::__setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    itsEditDepartmentForm = p_EditDepartmentForm;
}

void ButtonEdit::_setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    if(itsEditDepartmentForm != NULL)
        {
            itsEditDepartmentForm->__setItsButtonEdit(NULL);
        }
    __setItsEditDepartmentForm(p_EditDepartmentForm);
}

void ButtonEdit::_clearItsEditDepartmentForm() {
    itsEditDepartmentForm = NULL;
}

void ButtonEdit::__setItsEditProductForm(EditProductForm* p_EditProductForm) {
    itsEditProductForm = p_EditProductForm;
}

void ButtonEdit::_setItsEditProductForm(EditProductForm* p_EditProductForm) {
    if(itsEditProductForm != NULL)
        {
            itsEditProductForm->__setItsButtonEdit(NULL);
        }
    __setItsEditProductForm(p_EditProductForm);
}

void ButtonEdit::_clearItsEditProductForm() {
    itsEditProductForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.cpp
*********************************************************************/
