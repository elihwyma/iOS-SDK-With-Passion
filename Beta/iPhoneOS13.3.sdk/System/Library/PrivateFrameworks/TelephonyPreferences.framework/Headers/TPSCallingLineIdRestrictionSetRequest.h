/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCallingLineIdRestrictionRequest.h>

@interface TPSCallingLineIdRestrictionSetRequest : TPSCallingLineIdRestrictionRequest

{
    long long _state;
}

@property (nonatomic, readonly) long long state;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 state:(long long)arg2;

@end
