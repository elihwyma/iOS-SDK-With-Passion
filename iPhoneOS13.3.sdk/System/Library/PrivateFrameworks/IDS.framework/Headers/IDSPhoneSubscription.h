//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying>
{
    long long _subscriptionSlot;
}

+ (BOOL)supportsSecureCoding;
+ (id)phoneSubscriptionWithSubscriptionSlot:(long long)arg1;
+ (id)phoneSubscriptionWithSIM:(id)arg1;
+ (id)phoneSubscriptionsFromCTSIMs:(id)arg1;
+ (id)CTSIMSFromPhoneSubscriptions:(id)arg1;
@property(readonly, nonatomic) long long subscriptionSlot; // @synthesize subscriptionSlot=_subscriptionSlot;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToPhoneSubscription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithSubscriptionSlot:(long long)arg1;
- (id)matchingSim;

@end

