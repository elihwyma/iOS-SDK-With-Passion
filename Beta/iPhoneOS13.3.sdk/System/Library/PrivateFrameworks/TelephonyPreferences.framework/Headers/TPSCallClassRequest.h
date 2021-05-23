/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSRequest.h>

@interface TPSCallClassRequest : TPSRequest

{
    int _callClass;
}

@property (nonatomic) int callClass;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;

@end
