/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSRequest.h>

@class CTCallForwardingValue;

@interface TPSSetCallForwardingRequest : TPSRequest

{
    CTCallForwardingValue *_value;
}

@property (nonatomic, readonly) CTCallForwardingValue *value;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 value:(id)arg2;

@end
