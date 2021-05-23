/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSJSResponsePayload : IKJSObject

{
    NSString *_authN;
    NSString *_username;
    NSDate *_expirationDate;
    NSString *_userMetadata;
    NSString *_logout;
    NSArray *_userChannelList;
    NSString *_authenticationScheme;
    NSString *_statusCode;
    NSNumber *_expectedAction;
    NSArray *_subscriptions;
    NSArray *_clearSubscriptions;
    NSString *_appBundleIdentifier;
}

@property (copy, nonatomic) NSString *authN;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *userMetadata;
@property (copy, nonatomic) NSString *logout;
@property (copy, nonatomic) NSArray *userChannelList;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSNumber *expectedAction;
@property (copy, nonatomic) NSArray *subscriptions;
@property (copy, nonatomic) NSArray *clearSubscriptions;
@property (copy, nonatomic) NSString *appBundleIdentifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
