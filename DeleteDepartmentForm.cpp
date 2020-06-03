/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteDepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteDepartmentForm.cpp
*********************************************************************/

//## auto_generated
#include "DeleteDepartmentForm.h"
//## link itsButtonDelete
#include "ButtonDelete.h"
//## link itsDepartmentForm
#include "DepartmentForm.h"
//## package Default

//## class DeleteDepartmentForm
DeleteDepartmentForm::DeleteDepartmentForm() {
    itsButtonDelete = NULL;
    itsDepartmentForm = NULL;
}

DeleteDepartmentForm::~DeleteDepartmentForm() {
    cleanUpRelations();
}

void DeleteDepartmentForm::Delete() {
    //#[ operation Delete()
    //#]
}

int DeleteDepartmentForm::getNumberDepartment() const {
    return NumberDepartment;
}

void DeleteDepartmentForm::setNumberDepartment(int p_NumberDepartment) {
    NumberDepartment = p_NumberDepartment;
}

ButtonDelete* DeleteDepartmentForm::getItsButtonDelete() const {
    return itsButtonDelete;
}

void DeleteDepartmentForm::setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(p_ButtonDelete != NULL)
        {
            p_ButtonDelete->_setItsDeleteDepartmentForm(this);
        }
    _setItsButtonDelete(p_ButtonDelete);
}

DepartmentForm* DeleteDepartmentForm::getItsDepartmentForm() const {
    return itsDepartmentForm;
}

void DeleteDepartmentForm::setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    if(p_DepartmentForm != NULL)
        {
            p_DepartmentForm->_setItsDeleteDepartmentForm(this);
        }
    _setItsDepartmentForm(p_DepartmentForm);
}

void DeleteDepartmentForm::cleanUpRelations() {
    if(itsButtonDelete != NULL)
        {
            DeleteDepartmentForm* p_DeleteDepartmentForm = itsButtonDelete->getItsDeleteDepartmentForm();
            if(p_DeleteDepartmentForm != NULL)
                {
                    itsButtonDelete->__setItsDeleteDepartmentForm(NULL);
                }
            itsButtonDelete = NULL;
        }
    if(itsDepartmentForm != NULL)
        {
            DeleteDepartmentForm* p_DeleteDepartmentForm = itsDepartmentForm->getItsDeleteDepartmentForm();
            if(p_DeleteDepartmentForm != NULL)
                {
                    itsDepartmentForm->__setItsDeleteDepartmentForm(NULL);
                }
            itsDepartmentForm = NULL;
        }
}

void DeleteDepartmentForm::__setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    itsButtonDelete = p_ButtonDelete;
}

void DeleteDepartmentForm::_setItsButtonDelete(ButtonDelete* p_ButtonDelete) {
    if(itsButtonDelete != NULL)
        {
            itsButtonDelete->__setItsDeleteDepartmentForm(NULL);
        }
    __setItsButtonDelete(p_ButtonDelete);
}

void DeleteDepartmentForm::_clearItsButtonDelete() {
    itsButtonDelete = NULL;
}

void DeleteDepartmentForm::__setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    itsDepartmentForm = p_DepartmentForm;
}

void DeleteDepartmentForm::_setItsDepartmentForm(DepartmentForm* p_DepartmentForm) {
    if(itsDepartmentForm != NULL)
        {
            itsDepartmentForm->__setItsDeleteDepartmentForm(NULL);
        }
    __setItsDepartmentForm(p_DepartmentForm);
}

void DeleteDepartmentForm::_clearItsDepartmentForm() {
    itsDepartmentForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteDepartmentForm.cpp
*********************************************************************/
