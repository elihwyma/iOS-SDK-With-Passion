/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) NSString *matchingIdentifier;
@property (nonatomic, readonly) NSString *_transactionIdentifier;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) SKPaymentTransaction *originalTransaction;
@property (nonatomic, readonly) SKPayment *payment;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) NSDate *transactionDate;
@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) NSData *transactionReceipt;
@property (nonatomic, readonly) long long transactionState;

- (id)init;
- (void)_setError:(id)arg1;
- (id)UUID;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithPayment:(id)arg1;
- (_Bool)mergeWithServerTransaction:(id)arg1;
- (id)initWithServerTransaction:(id)arg1;
- (_Bool)canMergeWithTransaction:(id)arg1;
- (_Bool)mergeWithTransaction:(id)arg1;
- (void)_setDownloads:(id)arg1;
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionState:(long long)arg1;

@end
