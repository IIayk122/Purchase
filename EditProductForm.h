/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EditProductForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EditProductForm.h
*********************************************************************/

#ifndef EditProductForm_H
#define EditProductForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonEdit
class ButtonEdit;

//## link itsProductForm
class ProductForm;

//## package Default

//## class EditProductForm
class EditProductForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EditProductForm();
    
    //## auto_generated
    ~EditProductForm();
    
    ////    Operations    ////
    
    //## operation Edit()
    void Edit();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCodeProduct() const;
    
    //## auto_generated
    void setCodeProduct(int p_CodeProduct);
    
    //## auto_generated
    long getNameProduct() const;
    
    //## auto_generated
    void setNameProduct(long p_NameProduct);
    
    //## auto_generated
    long getUnits() const;
    
    //## auto_generated
    void setUnits(long p_Units);
    
    //## auto_generated
    ButtonEdit* getItsButtonEdit() const;
    
    //## auto_generated
    void setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    ProductForm* getItsProductForm() const;
    
    //## auto_generated
    void setItsProductForm(ProductForm* p_ProductForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int CodeProduct;		//## attribute CodeProduct
    
    long NameProduct;		//## attribute NameProduct
    
    long Units;		//## attribute Units
    
    ////    Relations and components    ////
    
    ButtonEdit* itsButtonEdit;		//## link itsButtonEdit
    
    ProductForm* itsProductForm;		//## link itsProductForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _clearItsButtonEdit();
    
    //## auto_generated
    void __setItsProductForm(ProductForm* p_ProductForm);
    
    //## auto_generated
    void _setItsProductForm(ProductForm* p_ProductForm);
    
    //## auto_generated
    void _clearItsProductForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EditProductForm.h
*********************************************************************/
