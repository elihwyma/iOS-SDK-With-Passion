/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKCreditAccountStatement : NSObject <Swift>

{
    NSString *_identifier;
    NSDate *_openingDate;
    NSDate *_closingDate;
    NSDate *_paymentDueDate;
    NSString *_currencyCode;
    NSDecimalNumber *_statementBalance;
    NSDecimalNumber *_minimumDue;
    NSDecimalNumber *_purchases;
    NSDecimalNumber *_feesCharged;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_balanceTransfers;
    NSDecimalNumber *_paymentsAndCredits;
    NSDecimalNumber *_payments;
    NSDecimalNumber *_credits;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_rewardsEarned;
    NSDecimalNumber *_rewardsRedeemed;
    NSDecimalNumber *_rewardsYTD;
    NSDecimalNumber *_rewardsLifetime;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (copy, nonatomic) NSDate *paymentDueDate;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDecimalNumber *statementBalance;
@property (copy, nonatomic) NSDecimalNumber *minimumDue;
@property (copy, nonatomic) NSDecimalNumber *purchases;
@property (copy, nonatomic) NSDecimalNumber *feesCharged;
@property (copy, nonatomic) NSDecimalNumber *interestCharged;
@property (copy, nonatomic) NSDecimalNumber *balanceTransfers;
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits;
@property (copy, nonatomic) NSDecimalNumber *payments;
@property (copy, nonatomic) NSDecimalNumber *credits;
@property (copy, nonatomic) NSDecimalNumber *rewardsBalance;
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned;
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed;
@property (copy, nonatomic) NSDecimalNumber *rewardsYTD;
@property (copy, nonatomic) NSDecimalNumber *rewardsLifetime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithRecord:(id)arg1;

@end
