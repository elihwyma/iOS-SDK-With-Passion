/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class VSIdentityProviderRequest;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestContext : NSObject

{
    _Bool _attemptedVerificationStateReset;
    VSIdentityProviderRequest *_request;
}

@property (retain, nonatomic) VSIdentityProviderRequest *request;
@property (nonatomic) _Bool attemptedVerificationStateReset;

@end
