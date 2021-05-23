/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, VSOptional;

__attribute__((visibility("hidden")))
@interface VSAccountAuthentication : NSObject

{
    NSString *_username;
    VSOptional *_authenticationToken;
    NSString *_appBundleIdentifier;
}

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) VSOptional *authenticationToken;
@property (copy, nonatomic) NSString *appBundleIdentifier;

- (id)init;
- (id)description;

@end
