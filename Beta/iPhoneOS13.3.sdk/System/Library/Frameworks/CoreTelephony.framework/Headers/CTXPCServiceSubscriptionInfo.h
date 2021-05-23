/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject

{
    NSArray *_subscriptions;
    NSArray *_subscriptionsInUse;
    NSArray *_subscriptionsValid;
}

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSArray *subscriptionsInUse;
@property (retain, nonatomic) NSArray *subscriptionsValid;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
