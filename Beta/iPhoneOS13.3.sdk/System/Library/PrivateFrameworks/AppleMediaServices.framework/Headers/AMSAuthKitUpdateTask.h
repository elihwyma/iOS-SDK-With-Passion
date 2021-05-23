/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, ACDAccountStore, AMSAuthenticateOptions, NSArray, NSString;

@interface AMSAuthKitUpdateTask : AMSTask

{
    NSArray *_additionalControllers;
    ACAccount *_account;
    ACDAccountStore *_accountStore;
    AMSAuthenticateOptions *_options;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACDAccountStore *accountStore;
@property (retain, nonatomic) AMSAuthenticateOptions *options;
@property (retain, nonatomic) NSArray *additionalControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
+ (id)_createAuthenticationController;

- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)_performAuthKitUpdateUsingSecondaryPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateUsingRawPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateSilentlyForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateByPromptingUserForAccount:(id)arg1 options:(id)arg2;
- (id)_promptAllowedBundleIds;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
- (id)performAuthKitUpdate;

@end
