/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@interface AKAuthorizationValidator : NSObject

+ (_Bool)canPerformAuthorizationRequest:(id)arg1 error:(id *)arg2;
+ (_Bool)canPerformPasswordRequest:(id)arg1 error:(id *)arg2;
+ (_Bool)_requirePasscodeSet;
+ (_Bool)canPerformCredentialRequest:(id)arg1 error:(id *)arg2;
+ (_Bool)shouldContinueWithResponse:(id)arg1 error:(id *)arg2;

@end
