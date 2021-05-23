/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSSet, NSString, VSAccountAuthentication;

__attribute__((visibility("hidden")))
@interface VSApplicationControllerResponse : NSObject

{
    NSString *_authenticationScheme;
    NSString *_responseStatusCode;
    NSString *_responseString;
    NSNumber *_expectedAction;
    VSAccountAuthentication *_accountAuthentication;
    NSSet *_accountChannelIDs;
    NSArray *_subscriptionsToAdd;
    NSArray *_subscriptionsToRemoveByBundleID;
}

@property (copy, nonatomic) NSString *authenticationScheme;
@property (copy, nonatomic) NSString *responseStatusCode;
@property (copy, nonatomic) NSString *responseString;
@property (copy, nonatomic) NSNumber *expectedAction;
@property (retain, nonatomic) VSAccountAuthentication *accountAuthentication;
@property (copy, nonatomic) NSSet *accountChannelIDs;
@property (copy, nonatomic) NSArray *subscriptionsToAdd;
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID;

- (id)description;

@end
