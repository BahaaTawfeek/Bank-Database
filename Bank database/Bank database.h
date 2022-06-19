#ifndef BANK_DATABASE_H_INCLUDED
#define BANK_DATABASE_H_INCLUDED

typedef struct customer
{
    int id ;
    char type[7] ;
    char name[50];
    double cash ;

}customer_t ;




/*********************************************************************************************************/
/*	Function Name        : CreateNewCustomer                                                              */
/*	Function Returns     : void                                                                          */
/*	Function Arguments   : void                                                                          */
/*	Function Description : Create a new customer for bank database system                                */
/**********************************************************************************************************/
void CreateNewCustomer(void);


/*********************************************************************************************************/
/*	Function Name        : EditCustomer                                                                   */
/*	Function Returns     : void                                                                          */
/*	Function Arguments   : int   id                                                                       */
/*	Function Description : Edit a customer of bank database system                                        */
/**********************************************************************************************************/
void  EditCustomer(int id ) ;


/*********************************************************************************************************/
/*	Function Name        : PrintCustomerData                                                            */
/*	Function Returns     : void                                                                          */
/*	Function Arguments   : int  id                                                                        */
/*	Function Description : Print Customer Data of bank database system                                     */
/**********************************************************************************************************/
void PrintCustomerData(int id) ;


/*********************************************************************************************************/
/*	Function Name        : TransferMoney                                                                 */
/*	Function Returns     : void                                                                          */
//	Function Arguments   : int source_id ,int destination_id,double money                                                                                                  */
//	Function Description : Transfer Money that take scr and dist and amount via bank database system                              */
/********************************************************************************************************/
void TransferMoney(int source_id ,int destination_id,double money);


/*********************************************************************************************************/
/*	Function Name        : DeleteCustomerData                                                              */
/*	Function Returns     : void                                                                          */
/*	Function Arguments   : int id                                                                          */
/*	Function Description : delete a customer data  from bank database system                                */
/**********************************************************************************************************/
void DeleteCustomerData(int id );



#endif // BANK_DATABASE_H_INCLUDED
