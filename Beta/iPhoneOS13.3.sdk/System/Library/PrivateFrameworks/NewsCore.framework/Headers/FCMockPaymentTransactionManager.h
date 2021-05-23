/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@protocol FCPaymentTransactionManagerDelegate;

@interface FCMockPaymentTransactionManager : NSObject

{
    id <FCPaymentTransactionManagerDelegate> delegate;
    NSString *_productID;
    long long _transactionState;
    NSError *_transactionError;
    unsigned long long _transactionExpectation;
}

@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long transactionState;
@property (copy, nonatomic) NSError *transactionError;
@property (nonatomic) unsigned long long transactionExpectation;
@property (weak, nonatomic) id <FCPaymentTransactionManagerDelegate> delegate;

+ (id)mockPaymentTransactionWithSuccessForProductID:(id)arg1;
+ (id)mockPaymentTransactionWithFailForProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;

- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8;

@end
