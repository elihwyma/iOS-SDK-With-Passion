/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCSSRequestDelegate.h>

@class NSString, SSAccount, SSAuthenticateRequest;

@interface MCSSAuthenticationRequestDelegate : MCSSRequestDelegate

{
    SSAccount *_authenticatedAccount;
}

@property (retain, nonatomic, readonly) SSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instanceWithAuthenticationContext:(id)arg1;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)authenticateRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)storeLoginFailedError;

@end
