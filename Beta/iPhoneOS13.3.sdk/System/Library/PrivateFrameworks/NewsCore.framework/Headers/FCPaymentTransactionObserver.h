/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCPaymentTransactionObserverDelegate;

@interface FCPaymentTransactionObserver : NSObject

{
    id <FCPaymentTransactionObserverDelegate> _delegate;
}

@property (weak, nonatomic) id <FCPaymentTransactionObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)finishTransaction:(id)arg1;
- (void)failedTransaction:(id)arg1;

@end
