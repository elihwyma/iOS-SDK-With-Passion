/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class WLAuthenticationCredentials, WLDeviceAuthentication;

@interface WLCredentialStore : NSObject

{
    WLAuthenticationCredentials *_credentials;
    WLDeviceAuthentication *_authentication;
}

+ (id)sharedInstance;

- (id)init;
- (id)currentAuthentication;
- (id)credentialsForAuthentication:(id)arg1;
- (void)setCredentials:(id)arg1 forAuthentication:(id)arg2;

@end
