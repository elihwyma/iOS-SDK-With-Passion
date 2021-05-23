/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSTelephonyController.h>

@class CTXPCServiceSubscriptionContext, NSString;

@interface TPSSubscriberTelephonyController : TPSTelephonyController

{
    _Bool _SIMPasscodeLockEnabled;
    long long _SIMPasscodeRemainingAttempts;
    NSString *_SIMStatus;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, getter=isSIMPasscodeLockEnabled) _Bool SIMPasscodeLockEnabled;
@property (nonatomic) long long SIMPasscodeRemainingAttempts;
@property (copy, nonatomic) NSString *SIMStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)simLockSaveRequestDidComplete:(id)arg1 success:(_Bool)arg2;
- (void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2;
- (void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2;
- (void)simPinChangeRequestDidComplete:(id)arg1 success:(_Bool)arg2;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)getSIMStatus;
- (void)fetchSIMPasscodeLockEnabled;
- (void)fetchSIMPasscodeRemainingAttempts;
- (id)getSIMPasscodeRemainingAttemptsValue;
- (void)changePIN:(id)arg1 newPin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSIMLockEnabled:(_Bool)arg1 pin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getSIMPasscodeLockEnabledValueWithError:(id *)arg1;
- (void)fetchSIMPasscodeLockEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (id)getSIMPasscodeRemainingAttemptsValueWithError:(id *)arg1;
- (void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(CDUnknownBlockType)arg1;
- (id)getSIMStatusWithError:(id *)arg1;
- (void)fetchSIMStatusWithCompletion:(CDUnknownBlockType)arg1;
- (id)getSIMPasscodeLockEnabledValue;
- (void)changePIN:(id)arg1 newPin:(id)arg2;
- (void)setSIMLockEnabled:(_Bool)arg1 pin:(id)arg2;
- (void)presentSIMPasscodeAlert;
- (void)fetchSIMStatus;

@end
