/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSDate, PKExpressTransactionState, PKFelicaAppletHistory, PKPaymentApplication, PKPaymentPass, PKPaymentTransaction, PKTransitAppletHistory;

@interface PKContactlessInterfaceTransactionContext : NSObject

{
    _Bool _success;
    _Bool _incompatible;
    NSDate *_date;
    PKPaymentPass *_paymentPass;
    PKPaymentApplication *_paymentApplication;
    PKPaymentTransaction *_transaction;
    NSArray *_valueAddedServicePasses;
    NSArray *_valueAddedServiceTransactions;
    PKTransitAppletHistory *_transitHistory;
    PKExpressTransactionState *_expressState;
}

@property (nonatomic) _Bool success;
@property (nonatomic, getter=isIncompatible) _Bool incompatible;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSArray *valueAddedServicePasses;
@property (retain, nonatomic) NSArray *valueAddedServiceTransactions;
@property (retain, nonatomic) PKTransitAppletHistory *transitHistory;
@property (nonatomic, readonly) PKFelicaAppletHistory *felicaHistory;
@property (retain, nonatomic) PKExpressTransactionState *expressState;

@end
