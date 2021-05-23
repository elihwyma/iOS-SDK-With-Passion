/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKPaymentApplication, PKPaymentPass, PKPaymentTransaction;

@interface PKPendingPaymentTransaction : NSObject

{
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
}

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;

- (id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3;

@end
