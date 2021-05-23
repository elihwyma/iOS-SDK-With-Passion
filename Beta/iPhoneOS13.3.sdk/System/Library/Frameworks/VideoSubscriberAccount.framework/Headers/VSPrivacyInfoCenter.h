/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSPrivacyInfoCenter : NSObject

{
    int _registrationToken;
    long long _accountAccessStatus;
}

@property (nonatomic) int registrationToken;
@property (nonatomic) long long accountAccessStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPrivacyInfoCenter;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)updateAccountAccessStatusWithResponse:(id)arg1;
- (id)updateAccountAccessStatusWithError:(id)arg1;
- (void)_invalidateAccountAccessStatus;

@end
