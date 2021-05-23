/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSSet, NSString, PKCurrencyAmount, PKPaymentTransactionRewards;

@interface PKAccountRewards : NSObject <Swift>

{
    NSString *_identifier;
    PKCurrencyAmount *_currencyAmount;
    NSString *_status;
    long long _statusCode;
    PKPaymentTransactionRewards *_rewards;
    long long _type;
    NSSet *_transactionIdentifiers;
    NSSet *_rewardsAddedIdentifiers;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *status;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKPaymentTransactionRewards *rewards;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSSet *transactionIdentifiers;
@property (copy, nonatomic) NSSet *rewardsAddedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (_Bool)isEqualToAccountEvent:(id)arg1;

@end
