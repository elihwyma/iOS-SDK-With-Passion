/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCallClassRequest.h>

@interface TPSCallForwardingRequest : TPSCallClassRequest

{
    int _reason;
}

@property (nonatomic, readonly) int reason;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;
- (id)initWithSubscriptionContext:(id)arg1 reason:(int)arg2;

@end
