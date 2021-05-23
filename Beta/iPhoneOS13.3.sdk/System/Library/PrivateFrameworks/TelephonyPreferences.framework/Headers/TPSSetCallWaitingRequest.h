/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCallWaitingRequest.h>

@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest

{
    _Bool _enabled;
}

@property (nonatomic, readonly) _Bool enabled;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 enabled:(_Bool)arg2;

@end
