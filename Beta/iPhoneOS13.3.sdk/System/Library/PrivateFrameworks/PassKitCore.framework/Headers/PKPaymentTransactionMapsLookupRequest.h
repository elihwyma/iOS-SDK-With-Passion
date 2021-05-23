/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKPaymentApplication, PKPaymentTransaction;

@protocol OS_dispatch_queue;

@interface PKPaymentTransactionMapsLookupRequest : NSObject

{
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _clearingAttempt;
}

@property (nonatomic, getter=isClearingAttempt) _Bool clearingAttempt;

- (id)_merchantLookupRequest;
- (id)_brandFromMapItem:(id)arg1;
- (id)_merchantFromMapItem:(id)arg1;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;
- (void)startLookupWithCompletion:(CDUnknownBlockType)arg1;

@end
