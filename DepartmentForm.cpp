/********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DepartmentForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DepartmentForm.cpp
*********************************************************************/

//## auto_generated
#include "DepartmentForm.h"
//## link itsAddDepartmentForm
#include "AddDepartmentForm.h"
//## link itsDeleteDepartmentForm
#include "DeleteDepartmentForm.h"
//## link itsEditDepartmentForm
#include "EditDepartmentForm.h"
//## link itsMainForm
#include "MainForm.h"
//## package Default

//## class DepartmentForm
DepartmentForm::DepartmentForm() {
    itsAddDepartmentForm = NULL;
    itsDeleteDepartmentForm = NULL;
    itsEditDepartmentForm = NULL;
    itsMainForm = NULL;
}

DepartmentForm::~DepartmentForm() {
    cleanUpRelations();
}

void DepartmentForm::OpenForm() {
    //#[ operation OpenForm()
    //#]
}

Button DepartmentForm::getAdd() const {
    return Add;
}

void DepartmentForm::setAdd(Button p_Add) {
    Add = p_Add;
}

Button DepartmentForm::getDelete() const {
    return Delete;
}

void DepartmentForm::setDelete(Button p_Delete) {
    Delete = p_Delete;
}

Button DepartmentForm::getEdit() const {
    return Edit;
}

void DepartmentForm::setEdit(Button p_Edit) {
    Edit = p_Edit;
}

Table DepartmentForm::getTableDepartments() const {
    return TableDepartments;
}

void DepartmentForm::setTableDepartments(Table p_TableDepartments) {
    TableDepartments = p_TableDepartments;
}

AddDepartmentForm* DepartmentForm::getItsAddDepartmentForm() const {
    return itsAddDepartmentForm;
}

void DepartmentForm::setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm) {
    if(p_AddDepartmentForm != NULL)
        {
            p_AddDepartmentForm->_setItsDepartmentForm(this);
        }
    _setItsAddDepartmentForm(p_AddDepartmentForm);
}

DeleteDepartmentForm* DepartmentForm::getItsDeleteDepartmentForm() const {
    return itsDeleteDepartmentForm;
}

void DepartmentForm::setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    if(p_DeleteDepartmentForm != NULL)
        {
            p_DeleteDepartmentForm->_setItsDepartmentForm(this);
        }
    _setItsDeleteDepartmentForm(p_DeleteDepartmentForm);
}

EditDepartmentForm* DepartmentForm::getItsEditDepartmentForm() const {
    return itsEditDepartmentForm;
}

void DepartmentForm::setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    if(p_EditDepartmentForm != NULL)
        {
            p_EditDepartmentForm->_setItsDepartmentForm(this);
        }
    _setItsEditDepartmentForm(p_EditDepartmentForm);
}

MainForm* DepartmentForm::getItsMainForm() const {
    return itsMainForm;
}

void DepartmentForm::setItsMainForm(MainForm* p_MainForm) {
    if(p_MainForm != NULL)
        {
            p_MainForm->_setItsDepartmentForm(this);
        }
    _setItsMainForm(p_MainForm);
}

void DepartmentForm::cleanUpRelations() {
    if(itsAddDepartmentForm != NULL)
        {
            DepartmentForm* p_DepartmentForm = itsAddDepartmentForm->getItsDepartmentForm();
            if(p_DepartmentForm != NULL)
                {
                    itsAddDepartmentForm->__setItsDepartmentForm(NULL);
                }
            itsAddDepartmentForm = NULL;
        }
    if(itsDeleteDepartmentForm != NULL)
        {
            DepartmentForm* p_DepartmentForm = itsDeleteDepartmentForm->getItsDepartmentForm();
            if(p_DepartmentForm != NULL)
                {
                    itsDeleteDepartmentForm->__setItsDepartmentForm(NULL);
                }
            itsDeleteDepartmentForm = NULL;
        }
    if(itsEditDepartmentForm != NULL)
        {
            DepartmentForm* p_DepartmentForm = itsEditDepartmentForm->getItsDepartmentForm();
            if(p_DepartmentForm != NULL)
                {
                    itsEditDepartmentForm->__setItsDepartmentForm(NULL);
                }
            itsEditDepartmentForm = NULL;
        }
    if(itsMainForm != NULL)
        {
            DepartmentForm* p_DepartmentForm = itsMainForm->getItsDepartmentForm();
            if(p_DepartmentForm != NULL)
                {
                    itsMainForm->__setItsDepartmentForm(NULL);
                }
            itsMainForm = NULL;
        }
}

void DepartmentForm::__setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm) {
    itsAddDepartmentForm = p_AddDepartmentForm;
}

void DepartmentForm::_setItsAddDepartmentForm(AddDepartmentForm* p_AddDepartmentForm) {
    if(itsAddDepartmentForm != NULL)
        {
            itsAddDepartmentForm->__setItsDepartmentForm(NULL);
        }
    __setItsAddDepartmentForm(p_AddDepartmentForm);
}

void DepartmentForm::_clearItsAddDepartmentForm() {
    itsAddDepartmentForm = NULL;
}

void DepartmentForm::__setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    itsDeleteDepartmentForm = p_DeleteDepartmentForm;
}

void DepartmentForm::_setItsDeleteDepartmentForm(DeleteDepartmentForm* p_DeleteDepartmentForm) {
    if(itsDeleteDepartmentForm != NULL)
        {
            itsDeleteDepartmentForm->__setItsDepartmentForm(NULL);
        }
    __setItsDeleteDepartmentForm(p_DeleteDepartmentForm);
}

void DepartmentForm::_clearItsDeleteDepartmentForm() {
    itsDeleteDepartmentForm = NULL;
}

void DepartmentForm::__setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    itsEditDepartmentForm = p_EditDepartmentForm;
}

void DepartmentForm::_setItsEditDepartmentForm(EditDepartmentForm* p_EditDepartmentForm) {
    if(itsEditDepartmentForm != NULL)
        {
            itsEditDepartmentForm->__setItsDepartmentForm(NULL);
        }
    __setItsEditDepartmentForm(p_EditDepartmentForm);
}

void DepartmentForm::_clearItsEditDepartmentForm() {
    itsEditDepartmentForm = NULL;
}

void DepartmentForm::__setItsMainForm(MainForm* p_MainForm) {
    itsMainForm = p_MainForm;
}

void DepartmentForm::_setItsMainForm(MainForm* p_MainForm) {
    if(itsMainForm != NULL)
        {
            itsMainForm->__setItsDepartmentForm(NULL);
        }
    __setItsMainForm(p_MainForm);
}

void DepartmentForm::_clearItsMainForm() {
    itsMainForm = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DepartmentForm.cpp
*********************************************************************/
