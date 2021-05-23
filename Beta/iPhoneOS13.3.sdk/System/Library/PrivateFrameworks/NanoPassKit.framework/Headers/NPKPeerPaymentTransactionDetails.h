/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, PKPaymentTransaction;

@interface NPKPeerPaymentTransactionDetails : NSObject

{
    PKPaymentTransaction *_transaction;
    NSString *_serviceIdentifier;
    unsigned long long _paymentStatus;
    NSArray *_availableActions;
    NSDate *_availableActionsFetchDate;
}

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) unsigned long long paymentStatus;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) NSDate *availableActionsFetchDate;

- (id)description;

@end
