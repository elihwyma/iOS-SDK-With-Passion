/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject

{
    AKAppleIDAuthenticationContext *_context;
}

@property (retain, nonatomic) AKAppleIDAuthenticationContext *context;

- (id)initWithContext:(id)arg1;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;
- (void)_revokeDeviceTrust;
- (void)handleResponseError:(id)arg1;

@end
