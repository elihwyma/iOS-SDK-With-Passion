/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class IMAccount, NSTimer, UIViewController;

@interface CNFAccountRegistrar : NSObject

{
    CDUnknownBlockType _completionBlock;
    IMAccount *_account;
    NSTimer *_registrationTimer;
    long long _serviceType;
    UIViewController *_presentationViewController;
}

@property (copy) CDUnknownBlockType completionBlock;
@property (retain) IMAccount *account;
@property (retain) NSTimer *registrationTimer;
@property long long serviceType;
@property (retain) UIViewController *presentationViewController;

- (void)dealloc;
- (void)_startTimer;
- (void)_stopTimer;
- (id)initWithServiceType:(long long)arg1 presentationViewController:(id)arg2;
- (void)continueRegistrationForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)registerAccountWithUsername:(id)arg1 password:(id)arg2 service:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_accountRegistrationStatusChanged:(id)arg1;
- (void)_registrationTimerFired:(id)arg1;
- (void)_configureAliasesForAccount:(id)arg1;
- (void)_continueRegisteringAuthenticatedAccount:(id)arg1;

@end
