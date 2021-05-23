/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class SSAuthenticateRequest;

@interface VUIAuthenticationManager : NSObject

{
    _Bool __isObservingAccountStoreChange;
    SSAuthenticateRequest *__authRequest;
}

@property (retain, nonatomic) SSAuthenticateRequest *_authRequest;
@property (nonatomic) _Bool _isObservingAccountStoreChange;

+ (id)sharedInstance;
+ (id)userFullName;
+ (_Bool)allowsAccountModification;
+ (_Bool)userHasActiveAccount;
+ (void)requestAuthenticationAlwaysPrompt:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_userAccount;
+ (void)_performAuthenticationWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)userAccountName;
+ (id)userFirstName;
+ (id)userLastName;
+ (void)signInUserWithAppleID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)signOutUserWithCompletionHandler:(CDUnknownBlockType)arg1;

- (void)_accountStoreDidChange:(id)arg1;

@end
