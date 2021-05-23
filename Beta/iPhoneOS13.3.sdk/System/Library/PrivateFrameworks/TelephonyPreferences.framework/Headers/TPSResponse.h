/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSError, NSString;

@interface TPSResponse : NSObject

{
    NSError *_error;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;

@end
