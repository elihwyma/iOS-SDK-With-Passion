/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSCallClassRequest.h>

@class NSString;

@interface TPSCallWaitingRequest : TPSCallClassRequest

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)unarchivedObjectClasses;

- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRequest:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2;

@end
