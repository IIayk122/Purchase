/*********************************************************************
	Rhapsody	: 9.0 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DeleteProductForm
//!	Generated Date	: Wed, 3, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DeleteProductForm.h
*********************************************************************/

#ifndef DeleteProductForm_H
#define DeleteProductForm_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonDelete
class ButtonDelete;

//## link itsProductForm
class ProductForm;

//## package Default

//## class DeleteProductForm
class DeleteProductForm {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DeleteProductForm();
    
    //## auto_generated
    ~DeleteProductForm();
    
    ////    Operations    ////
    
    //## operation Delete()
    void Delete();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCodeProduct() const;
    
    //## auto_generated
    void setCodeProduct(int p_CodeProduct);
    
    //## auto_generated
    ButtonDelete* getItsButtonDelete() const;
    
    //## auto_generated
    void setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    ProductForm* getItsProductForm() const;
    
    //## auto_generated
    void setItsProductForm(ProductForm* p_ProductForm);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int CodeProduct;		//## attribute CodeProduct
    
    ////    Relations and components    ////
    
    ButtonDelete* itsButtonDelete;		//## link itsButtonDelete
    
    ProductForm* itsProductForm;		//## link itsProductForm
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _setItsButtonDelete(ButtonDelete* p_ButtonDelete);
    
    //## auto_generated
    void _clearItsButtonDelete();
    
    //## auto_generated
    void __setItsProductForm(ProductForm* p_ProductForm);
    
    //## auto_generated
    void _setItsProductForm(ProductForm* p_ProductForm);
    
    //## auto_generated
    void _clearItsProductForm();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DeleteProductForm.h
*********************************************************************/
