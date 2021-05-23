/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKCreditAccountRates, PKCurrencyAmount;

@interface PKAccountCreditTermsUpdate : NSObject <Swift>

{
    long long _type;
    long long _initiator;
    NSString *_requestIdentifier;
    NSString *_adverseActionContentIdentifier;
    PKCurrencyAmount *_creditLimit;
    PKCreditAccountRates *_rates;
}

@property (nonatomic) long long type;
@property (nonatomic) long long initiator;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *adverseActionContentIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *creditLimit;
@property (retain, nonatomic) PKCreditAccountRates *rates;
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

@end
