/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMAccessoryProfile.h>

@class HMAccessoryNetworkAccessViolation, NSArray;

@protocol _HMNetworkConfigurationProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile

{
    _Bool _networkAccessRestricted;
    _Bool _supportsWiFiReconfiguration;
    long long _targetProtectionMode;
    long long _currentProtectionMode;
    NSArray *_allowedHosts;
    HMAccessoryNetworkAccessViolation *_accessViolation;
    long long _credentialType;
    id <_HMNetworkConfigurationProfileDelegate> _delegate;
}

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly, getter=isNetworkAccessRestricted) _Bool networkAccessRestricted;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) _Bool supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id <_HMNetworkConfigurationProfileDelegate> delegate;

- (void)setCredentialType:(long long)arg1;
- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)messageDestination;
- (void)_handleProtectionModeUpdated:(id)arg1;
- (void)_handleHostsUpdated:(id)arg1;
- (void)_handleAccessViolationUpdated:(id)arg1;
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;
- (void)setCurrentProtectionMode:(long long)arg1;
- (void)setTargetProtectionMode:(long long)arg1;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)setNetworkAccessRestricted:(_Bool)arg1;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)setAllowedHosts:(id)arg1;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)setAccessViolation:(id)arg1;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)setSupportsWiFiReconfiguration:(_Bool)arg1;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (_Bool)__checkContextAndCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(_Bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(_Bool)arg7 credentialType:(long long)arg8;
- (void)updateProtectionMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
