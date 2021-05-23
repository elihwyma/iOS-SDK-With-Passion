/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface VSJSSubscription : IKJSObject

{
    NSString *_bundleId;
    NSDate *_expirationDate;
    long long _accessLevel;
    NSArray *_tierIdentifiers;
    NSString *_billingIdentifier;
}

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

+ (id)toVSSubscriptions:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toVSSubscription;

@end
