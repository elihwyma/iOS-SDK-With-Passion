/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@interface IDSPhoneSubscription : NSObject

{
    long long _subscriptionSlot;
}

@property (nonatomic, readonly) long long subscriptionSlot;

+ (_Bool)supportsSecureCoding;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1;
+ (id)CTSIMSFromPhoneSubscriptions:(id)arg1;
+ (id)phoneSubscriptionsFromCTSIMs:(id)arg1;
+ (id)phoneSubscriptionWithSIM:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchingSim;
- (id)initWithSubscriptionSlot:(long long)arg1;
- (_Bool)isEqualToPhoneSubscription:(id)arg1;

@end
