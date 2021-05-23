/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSDecimalNumber;

@interface PKCreditAccountBalanceSummary : NSObject <Swift>

{
    NSDate *_openingDate;
    NSDate *_closingDate;
    NSDecimalNumber *_purchases;
    NSDecimalNumber *_pendingPurchases;
    NSDecimalNumber *_balanceTransfers;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_feesCharged;
    NSDecimalNumber *_paymentsAndCredits;
    NSDecimalNumber *_payments;
    NSDecimalNumber *_credits;
    NSDecimalNumber *_rewardsEarned;
    NSDecimalNumber *_rewardsRedeemed;
}

@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (copy, nonatomic) NSDecimalNumber *purchases;
@property (copy, nonatomic) NSDecimalNumber *pendingPurchases;
@property (copy, nonatomic) NSDecimalNumber *balanceTransfers;
@property (copy, nonatomic) NSDecimalNumber *interestCharged;
@property (copy, nonatomic) NSDecimalNumber *feesCharged;
@property (copy, nonatomic) NSDecimalNumber *paymentsAndCredits;
@property (copy, nonatomic) NSDecimalNumber *payments;
@property (copy, nonatomic) NSDecimalNumber *credits;
@property (copy, nonatomic) NSDecimalNumber *rewardsEarned;
@property (copy, nonatomic) NSDecimalNumber *rewardsRedeemed;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
