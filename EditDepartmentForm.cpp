/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EditDepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EditDepartmentForm.cpp
*********************************************************************/

//## auto_generated
#include "EditDepartmentForm.h"
//## link itsButtonEdit
#include "ButtonEdit.h"
//## link itsDepartmentForm
#include "DepartmentForm.h"
//## package Default

//## class EditDepartmentForm
EditDepartmentForm::EditDepartmentForm() {
    itsButtonEdit = NULL;
    itsDepartmentForm = NULL;
}

EditDepartmentForm::~EditDepartmentForm() {
    cleanUpRelations();
}

void EditDepartmentForm::Edit() {
    //#[ operation Edit()
    //#]
}

long EditDepartmentForm::getNameDepartment() const {
    return NameDepartment;
}

void EditDepartmentForm::setNameDepartment(long p_NameDepartment) {
    NameDepartment = p_NameDepartment;
}

int EditDepartmentForm::getNumberDepartment() const {
    return NumberDepartment;
}

void EditDepartmentForm::setNumberDepartment(int p_NumberDepartment) {
    NumberDepartment = p_NumberDepartment;
}

ButtonEdit* EditDepartmentForm::getItsButtonEdit() const {
    return itsButtonEdit;
}

void EditDepartmentForm::setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(p_ButtonEdit != NULL)
        {
            p_ButtonEdit->_setItsEditDepartmentForm(this);
        }
    _setItsButtonEdit(p_ButtonEdit);
}

DepartmentForm* EditDepartmentForm::getItsDepartmentForm() const {
    return itsDepartmentForm;
}

void EditDepartmentForm::setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    if(p_DepartmentForm != NULL)
        {
            p_DepartmentForm->_setItsEditDepartmentForm(this);
        }
    _setItsDepartmentForm(p_DepartmentForm);
}

void EditDepartmentForm::cleanUpRelations() {
    if(itsButtonEdit != NULL)
        {
            EditDepartmentForm* p_EditDepartmentForm = itsButtonEdit->getItsEditDepartmentForm();
            if(p_EditDepartmentForm != NULL)
                {
                    itsButtonEdit->__setItsEditDepartmentForm(NULL);
                }
            itsButtonEdit = NULL;
        }
    if(itsDepartmentForm != NULL)
        {
            EditDepartmentForm* p_EditDepartmentForm = itsDepartmentForm->getItsEditDepartmentForm();
            if(p_EditDepartmentForm != NULL)
                {
                    itsDepartmentForm->__setItsEditDepartmentForm(NULL);
                }
            itsDepartmentForm = NULL;
        }
}

void EditDepartmentForm::__setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    itsButtonEdit = p_ButtonEdit;
}

void EditDepartmentForm::_setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(itsButtonEdit != NULL)
        {
            itsButtonEdit->__setItsEditDepartmentForm(NULL);
        }
    __setItsButtonEdit(p_ButtonEdit);
}

void EditDepartmentForm::_clearItsButtonEdit() {
    itsButtonEdit = NULL;
}

void EditDepartmentForm::__setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    itsDepartmentForm = p_DepartmentForm;
}

void EditDepartmentForm::_setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    if(itsDepartmentForm != NULL)
        {
            itsDepartmentForm->__setItsEditDepartmentForm(NULL);
        }
    __setItsDepartmentForm(p_DepartmentForm);
}

void EditDepartmentForm::_clearItsDepartmentForm() {
    itsDepartmentForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EditDepartmentForm.cpp
*********************************************************************/
