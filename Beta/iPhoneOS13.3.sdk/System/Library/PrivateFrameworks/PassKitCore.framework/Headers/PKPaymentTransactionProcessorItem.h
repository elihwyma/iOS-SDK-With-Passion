/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentTransaction;

@interface PKPaymentTransactionProcessorItem : NSObject

{
    struct os_unfair_lock_s _transactionLock;
    _Bool _foundOptimalLocation;
    _Bool _useBackgroundLocation;
    _Bool _isClearingAttempt;
    PKPaymentTransaction *_paymentTransaction;
    PKPaymentApplication *_paymentApplication;
    NSString *_passUniqueIdentifier;
}

@property (retain, nonatomic) PKPaymentTransaction *paymentTransaction;
@property (retain, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) _Bool foundOptimalLocation;
@property (nonatomic) _Bool useBackgroundLocation;
@property (nonatomic) _Bool isClearingAttempt;

- (id)init;

@end
