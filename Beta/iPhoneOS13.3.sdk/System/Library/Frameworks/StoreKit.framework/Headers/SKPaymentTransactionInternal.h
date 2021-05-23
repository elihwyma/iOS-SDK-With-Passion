/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment, SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface SKPaymentTransactionInternal : NSObject

{
    NSString *_uuid;
    NSArray *_downloads;
    NSError *_error;
    SKPaymentTransaction *_originalTransaction;
    SKPayment *_payment;
    NSString *_temporaryIdentifier;
    NSDate *_transactionDate;
    NSString *_transactionIdentifier;
    NSData *_transactionReceipt;
    long long _transactionState;
}

- (id)init;

@end
